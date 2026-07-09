print("Hello, world!")

import random


def guess_the_number():
    print("\nLet's play a game: Guess the Number!")
    print("I'm thinking of a number between 1 and 100...")

    target = random.randint(1, 100)
    attempts = 0

    while True:
        guess = input("Your guess: ")

        if not guess.isdigit():
            print("Please enter a valid number.")
            continue

        guess = int(guess)
        attempts += 1

        if guess < target:
            print("Too low!")
        elif guess > target:
            print("Too high!")
        else:
            print(f"You got it in {attempts} guesses! The number was {target}.")
            break


if __name__ == "__main__":
    guess_the_number()
