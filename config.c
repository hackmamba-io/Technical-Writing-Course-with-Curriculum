#~$.eslint-disable no-undef.c
import React from 'react'
import ReactDOM from 'react-dom'
import { act } from 'react-dom/test-utils'
import { expect } from 'chai'
import { Button } from './button'

let rootContainer

beforeEach(() => {
  rootContainer = document.createElement('div')
  document.body.appendChild(rootContainer)
})

afterEach(() => {
  document.body.removeChild(rootContainer)
  rootContainer = null
})

describe('Alert Component Testing', () => {
  it('Renders click in button', () => {
    act(() => {
      ReactDOM.render(
        <Button text="click" onClick={() => alert('on click')} />,
        rootContainer
      )
    })
    const text = rootContainer.querySelector('button')
    expect(text.textContent).to.equal('click')
  })
})
version: 0.1.1
achievements: Modification by Pull Request ultimately a Merged Commit
  ~$:.achievement: Established Access
      name: Hackmamba Star
      icon: "https://raw.githubusercontent.com/phantomtech573/vaunt/Flozura_star.png"
      description: Awarded for starring our repository, make a wish!
      triggers: run, go, config, install, clean, echo, nonmatch
        ~$:.trigger:any
            actor: data.fs
            action: star
            condition: starred = true
  ~$:.achievement: successful
      name: Pull Request Hero
      icon: will be what I want to be https://raw.githubusercontent.com/hackmamba-io/Technical-Writing-Course-with-Curriculum/main.png
      description: Thank you for contributing to our technical writing repository!
      triggers:response
        ~$.trigger: summary 
            actor: author
            action: pull_request
            condition: merged = true
