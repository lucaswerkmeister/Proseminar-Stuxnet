Gliederung
==========

WIP an erstem grobem Entwurf.

0. Begrüßung etc
1. Einführung
   - Zielanlagen
   - Step 7
   - PLCs
   - etc
   - “Hier muss Stuxnet rein”
2. Verbreitung
   1. Infektion
      - removable drives
        - LNK (29-30) – 1.10x only
        - Autorun.inf (30-32) – 1.001 only
        - Step7 projects – s. u.
      - network
        - WinCC (26-27)
        - Print Spooler (27-28)
        - SMB (28)
      - Step7 projects
        - S7P files (33-34)
        - MCP files (34) ?
        - Which files?
          - 0.5 infects files on inserted removable drives
          - All versions infect opened files
          - But files are always checked for “suitable”
   2. Updates
      - network
        - peer-to-peer (25-26)
        - Mailslots (0.5 5) – 0.5 only
        - File shares (0.5 5) – 0.5 only
      - Step7 projects
        - S7P files (33-34)
        - MCP files (34)
        - TMP files (34-35)
3. Tarnung
   - Windows rootkit (24)
   - PLC rootkit (48)
4. Sabotage
   - vielleicht sollte hier die PLC erklärung hin? wie viel brauchen wir überhaupt?
   - infection checks (39)
     - contain the actual attack to the target even though the threat spread globally
   - sequence A/B (41-45) – 1.x only
   - sequence C (45-48, 0.5 5-12) – deactivated and incomplete in 1.x
