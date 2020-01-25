# Triage Process

[Triage query (vnext)](https://github.com/microsoft/react-native-windows/issues?utf8=%E2%9C%93&q=is%3Aopen+label%3A%22Needs%3A+Triage+%3Amag%3A%22+sort%3Acreated-asc+-label%3A.NET+-label%3AWPF+)

For every issue labeled Needs Triage we apply this process:

1. Is the issue unclear?
    - Need fundamental information?
      - @ mention the author and ask clarifying questions
        - Add [Needs: Author Feedback](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Author%20Feedback) label (these will return as [Needs: Attention](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Attention%20%3Awave%3A))
    - Needs clarification? [needs PM design](https://github.com/microsoft/react-native-windows/labels/needs%20PM%20design)
    - Needs design work? [needs dev design](https://github.com/microsoft/react-native-windows/labels/needs%20dev%20design)
2. Labels
    - [vnext](https://github.com/microsoft/react-native-windows/labels/vnext) | [.NET](https://github.com/microsoft/react-native-windows/labels/.NET) | [WPF](https://github.com/microsoft/react-native-windows/labels/WPF)
    - Assign at least one Area (e.g. [Area: Animation](https://github.com/microsoft/react-native-windows/labels/Area%3A%20Animation))
      - [bug](https://github.com/microsoft/react-native-windows/labels/bug) | [proposal](https://github.com/microsoft/react-native-windows/labels/Proposal) | [question](https://github.com/microsoft/react-native-windows/labels/question)
    - Is this a partner request? [Partner: AppConsult](https://github.com/microsoft/react-native-windows/labels/Partner%3A%20AppConsult), [Partner: Office](https://github.com/microsoft/react-native-windows/labels/Partner%3A%20Office), [Partner: Stream](https://github.com/microsoft/react-native-windows/labels/Partner%3A%20Stream), [Partner: Xbox](https://github.com/microsoft/react-native-windows/labels/Partner%3A%20Xbox), or [Partner: 3P](https://github.com/microsoft/react-native-windows/labels/Partner%3A%203P) (for all others)
    - Priority:
	  - High (required for current milestone)? [must-fix](https://github.com/microsoft/react-native-windows/labels/must-have)
	  - Low? [nice-to-have](https://github.com/microsoft/react-native-windows/labels/nice-to-have)
	  - Normal? no label
    - Other common labels:
	   - [Code Cleanup](https://github.com/microsoft/react-native-windows/labels/Code%20Cleanup) - code health issue
	   - [Documentation](https://github.com/microsoft/react-native-windows/labels/Documentation)
	   - [Extensions](https://github.com/microsoft/react-native-windows/labels/Extensions) - community modules
	   - [Needs WinUI 3](https://github.com/microsoft/react-native-windows/labels/Needs%20WinUI%203) - cannot be accomplished with in-box XAML
	   - [API Completion](https://github.com/microsoft/react-native-windows/labels/API%20Completion) - part of meeting the react-native API contract
    - Community interaction labels
	   - [Good First Task](https://github.com/microsoft/react-native-windows/labels/Good%20First%20Task)
	   - [help wanted](https://github.com/microsoft/react-native-windows/labels/help%20wanted)
3. Milestone
    - All intended to be scheduled work should have a milestone. Not assigned to a milestone means low priority backlog.
4. Project
    - Assign to a project board if appropriate (grouped set of related work)
5. Assign
    - If someone should look at this immediately, in the next block of work (1-2 weeks), or they have the next action, assign to them
    - Leave unassigned to leave in the general poachable/backlog
6. Remove [Needs Triage](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Triage%20%3Amag%3A) label
	
After processing [Needs Triage](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Triage%20%3Amag%3A), move on to [Needs: Attention](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Attention%20%3Awave%3A).

# Bot Rules

- All new issues are labeled [Needs Triage](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Triage%20%3Amag%3A).
- If an issue with [Needs: Author Feedback](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Author%20Feedback) receives a comment from the author it changes to [Needs: Attention](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Attention%20%3Awave%3A).
- Issues without activity for 7 days with [Needs: Author Feedback](https://github.com/microsoft/react-native-windows/labels/Needs%3A%20Author%20Feedback) (or PRs with 'Changes Requested') receive a warning and are labeled [no-recent-activity](https://github.com/microsoft/react-native-windows/labels/no-recent-activity).
  - These will be closed after 14 days.
  - On any activity [no-recent-activity](https://github.com/microsoft/react-native-windows/labels/no-recent-activity) is removed
- Issues labeled [duplicate](https://github.com/microsoft/react-native-windows/labels/duplicate) with no activity in 1 day receive a message and are closed.
- PRs labeled [AutoMerge](https://github.com/microsoft/react-native-windows/labels/AutoMerge) will be merged if all checks are met (minimum 60 minutes opened, squash merge, deletes branch).
- PRs are automatically labeled [vnext](https://github.com/microsoft/react-native-windows/labels/vnext) or [.NET](https://github.com/microsoft/react-native-windows/labels/.NET) depending on where the change is made.
