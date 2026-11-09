# BR Portfolio Builder — Investment Policy Report

**Date: 2026-11-09 (Monday), ~15:13 ET** (verified via `TZ=America/New_York date`). First report from this desk since 11/6 ~15:13 ET — exactly 3 days, now the chronic cadence gap BW/GS have both flagged (BR was ~71-74 hours stale as of this morning). Figures below use state.md's freshest live-Robinhood-verified snapshot (14:37 ET, the trader's seventh run of the day), cross-checked against BW's 13:42 ET risk report (D+, held), GS's 14:45 ET screener, MS's 09:17 ET valuation memo, and JPM's 08:23 ET earnings-calendar brief.

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. I do not have direct Robinhood access; per house rule 4, figures below are the trader's own live-Robinhood-verified positions as relayed through state.md/BW.*

---

## TOP OF REPORT — single biggest gap vs. policy, and the headline decision

**The single biggest pp gap vs. target is still GEHC, at +2.21pp (6.21% actual vs. 4% target) — now the closest live mechanical gate anywhere in this book, ~1.29pp from the 7.5%/+3.5pp partial-trim trigger.** This is the fourth-plus consecutive report (GS twice, MS, BW twice, now this desk again) naming the same convergence. GS's 14:45 ET report escalated past a flag into an explicit ask: whether the pool-weight drift trigger needs a secondary absolute-valuation-gap backstop, given that part of GEHC's approach to 7.5% is mechanical (NVDA's falling dollar weight shrinks the pool denominator, inflating every other position's share) rather than purely GEHC's own appreciation. Per rule 14/19, a repeated cross-desk ask that never converts into a decision is noise — so this desk is answering it directly, not flagging it a fifth time:

**Decision: decline to add a valuation-gap backstop to the trigger. The 7.5%/+3.5pp line stays a pure pool-weight mechanism, and it fires unconditionally the moment it is crossed — no MS/BW sign-off required at that moment, because their inputs are already continuously folded into the standing review, not a gate on top of it.** Reasoning: concentration risk is a share-of-portfolio measure by construction — it doesn't need to care *why* the share grew, because the risk to the book (an outsized dollar swing in one name moving total equity disproportionately) is identical either way. A valuation-gap backstop would convert a pre-committed mechanical trigger into a discretionary one gated by a DCF debate, which is exactly the failure mode rules 12/16 exist to prevent. **It also happens that there is no live conflict to resolve today**: MS's and GS's own valuation reads (-9.89% to -12.42% overvalued, widening for three straight reports) point the same direction as the concentration trigger — if it fires, trimming GEHC is both a concentration fix and a take-some-profit-on-a-richening-name decision, not a case of two signals fighting each other. If a future divergence ever arises (GEHC's pool weight inflated by a crash elsewhere while GEHC itself is fairly or cheaply valued), that is the moment to revisit — not a hypothetical worth building into the mechanism now.

**Second part of the decision, directly matching BW's own repeated ask: the next run that sees GEHC's live pool weight actually cross 7.5% must execute the partial-trim review that same run, not file a fifth or sixth flag.** Pre-specifying what "execute" means, so there's no ambiguity to stall on when it happens: size a partial trim using that run's live Robinhood quote (never a stale one), trim back toward (not necessarily all the way to) the 4% target band, note the realized gain is short-term (every lot in this account is short-term — see tax section below), and do **not** wait for a same-day fresh MS/BW report first — their standing reads are already on file and already say the same thing; a trigger that pre-commits to acting is defeated if it then waits for one more confirmation cycle.

**Third item: yesterday-into-today's NVDA story has moved from a one-day regulatory-fear scare to a sustained, multi-session line breach, now layered with an independently-confirmed governance headline (the Huang/Megaspeed congressional-scrutiny story).** NVDA's $180 contingency-plan-v2 line has been breached across all seven runs today, oscillating $174-179, with zero of the four named structural disqualifiers firing. **This desk's answer is unchanged and stays unchanged: the line is not this desk's trigger.** It belongs to the trader's own structural-break-only discipline (rules 1/2/4), and this desk's role if it fires is sizing, not the decision to act. NVDA's pool weight (8.85%, -1.15pp vs. the 10% target) remains modestly *under*weight for a third consecutive trading day — the policy is doing exactly what it is designed to do through a stress event, not drifting into a problem.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$49.394** (base $50, ≈-$0.606 accumulated loss, -1.21% — per state.md's 2026-11-09 ~14:37 ET live-Robinhood-verified snapshot, the trader's seventh run of the day). Total account ≈$99.394 (pool + untouchable ~$50 reserve). Deployable cash $6.10 (~12.35% of pool).

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap (pp) | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core | VTI | US broad-market beta | 26% | 27.55% | +1.55 | ~$13.61 |
| Core | VXUS | Ex-US diversification | 27% | 25.99% | −1.01 | ~$12.84 |
| Satellite | NVDA | AI/semis conviction | 10% | 8.85% | −1.15 (still under target) | ~$4.37 |
| Satellite | XLE | Energy / Hormuz supply-shock hedge | 12% | 10.86% | −1.14 | ~$5.36 |
| Satellite | GEHC | Healthcare-tech value (standard band, 4%/±5pp) | 4% | 6.21% | **+2.21 (the biggest gap in the book, and the closest live trigger — ~1.29pp from firing)** | ~$3.07 |
| Satellite | OMCL | Deepest-discount healthcare tech | 10% | 8.17% | −1.83 | ~$4.04 |
| Reserve | Cash | GEHC trim buffer, OMCL DCA gate, general dry powder | 11% | 12.35% | +1.35 | ~$6.10 |

No position breaches a hard mechanical trigger today. GEHC's +2.21pp sits inside its ±5pp band but is now the closest-to-firing gate anywhere in the book (~1.29pp). NVDA's modest underweight persists for a third consecutive day — read as the policy working as intended through a sustained stress event, not a gap to close. OMCL's −1.83pp remains the designed, gated state of rule 18 (accumulated profit still negative), not a discretionary-cash problem. **Standing instruction unchanged: the next incremental core dollar still routes to VXUS, not pro-rata, per the 10/19 AI/semis core-tilt policy.**

---

## Core holdings

- **VTI (Vanguard Total Stock Market ETF)** — Core, US broad-market beta, target 26%. At 27.55% of pool (+1.55pp), modestly overweight, well inside the 5pp band. Up ~2.48% vs. Friday's close as the broad tape rallied today. No change. Rule 6a's pause on new core-ups stays live.
- **VXUS (Vanguard Total International Stock ETF)** — Core, ex-US diversification, target 27%. At 25.99% (−1.01pp), modestly underweight, well inside the band. Remains the designated recipient of the next incremental core dollar per the 10/19 standing tilt. No new core dollar pending; rule 6a's pause governs timing.

## Satellite holdings

- **NVDA** — Satellite, AI/semiconductor mega-cap conviction bet, target 10%. Actual weight **8.85% of pool — under target for a third consecutive day (-1.15pp)**. Live price $176.16, -5.61% vs. Friday's close, the $180 contingency-plan-v2 line breached across all seven runs today in a $174-179 band, never closing back above it. NVDA+OMCL combined concentration ~19.42% of equity (25% trigger, ~5.58pp buffer, clean and widening). MS's own DCF reads this move as a *widening undervaluation gap* (+8.69%, up from +1.43% on 11/6) — the same price move that breached the trader's structural-break line made the stock cheaper against this desk's fair-value anchor, not more expensive; the two numbers measure different things and should not be conflated. **New this report: the Huang/Megaspeed congressional-scrutiny story is now independently confirmed (not just internally sourced) — three named House committee chairs, an 11/4 letter, an 11/11 response deadline (2 days out), an 11/18 briefing request (the day after NVDA's 11/17 print).** This is a governance/headline-risk category, not an operating one — no revenue, margin, or contract linkage has surfaced, and this desk is not treating it as a sizing input today. But it is the first live instance of exactly the AI-governance risk category the WEF Global Risks Report 2026 names as the fastest-rising risk in the report's history (see macro section below) landing directly on this book's largest position, and it deserves tracking at the policy level, not just the risk desk's level, through the 11/11 and 11/17-18 dates. Print remains confirmed Tuesday 2026-11-17, 5pm ET (T-8).
- **XLE (Energy Select Sector SPDR)** — Satellite, this book's deliberate Hormuz/oil supply-shock hedge, target 12%. Actual weight 10.86% (−1.14pp, inside band). MS's 11/6 oil-attribution rebuild stands unchanged (base $58.5, -4.57% overvalued at today's $61.83) — no fresher Brent print found by any desk this run, the chronic oil-dateline wall holding again. No add, no trim.
- **GEHC (GE HealthCare)** — Satellite, target 4%, standard-band governance, ±5pp (9% ceiling). Actual weight 6.21% (+2.21pp — see headline decision above). MS's base-case overvaluation gap has widened to -9.89% (from -8.65% on 11/6); GS reads it even richer at -12.42%, its widest ever logged on this name, over three straight reports of widening. This desk is **not** treating the widening gap as a trim trigger on its own (addressed above: the mechanical pool-weight line governs timing) and is **not** revising the 4% target in either direction (rule 20). Hold, with the explicit execute-on-cross instruction above now standing.
- **OMCL (Omnicell)** — Satellite, target 10%, this book's deepest discount on paper. Actual weight 8.17% (−1.83pp, the DCA-gate-designed underweight). Live buffer to BW's $35.24 bear-case revisit line sits at ~7.52% as of 14:37 ET — never crossed, and the morning's liquidity scare (bid/ask spread blown out to ~2.53% at the open) has fully normalized to ~0.26%, resolved. Rule 18's DCA gate remains the sole sizing mechanism: accumulated profit is still **negative** (-$0.606 vs. the $2.50 threshold, ~$3.11 away), the direct consequence of the book's broader pullback since Wednesday, not a change to the plan. No action today.

---

## Expected annual return range

At current weights (≈53.54% core / ≈34.09% satellite / ≈12.35% cash on a pool basis), blended expected return **~9-13% annualized, unchanged.** NVDA's sustained $180-line breach and the Huang/Megaspeed headline are real, live risk events, but neither changes the underlying long-run return assumption for any held name — no structural fact has surfaced that would.

## Expected maximum drawdown, bad year

- **Pool-level (trading capital only): BW's 13:42 ET stress test is the fresh standing reference this report: ≈-34.2% of equity, ≈-14.9% of total account value** (updated from the prior ~-33%/~-16-17% reads — the modest change reflects this week's shift in position weights, not a change in methodology). This desk treats the figure as BW's owned methodology and adopts it directly rather than re-deriving it independently.
- **This methodology models a broad recession, not an idiosyncratic single-name event.** A confirmed trade through NVDA's $180 line, or a confirmed break of OMCL's $35.24 line, would land on one position alone — both remain live, closely-watched questions tracked separately from the broad stress test above.
- **Binary event risk: NVDA's 11/17 print (T-8) is the single most consequential open date on this book's calendar**, arriving in a week where the stock has already spent a full session below its own named risk line for the first time ever. The options market is pricing a record ±8.5-8.8% implied move. Contingency plan v2 already governs the reaction mechanically; this desk's role if it fires is sizing, not the trigger decision itself.
- **New governance-risk layer: the Huang/Megaspeed story adds an unhedgeable, CEO-personal/governance risk vector directly on top of the book's largest position, 6 days before its own binary event's response deadline (11/11) and 1 day after the print itself (the 11/18 briefing request).** No equities-only instrument in this book's toolbox touches this risk category. Named here at the policy level because it sits on the position this desk sizes and targets, not just because BW flagged it first.
- **Rate risk remains the standing concern, now with a fresher and more adverse data point.** BW's fresh WebSearch this run surfaced a WSJ survey of 71 economists (fielded 10/2-10/7) projecting the 10-year Treasury at **5.1% by end-2026**, up sharply from a 4.4% forecast as recently as July — directionally consistent with, not contradicting, this team's standing 5.10% DGS10 reference (still 10/15-dated, now 25 days stale). This is a genuinely elevated-rate regime by the last two decades' standard, and it matters most for this book's two highest-duration names (NVDA, OMCL). **The Fed funds range discrepancy this desk flagged on 11/6 (3.75-4.00% per the team's standing reference vs. a conflicting single-source read of 3.50-3.75% under a different Fed Chair) remains unresolved three days later** — no desk has run the dedicated FOMC-focused search this desk asked for. Repeating the ask once more, explicitly, rather than letting it become a second unresolved repeated item: MS or BW should close this at the next report. Rule 6a's pause is unaffected either way — both ranges sit well clear of the ~4.75% reopening threshold.
- **WEF Global Risks Report 2026's AI-concentration theme has now had its first live governance-specific instance, not just a market-selloff instance.** Last week's regulatory-fear selloff-and-recovery was the first live test of the AI-technology-adverse-outcomes risk category on this book's largest position; this week's independently-confirmed Huang/Megaspeed congressional-scrutiny story is a second, distinct flavor of the same underlying category (governance/political, not market-pricing) landing on the same position within days. Two different mechanisms, same risk category, same ticker — worth naming as a pattern, not two unrelated events.

## Rebalancing schedule and trigger rules

- **Calendar:** full re-underwrite monthly — last fulfilled 11/2; next due ~12/1. Off-cycle confirmation on any ≥5pp single-position drift, a fresh cross-desk structural finding, or a repeated cross-desk ask requiring an explicit adopt/decline (this report is exactly that last case, triggered by GS/BW's repeated GEHC-trigger-design ask).
- **Mechanical triggers currently live, none fired this report:**
  - Single-position drift ≥5pp vs. target (26%/27% VTI/VXUS split) — clean.
  - **GEHC standard-band (4%/±5pp, 9% ceiling)** — ~2.79pp buffer to the hard ceiling, clean. **7.5%/+3.5pp disciplined partial-trim trigger** — ~1.29pp away, the closest live gate in the book. **Design decision this report: trigger stays a pure pool-weight mechanism, no valuation-gap backstop added; the next run to see it cross must execute the review that same run (see headline decision).**
  - **OMCL DCA gate** (rule 18) — accumulated profit negative; ~$3.11 away from the $2.50 threshold.
  - **OMCL price revisit line** ($35.24, adopted 10/30 per MS) — live buffer ~7.52% as of 14:37 ET, not close to firing.
  - NVDA+OMCL combined 25%-of-equity concentration trigger — ~5.58pp buffer, clean and the widest reading in weeks.
  - NVDA single-name concentration — clean, still under its own 10% pool target for a third day.
  - **NVDA $180 revisit line (contingency plan v2)** — live buffer -2.13% (breached) as of 14:37 ET, a sustained multi-session breach, not fired as a trade decision (not this desk's trigger).
  - Rule 6a rate-shock pause (10yr ≥4.75%/30yr ≥5.25% on two consecutive closes) — in effect since 9/2, blocking new core/NVDA adds. No change.
  - Rule 20 standing instruction: no new deployable cash routed to NVDA regardless of this week's volatility.
  - AI/semis core-tilt (adopted 10/19): next incremental core-sleeve dollar routes to VXUS, not pro-rata, until look-through AI/semis exposure falls back under ~20% of pool.
- Every trigger above fires to a **mandatory review or, for the OMCL/GEHC lines, a pre-specified mechanical action**, not an open-ended discretionary call.

## Tax efficiency strategy (taxable account)

- Every lot in this account remains short-term — no long-term treatment available yet on any position.
- **Tax-loss harvesting candidate: OMCL**, still the book's only loss position (unrealized ~-19.3% as of 14:37 ET). No harvest recommended: rule 18's DCA gate is the designed mechanism here, not a harvest/replace trade, and fundamentals remain intact (FY26 guide raised on the Q3 beat; the bear-case buffer, while narrower earlier in the week, has never been breached, and has since widened back to ~7.5%).
- **A future GEHC partial trim (now explicitly pre-committed to execute on the 7.5% cross) will realize a short-term gain** — GEHC's unrealized gain (~+22.75%) is the largest in the book. Accepted as the cost of the discipline, not a reason to avoid the trigger, and now explicitly priced into the execution instruction above.
- At this book's sub-$100 scale, wash-sale and lot-selection mechanics matter less than at institutional size, but the discipline (don't manufacture a taxable event without a trigger) scales down just as well as it scales up.

## Dollar-cost-averaging plan for redeploying profits

- **OMCL remains the designated DCA target** once the rule-18 gate fires ($2.50 accumulated profit; currently negative, ~$3.11 away). Capital source stays earned profit via the gate, not general deployable cash.
- **Standing instruction for any future general deployable-cash core top-up: route to VXUS, not a VTI/VXUS split**, until the AI/semis look-through figure falls back under ~20% of pool.
- **Proceeds from a future GEHC partial trim route to the deployable-cash buffer first, not an automatic redeploy**, per rule 6a's pause on new core adds.
- The $6.10 deployable-cash balance stays fully reserved for the OMCL DCA gate and the GEHC trim buffer — no partial pre-deployment ahead of either threshold.

## Areas to consider according to recent WEF / macro-policy discussions

- **The WEF Global Risks Report 2026's "Adverse Outcomes of AI Technologies" theme now has two distinct live instances on this book's largest position within the same two-week span.** First, a sourced, market-wide regulatory-fear selloff (unwound choppily over several sessions). Second, an independently-confirmed, CEO-specific governance/congressional-scrutiny story (Huang/Megaspeed) landing directly on the same name, with a response deadline (11/11) arriving days before the stock's own largest-ever binary print (11/17). The report names this risk category as the fastest-rising in its 21-year history, climbing toward the top-5 on a 10-year horizon — this book now has two different, dated, real-world mechanisms illustrating exactly why, in under two weeks.
- **Rate path remains the most under-sourced macro input in this book.** BW's fresh WSJ-survey data point (10yr projected to 5.1% by year-end, up from 4.4% in July) reinforces the team's existing 5.10% reference rather than contradicting it, but the Fed funds range conflict this desk flagged on 11/6 is still open three days later — the one item on this list this desk can point to as an actual unresolved process gap, not just a risk to monitor.
- **Election outcomes as a two-sided macro risk factor** — last week's pattern (a relief rally, then a regulatory-fear reversal, then a choppy recovery) is exactly the kind of non-monotonic reaction this desk's mandate treats as a macro input to watch on both sides, not a trade to chase in either direction.
- **Geopolitical tail risk / XLE hedge economics** — unchanged since the 11/6 oil-attribution rebuild; no fresher Brent print found by any desk today.
- **10-year Treasury** — still anchored to the team's last sourced read (5.10%, 10/15-dated, now 25 days stale), now independently reinforced in direction (not magnitude) by BW's fresh survey. Well clear of the ~4.75% rule-6a reopening threshold regardless.
- **Practical takeaway heading into the rest of the week.** The headline decision above (GEHC trigger design, declined; execute-on-cross instruction, reaffirmed) is the substantive policy output of this report. NVDA's $180 line remains the single most important number in the book per BW, still not this desk's trigger, still not crossed as a trade decision despite a full multi-session breach. The Huang/Megaspeed story is now a policy-level watch item, not just a risk-desk one, through 11/11 and 11/17-18.

---

## One-page investment policy statement

**Client:** The "Claude Robinhood Trader" experiment — a ~$100 taxable cash account with ~$50 of trading capital (base $50 + accumulated profits) and a ~$50 reserve that is never touched by this strategy. Aggressive risk tolerance, short-to-medium horizon, ambition to compound into a long-running track record. Equities and ETFs only — no options, no leverage, no shorting. Fractional shares available.

**Objective:** Grow the trading pool at an expected ~9-13% blended annualized return, accepting a plausible ≈-34% equity-level (≈-15% total-account) bad-year drawdown per BW's stress test, while funding all new risk exclusively from capital the book has already earned (never from the untouchable reserve, never ahead of a rule-18-style earned-profit gate) — and tilting new core-sleeve capital toward the less tech-concentrated international sleeve until the book's AI/semis look-through exposure eases, per the 10/19 policy.

**Target allocation (pool basis):** 26% VTI (core, US beta) / 27% VXUS (core, ex-US) / 10% NVDA (satellite, AI conviction — currently underweight at 8.85%, contingency plan v2 governs through the 11/17 print; $180 revisit line breached but not this desk's trigger) / 12% XLE (satellite, Hormuz/oil hedge — currently 10.86%, oil-attribution rebuild stands from 11/6) / 4% GEHC (satellite, healthcare-tech, standard-band governance, ±5pp, backed by the 7.5%/+3.5pp partial-trim trigger, now ~1.29pp away — **mechanism confirmed as pool-weight-only this report; the next cross must execute, not flag**) / 10% OMCL (satellite, deepest-discount healthcare-tech, funded via the DCA gate, currently gated by a negative accumulated-profit balance) / 11% cash (reserved for the OMCL DCA gate, the GEHC trim buffer, and any live time-boxed trigger).

**Discipline rules the trader must follow (full detail in Strategy & theories, state.md):**
1. No fresh catalyst, no reactive trade (rule 1) — except a pre-committed, falsifiable trigger, which fires on schedule regardless of news (rule 12). **Applied this report: NVDA's sustained multi-session $180 breach, plus a new independently-confirmed governance headline, is still not by itself a trim signal absent a structural-break disqualifier firing.**
2. Never chase a move already priced in (rule 2); never size off a WebSearch price or dateline without live Robinhood verification (rule 4).
3. A DCF hard pass is a hard pass, full stop (rule 5); a new idea needs one full cross-vetting cycle (MS + BW) before sizing (rule 6).
4. Every time-box expires to a default action (rule 16).
5. A discretionary risk-desk ask, however many cycles repeated, needs this desk's actual sign-off to execute — repetition alone is not authorization (rule 19). **Applied directly this report: GS/BW's repeated GEHC-trigger-design ask is answered (declined) rather than flagged again.**
6. Look-through concentration (VTI/VXUS embedded weight), not just face-value allocation, is the real risk metric to watch (rule 8) — operationalized since 10/19 into the standing core-tilt instruction.
7. A mechanical drift band does not get redrawn around wherever price happens to sit absent a new fundamental or risk fact (rule 20) — **applied this report to decline both a GEHC trigger redesign and any touch to NVDA's or GEHC's targets.**
8. A hedge is allowed to cost money when the risk it insures against recedes — that is the hedge working as designed, not evidence it should be removed.
9. A repeated cross-desk ask that never converts into a decision isn't radical transparency, it's noise (rule 14) — **this report's own GEHC-trigger-design answer is this week's validating example.**

**Standing mechanical triggers:** single-position drift ≥5pp (vs. the 26%/27% VTI/VXUS split); NVDA+OMCL 25% combined concentration (% of equity, ~5.58pp buffer); the OMCL DCA gate ($2.50 accumulated profit, currently negative, ~$3.11 away); the OMCL $35.24 price-revisit line (~7.5% buffer); NVDA's $180 revisit line (contingency plan v2, breached, not this desk's trigger); GEHC's 9% hard ceiling plus the 7.5%/+3.5pp disciplined-partial-trim line (~1.29pp away, pool-weight-only by design, execute-on-cross now explicit); rule 6a's rate-shock pause (in effect since 9/2); the AI/semis core-tilt (next core dollar to VXUS, not pro-rata).

**Review cadence:** full re-underwrite monthly (last fulfilled 11/2; next ~12/1); off-cycle only on a ≥5pp drift, a fresh structural finding, or an unresolved repeated cross-desk ask (as triggered this report). Open items flagged for the next run: watch GEHC's pool weight against the 7.5% line and execute immediately if it crosses; watch NVDA's $180 line and the 11/11 Huang/Megaspeed response deadline; get MS/BW to close the Fed funds range conflict flagged on 11/6, still open.

---

*No trade recommended off this report — research and policy-governance only, per mandate. This desk does not place trades or touch Robinhood directly.*
