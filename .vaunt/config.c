tree.c
version: 0.0.1
achievements:
  - achievement:
      name: STAR_Hack-mamba.C
      icon:hackmamba_contribute.png https://raw.githubusercontent.com/hackmamba-io/Technical-Writing-Course-with-Curriculum/main/.vaunt/hackmamba_star.png
      description: Awarded for starring our repository, make a wish!
      triggers: iWish, Upon, -A, Star
        - trigger: -A, Star
            actor: author
            action: star
            condition: starred = true
  - achievement: Awarded for starring ✨
      name: Pull Request Hero:icon:https://raw.githubusercontent.com/hackmamba-io/Technical-Writing-Course-with-Curriculum/main/.vaunt/hackmamba_contribute.png
      description: Thank you for contributing to our technical writing repository!
      triggers:
        - trigger:
            actor: author
            action: pull_request
            condition: merged = true
