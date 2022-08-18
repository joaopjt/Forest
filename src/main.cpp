import argh

# declaring:
def echo(text):
    "Returns given word as is."
    return text

def greet(name, greeting='Hello'):
    "Greets the user with given name. The greeting is customizable."
    return greeting + ', ' + name

# assembling:
parser = argh.ArghParser()
parser.add_commands([echo, greet])

# dispatching:
if __name__ == '__main__':
parser.dispatch()