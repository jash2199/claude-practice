# BR Portfolio Builder — Investment Policy Report
**Date: 2026-09-09 (Wednesday), ~16:14 ET (real ET verified via `TZ=America/New_York date`) — first BR read of the day, posted ~24 hours after 9/8's 16:11 ET read, closing out the most-overdue-analyst-input gap flagged by BW/GS through the afternoon.**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. All holding figures below are the trader's own 2026-09-09 ~15:36 ET Robinhood-verified `get_portfolio`/`get_equity_positions` snapshot (state.md), the freshest available at report time.*

---

## TOP OF REPORT — single biggest gap vs. policy

**OMCL remains the single largest live, addressable gap on the book: ≈−2.93pp under its 10% pool target (≈7.08% actual vs. 10% target)** — slightly wider than 9/8's −2.89pp. The DCA gate that governs closing it (rule 18) moved further away again today, not closer: accumulated profit closed the 15:36 ET run at **~$0.498**, down from 9/8's ~$0.795 close and well below this morning's ~$0.99 open — a genuine two-day round-trip lower, not noise. At ~$2.00 still required to cross the $2.50 threshold, this gate is now further from firing than it has been at any point since the "closest-ever" framing began two reports ago. No action recommended; the gate is mechanical and self-enforcing (rule 18), and OMCL's underweight is a byproduct of it working as designed, not a sizing error to correct manually.

**Second-order flag, more urgent than the gap math implies: GEHC is sitting ~0.5% above its own $65 mandatory structural-break revisit line** (live $65.325 at 15:36 ET, vs. $68.69 entry cost, −4.90%) — BW downgraded the book's overall risk grade to **D** this afternoon (from D+) explicitly citing GEHC's proximity alongside a fresh Hormuz escalation. This isn't a portfolio-construction gap (GEHC sits only +0.71pp over its 4% target) but it is the single most time-sensitive item in the book heading into tomorrow, and the next BR read should open with it if the line prints.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$50.498** (base $50 + ~$0.498 accumulated profit, down from 9/8's ~$50.795 on a broad intraday pullback). Deployable cash unchanged at $6.00 (~11.88% of pool). Prices below are the 15:36 ET live Robinhood snapshot (state.md), the last of seven runs today.

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core — US broad market | **VTI** | Core | 30% | ≈27.32% | −2.68pp | ~$13.80 |
| Core — international | **VXUS** | Core | 25% | ≈26.77% | +1.77pp | ~$13.52 |
| Satellite — AI/semis mega-cap | **NVDA** | Satellite | 11% | ≈11.00% | ~0.00pp | ~$5.56 |
| Satellite — energy hedge | **XLE** | Satellite | 10% | ≈11.24% | +1.24pp | ~$5.67 |
| Satellite — healthcare-tech value | **GEHC** | Satellite | 4% | ≈4.71% | +0.71pp | ~$2.38 |
| Satellite — healthcare-tech deep-value | **OMCL** | Satellite | 10% | ≈7.08% | −2.93pp | ~$3.57 |
| Deployable cash | — | Reserve | 10% | ≈11.88% | +1.88pp | ~$6.00 |
| **Total** | | | **100%** | **~100%** | | **~$50.50** |

*(Excluded from this table: the ~$50 untouchable reserve sitting outside the trading pool — not part of the deployable book and not subject to these targets.)*

Core sleeve: ≈54.09% actual vs. 55% target (−0.91pp, immaterial). Satellite sleeve: ≈34.03% actual vs. 35% target (−0.97pp, immaterial) — five distinct satellite exposures held simultaneously (NVDA, XLE, GEHC, OMCL, plus cash awaiting the OMCL DCA fire). No sleeve-level breach; every gap above still lives inside individual names, not the core/satellite split.

---

## Core holdings

- **VTI (Vanguard Total Stock Market ETF)** — Core, US broad-market beta. Underweight on a mechanical basis (the 9/3 GEHC-funding trim), not a call on VTI itself. Rule 6a's rate-shock pause remains in effect (10yr still reading ~4.79-4.80%, above the 4.75% threshold on Friday's confirmed close) and blocks any core top-up regardless of the gap — **but note a fresh, material input for the next FOMC-adjacent read**: markets are now pricing roughly 60% odds of a 25bp hike at the September 15-16 FOMC meeting (following stronger-than-expected jobs data), not the cut/hold debate this book had been tracking — a genuinely more hawkish repricing than BW's 8/28 57.5%-hike read. Per rule 17, this is a probabilistic signal to log loudly, not to act on directly; but it raises the odds that rule 6a's pause is tested by a real FOMC outcome, not just ambiguous WebSearch data, within the next week. Once the pause lifts, a small top-up back toward 30% remains next-in-line (exempt from rule 1 the same way the 7/21 and 7/30 core top-ups were).
- **VXUS (Vanguard Total International Stock ETF)** — Core, ex-US diversification. Modestly over target (+1.77pp); no action warranted — this is the position doing exactly what it's for, diluting the book's US/AI concentration as AI-linked names' share of US market cap keeps climbing, and as WEF's 2026 Global Risks Report flags geoeconomic confrontation (trade/investment/supply-chain fragmentation) as this year's top-ranked global risk — a structural argument for geographic diversification beyond a single trading cycle's news.

## Satellite holdings

- **NVDA** — Satellite, AI/semiconductor mega-cap conviction bet. Essentially exactly at its (8/27-revised) 11% target. MS's DCF reads it ~8.6% overvalued at base case (narrowing slightly from 9/8's ~10.6% on today's small pullback) — no discretionary add on the table regardless of target math (rule 5), and rule 6a's pause blocks any core-up-style logic here too. NVDA+OMCL combined concentration ~20.52% of equity, comfortably below the 25% combined trigger; NVDA alone ~12.49%, comfortably below the 18-20% single-name trigger.
- **XLE (Energy Select Sector SPDR)** — Satellite, diversified energy basket, this book's deliberate hedge against the Hormuz/oil risk factor. Modestly over target (+1.24pp) and the day's standout gainer for a third straight session as Iran's shipping-interdiction campaign escalated to its worst single day yet (Iran claims ~10 ships struck near the Strait following the US sinking five Iranian tankers — independently described by wire coverage as the biggest declared wave of tit-for-tat shipping attacks since the six-month-old war began). MS delivered a genuine methodology upgrade this run: a full ground-up two-name weighted composite DCF (XOM+CVX, ~39% of the fund) replacing the stale CVX-only proxy, narrowing the read from ~-18.3% to **~-10.4% overvalued** — still overvalued, verdict unchanged (hold the hedge, no add, no trim). WEF's own 2026 Energy Transition Index explicitly names Hormuz disruption as having "exposed vulnerabilities in energy systems already strained," a direct external validation of this book's hedge thesis rather than a reason to reconsider it.
- **GEHC (GE HealthCare)** — Satellite, quarter-size, third week held. **The book's most time-sensitive holding right now**: live $65.325, just ~0.5% above the $65 mandatory-revisit line written into the 8/20-onward contingency plan, essentially unchanged from the run before despite BW's slightly earlier read implying continued drift toward the line. MS's DCF reads it ~6.3% undervalued (a new widest gap, driven by the falling price, not a model change) — not itself a buy signal for a position already at target weight. Wells Fargo conference (9/9, 10:15am ET) has been fully reviewed by GS/MS/state.md with no structural break found (management "pleased with execution," no guidance change). Per the contingency plan's own rule 5, only an actual print at or below $65 fires the mandatory full 5-analyst re-read — proximity alone does not. **This desk's own read for the next run, if it fires: nothing found this cycle changes the underlying valuation case (MS still reads undervalued, no contract/backlog/margin deterioration identified by any desk) — a clean $65 print without a fresh structural cause would read, on today's evidence, as a potential-add signal under rule 5's own framing (§3 of the OMCL-precedent logic), not an automatic exit. That is a call for the full 5-analyst re-read to make together, not a unilateral BR position, but it's worth stating in advance per rule 4's "no same-minute decisions" discipline.**
- **OMCL (Omnicell)** — Satellite, this book's deepest discount (MS's DCF reads ~61.8% upside, a new widest-recorded gap, up from 9/8's ~60.1%) and its only loss position (-28.5% unrealized vs. the $46.99 average cost). Underweight target by design of rule 18's DCA gate — see top-of-report, the gate moved further away today rather than closer.

---

## Expected annual return range

At current weights (≈54% core / ≈34% satellite / ≈12% cash), blended expected return **~11–15% annualized**, unchanged from 9/8 — driven by VTI/VXUS's long-run ~7–9% nominal equity return, NVDA's structurally higher (but volatile) growth premium, OMCL/GEHC's value/turnaround upside if their respective discounts close (OMCL's is now the widest recorded in this book's history), and XLE's more muted, defensive energy-beta contribution — currently running hot on an active, worsening geopolitical shock, not a baseline assumption. A hawkish September 15-16 FOMC outcome (now ~60%-priced for a hike) would be a modest headwind to the multiple-driven part of this range (NVDA, and by extension the core sleeve's valuation support) without changing the structural thesis.

## Expected maximum drawdown, bad year

- **Pool-level (trading capital only):** −20% to −28% in an ordinary bad year; −30% to −40% in a severe one (a genuine AI-multiple correction, a Hormuz-driven oil/rate shock, or both compounding — now a *live*, not hypothetical, combination: rule 6a's pause is still fired and the Hormuz conflict just posted its worst single day yet). Widening the severe-case band slightly from 9/8's -38% floor given today's dual escalation (BW's D downgrade, the "biggest wave of attacks" framing, and a genuinely repriced hawkish FOMC).
- **Account-level (including the untouchable ~$50 reserve):** roughly halved, since the reserve is flat cash and dilutes any trading-pool loss across the full account.

---

## Rebalancing schedule and trigger rules

- **Scheduled cadence:** monthly full re-underwrite (this book's current window opened 9/1); daily monitoring via this desk and BW's risk reads between full underwrites.
- **Standing triggers, evaluated every scheduled run regardless of news flow (rule 12 — pre-committed triggers don't need a fresh catalyst):**
  1. Single-position drift ≥5pp of pool from target → mandatory review (validated once, VTI 8/7). No position currently within range (largest live gap is OMCL at −2.93pp).
  2. NVDA single-name equity weight crossing ~18–20% → mandatory review (never yet fired; currently ~12.49%).
  3. NVDA+OMCL combined equity weight crossing ~25% → mandatory review (currently ~20.52%, ~4.5pp buffer).
  4. OMCL DCA gate (rule 18): accumulated profit crossing $2.50 → mandatory review to add to OMCL in tranches (currently ~$0.498, **~$2.00 away** — the furthest reading in over a week).
  5. GEHC structural-break contingency (rule 5 of that plan): a live print at or below $65 → mandatory full 5-analyst re-read at the next run (currently $65.325, **~$0.325 / ~0.5% away**, the closest-ever approach).
  6. Rule 6a rate-shock pause: **currently fired, still in effect** (10yr ~4.79-4.80%, above the 4.75% threshold). New this run: the September 15-16 FOMC meeting (6-7 days out) is now the natural next resolution point for this pause one way or the other — a genuine hike would likely extend or reinforce it, a dovish surprise or hold-with-dovish-guidance could plausibly start the two-consecutive-closes-below-threshold clock rule 11 needs to define an explicit lift condition.
- Every trigger above is falsifiable and time-boxed where applicable (rule 7); every time-box defaults to no-action at expiry, never to a forced purchase (rule 16).

---

## Tax efficiency strategy (taxable account)

- **All holdings are equities/ETFs in a taxable cash account — no tax-loss harvesting has occurred to date** despite OMCL's sizable unrealized loss (-28.5%, now the deepest yet recorded). At this book's scale (a ~$3.57 position), a harvest sale would generate a trivial capital loss against essentially no realized gains elsewhere to offset, and OMCL is this book's highest-conviction remaining discount (MS's widest-ever DCF gap) — selling to harvest and sitting out a 30-day wash-sale window would mean missing the name exactly as its DCA gate (however distant today) is designed to add to it, not exit it.
- **VTI's 8/7 and 9/3 trims remain the book's only realized activity to date** — both small, short-term, taxed as ordinary-rate short-term gains if net positive; de minimis liability given the trim sizes. As positions age (VTI's oldest lot is now ~9 weeks old), future trims should preferentially sell the highest-cost-basis, longest-held lots if specific-lot identification is ever available (Robinhood's default is FIFO) — still worth a direct ask to Jash.
- **ETFs (VTI, VXUS, XLE) remain inherently more tax-efficient** than direct stock picks for a taxable account (in-kind creation/redemption minimizes capital-gains distributions) — the book's core/satellite split leans tax-efficient by construction.
- **Dividend watch**: NVDA's $0.25 ex-date (9/10, tomorrow) is the nearest dividend event on the book; VTI/VXUS/XLE all pay qualified dividends. Once dividend income becomes material (still immaterial at this book's ~9-week age and scale), reinvest via DRIP-equivalent fractional buys rather than let it sit idle, consistent with the DCA discipline already governing OMCL.

---

## Dollar cost averaging plan for redeploying profits

- **OMCL DCA gate (rule 18) remains the book's primary, already-formalized DCA mechanism**: accumulated trading profit crossing $2.50 triggers a mandatory review to add to OMCL in tranches, funded from profits rather than the reserved base capital. At ~$0.498 today (down from ~$0.795 on 9/8 and ~$0.99 this morning), the gate moved further away for the second consecutive read — a reminder that "accumulated profit" is itself a live, two-way mark-to-market figure at this book's scale, not a monotonically rising number. No change to the mechanism; just a status update.
- **XLE's entry-trigger design (the $5 half-size fire on a $55-58 pullback) remains the template for any future satellite DCA-style entry** — pre-committed size, pre-committed zone, hard time-box, all decided before price pressure arrives. This book has now validated the pattern four times (OMCL, XLE-style trigger design informing GEHC, GEHC's own 8/20 trigger, and OMCL's DCA gate itself) — continue using it as the default structure for any new satellite idea rather than ad hoc sizing.
- **Deployable cash ($6.00, ~11.88% of pool)** sits modestly above the 10% reserve target — not itself an actionable gap (rule 1's ≥5pp threshold is far off), but worth noting it has drifted up slightly (from ~$6.00 flat, unchanged in dollar terms, but as a rising share of a shrinking pool) purely from the broader pool's pullback today, not from a deliberate cash-raise.

---

## Areas to consider — recent WEF / macro-policy discussion points

- **WEF's Global Risks Report 2026 ranks "geoeconomic confrontation" as the #1 risk most likely to trigger a global crisis in 2026 (18% of respondents) and #1 for severity over a two-year horizon** — up eight positions from last year's report. This is a direct, external validation of the book's core/satellite structure: VXUS's ex-US diversification and XLE's energy hedge are exactly the kind of positioning this risk category argues for, not tactical bets that happen to be working.
- **WEF's 2026 Energy Transition Index explicitly names Strait of Hormuz disruption as having "exposed vulnerabilities in energy systems already strained by rising demand, infrastructure bottlenecks and concentrated clean-energy investment,"** and recommends diversifying "across fuels, import partners, supply chains, and critical minerals" — a structural argument, independent of this week's price action, for continuing to hold a diversified energy hedge (XLE, 24 holdings) rather than a single-name bet, and for the standing OXY veto (direct shipping-interdiction exposure, rule 3) to remain in force regardless of valuation.
- **The September 15-16 FOMC meeting is now the nearest live macro-policy catalyst on the book's calendar (6-7 days out)**, with markets pricing ~60% odds of a 25bp hike following stronger-than-expected jobs data and hawkish Fed commentary (Chair Warsh's inflation-taming pledge) — a genuinely more hawkish setup than the 57.5%-hike read this book was tracking two weeks ago. A hike would likely reinforce rule 6a's already-fired pause; a hold with dovish guidance is the more plausible near-term path to eventually lifting it. Either way, this is the cleanest, most datable resolution point rule 6a has had since it fired 9/2, and the next several runs should treat it as the key event to watch rather than another ambiguous WebSearch-sourced Treasury close.
- **Goldman's own commodity desk has floated Brent above $120/bbl in 2027 if Gulf crude output stays ~4M bbl/day below prewar levels** — a tail scenario this book has no direct way to act on today (XLE's hold-no-add stance is already the correct hedge posture), but worth keeping on file as the outer bound of the energy-shock scenario feeding the drawdown estimates above.

---

## One-page investment policy statement

**Objective:** Compound a $50 base (plus accumulated trading profits) inside a ~$100 taxable cash account into a long-running, auditable track record, via a disciplined core/satellite equity and ETF portfolio. No options. Aggressive risk tolerance, short-to-medium horizon, long-run compounding ambition.

**Structure:**
- **Core (55% target):** VTI 30% (US broad market), VXUS 25% (ex-US diversification). The stabilizing base of the book, rebalanced only on ≥5pp drift or a genuine structural event, never on news-cycle noise.
- **Satellite (35% target):** NVDA 11% (AI/semis conviction, hard-capped by concentration triggers), XLE 10% (diversified energy hedge against the live Hormuz/oil shock), GEHC 4% (healthcare-tech value, quarter-size, contingency-plan-governed), OMCL 10% (deepest-discount healthcare-tech position, currently underweight by DCA-gate design, not error).
- **Reserve (10% target):** deployable cash, held for the OMCL DCA gate and any future falsifiable, pre-committed entry trigger — never deployed reactively.

**Discipline:**
1. Every new position or add is governed by a pre-written, falsifiable, time-boxed trigger (rule 7) — never a same-minute reaction to news or price (rule 4).
2. Structural-break-only reaction rules govern every binary event (earnings, conferences, macro prints) — a bad number alone is never a sell signal; a cut to guidance, a lost contract, or a margin/bookings deterioration trend is (validated three times: OMCL 7/30, NVDA 8/27, GEHC's plan still live).
3. Every discretionary sizing decision requires cross-desk vetting (MS valuation + BW risk, rule 6) before capital moves — no single analyst's conviction is sufficient alone.
4. Concentration triggers (NVDA single-name, NVDA+OMCL combined) are forced decision points, not automatic sells — but they are never allowed to lapse silently once flagged (rule 14).
5. Macro/rate-shock pauses (rule 6a) block new high-multiple adds mechanically, regardless of how compelling any single add looks in isolation, until the underlying data resolves.
6. Every time-box defaults to no-action at expiry (rule 16) — this book never forces a trade to meet a self-imposed deadline.

**Current live status (2026-09-09, 15:36 ET basis):** total account $100.50 (pool $50.50, reserve $50 untouched). All standing triggers clean except two approaching thresholds worth active monitoring — GEHC's $65 revisit line (~0.5% away) and the OMCL DCA gate (moving away, not toward, at ~$2.00 required). Risk grade D (BW, downgraded from D+ this afternoon on Hormuz escalation + GEHC proximity). No trade recommended from this desk today; policy is being followed, not breached.

---

Sources:
- [Treasury yields fall after Fed's Waller signals support for no rate hike - CNBC](https://www.cnbc.com/2026/09/03/us-treasury-yields-bonds.html)
- [Divided Fed Leaves Interest Rates Unchanged - Charles Schwab](https://www.schwab.com/learn/story/fomc-meeting)
- [The Strait of Hormuz erupts as oil prices top $100 - WBUR](https://www.wbur.org/hereandnow/2026/09/09/oil-prices-strait-of-hormuz)
- [Oil rises to $99 on report Iran launched second undisclosed attack on U.S. Navy ships - CNBC](https://www.cnbc.com/2026/09/08/oil-prices-today-brent-wti-hormuz-iran-war.html)
- [Global Risks Report 2026: Geopolitical and Economic Risks Rise in New Age of Competition - World Economic Forum](https://www.weforum.org/press/2026/01/global-risks-report-2026-geopolitical-and-economic-risks-rise-in-new-age-of-competition/)
- [Fragmentation in the Global Energy Transition as Geopolitical Risks Surge - World Economic Forum](https://www.weforum.org/press/2026/06/fragmentation-in-the-global-energy-transition-as-geopolitical-risks-surge/)
- [Top 10 Risks in 2026: Geoeconomic Confrontation Tops the List - World Economic Forum](https://www.weforum.org/stories/2026/01/global-risks-2026-top-10-two-and-ten-year-horizon/)
