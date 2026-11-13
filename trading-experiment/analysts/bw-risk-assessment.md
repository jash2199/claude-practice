# BW Risk Assessment — Risk Management Report

**Date: 2026-11-13 (Friday), ~13:42 ET** (18:42 UTC, live-verified via Robinhood `get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861 — both calls returned clean this run, no outage). Prior BW report: 2026-11-13, ~10:31 ET, **F** (downgraded from D- after this desk found OMCL's 11/12 close already below MS's $35.24 bear-case floor, a trigger every desk — including this one — had missed). Persona file re-read fresh this run — no edits by Jash since last cycle; mandate, format, stance unchanged.

---

## Overall Portfolio Risk Grade: **D** (upgraded from F)

Radical transparency cuts both ways: it means naming a failure plainly, and it means not leaving the grade parked on that failure once the team has actually fixed it. **This run's upgrade is earned, not given**: since this desk's 10:31 ET flag, the team ran three separate full re-reads (11:09, 11:46, 12:43 ET) that explicitly re-tested OMCL against the contingency plan's structural-break standard, found none, and both GS (11:46 ET) and JPM (09:25/14:25 ET) independently corroborated the resolution. The process that missed the trigger once is no longer missing it — that is a real improvement, not a technicality. **But this is still a D, not a C, because the underlying risk stack this desk has been naming all week has not gotten any lighter:** OMCL is still trading below the bear-case floor intraday right now, heading toward a possible second consecutive close below it; NVDA carries a fired governance disqualifier into a binary earnings event in four calendar days with no historical precedent to lean on; and a 10-year-Treasury input disagreement between desks remains completely unreconciled. A fixed process does not cancel out a live risk pile-up.

**The single biggest risk right now, stated plainly: NVDA reports Q3 FY2027 on Tuesday 2026-11-17 — four calendar days away — as the first earnings call in the company's history run by someone other than Jensen Huang, five days after his confirmed resignation, with a governance disqualifier already fired and MS's full ground-up rebuild now putting the base case at $119/sh, ~27% *overvalued* even after this week's selloff.** This is the book's largest single position, it is entering its single most consequential event with zero precedent to anchor expectations, and JPM's own history shows the stock has fallen or given back its gains after 4 of its last 5 beats — a pattern this print could repeat for a sixth structurally novel reason on top of the usual one. OMCL's floor break is this report's second-most-urgent item, not the first — it is a $3.73 position (7.65% of pool); NVDA is a $4.03 position (8.25% of pool) walking into a binary event with no analog in the book's or the stock's own history.

---

## Live portfolio snapshot (ground truth, this run)

- **Total account value: $98.8110559635** (cash $56.10 + equity $42.7110559635). Robinhood confirmed clean this run.
- **Trading pool (house capital rule — $50 base + accumulated P&L; remaining $50 is off-limits reserve): $48.8110559635 — a -$1.1889440365 (-2.378%) accumulated loss.** A mild improvement from this morning's deeper reads (10:31 ET: -2.743%) as NVDA/XLE/GEHC have each ticked up off their lows; still a loss, not a recovery.
- **Deployable cash: $6.10 (12.50% of pool)** — vs. BR's 14% target, a -1.50pp gap, essentially unchanged all week.
- **Equity deployed: $42.7110559635 (87.50% of pool).**

| Holding | Qty | Live px | Position $ | % of equity | % of pool | Today's move | Unrealized vs. avg cost |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $162.25 | $4.028 | 9.43% | 8.25% | **-2.37%** (vs. $166.19 close) | **-19.43%** vs. $201.40 |
| VTI | 0.036690 | $370.457 | $13.592 | 31.82% | 27.84% | -0.58% | +0.02% vs. $370.40 |
| VXUS | 0.154525 | $82.435 | $12.738 | 29.83% | 26.10% | -0.27% | -2.01% vs. $84.13 |
| OMCL | 0.106405 | $35.08 | $3.733 | 8.74% | 7.65% | +0.37% (**but still -0.45% below the $35.24 bear-case line on a last-trade basis — bid $35.02/ask $35.11 both below it too**) | **-25.33%** vs. $46.99 |
| XLE | 0.086775 | $64.660 | $5.611 | 13.14% | 11.49% | +0.51% | +12.22% vs. $57.62 |
| GEHC | 0.036393 | $82.685 | $3.009 | 7.04% | 6.17% | +1.03% | +20.38% vs. $68.69 |
| Cash | — | — | $6.10 | — | 12.50% | — | — |

Concentration triggers re-checked fresh: **NVDA+OMCL combined = 18.17% of equity** (trigger ~25%, buffer ~6.83pp) — clean. **NVDA vs. BR's 7% pool target = 8.25%, a +1.25pp drift** (in-band; **this is a falling-price effect, not a resizing effect — do not read it as risk easing**). **GEHC vs. BR's 4%-of-pool target = 6.17%, a +2.17pp overweight** (trigger at 7.5%/+3.5pp, buffer ~1.33pp) — unchanged, now flagged across thirteen-plus consecutive reports unresolved.

**NVDA's buffer to the $180 contingency-plan-v2 revisit line is now -9.86%** — a genuine improvement from this morning's -11.32% (11:09 ET) and -10.64% (12:43 ET) low points, but still deeply through the line with no sustained reversal, four days before the print.

---

## Correlation analysis

The same two-layer structure holds today. **Chronic layer: NVDA (-2.37%) and the risk-on sleeve (VTI -0.58%, VXUS -0.27%) are moving together again**, while XLE (+0.51%) and GEHC (+1.03%) decouple on the upside — the identical AI/mega-growth factor split this desk has flagged for weeks. VTI's cap-weighted mega-cap-AI tilt means its 31.82%-of-equity sleeve still carries an estimated ~11-13pp of *indirect* AI-mega-cap exposure on top of NVDA's own 9.43% direct stake — **effective look-through AI/mega-growth exposure remains ~20-22% of equity, not 9%.** **Second layer, confirmed this run as a genuine macro catalyst, not an unexplained co-movement:** GS's 11:46 ET report sources today's broad red tape to the October PPI print (released 8:30am ET, delayed by the earlier shutdown, described as "fastest rise since 2022") — this is the first dated, sourced macro catalyst this book has found all week, not a residual correlation this desk has to leave unexplained. It means today's drawdown is genuinely broader than the two name-specific stories (NVDA governance, OMCL bear-line) this book has been focused on, which this desk treats as a mild mitigant on the "is this all idiosyncratic risk" question, not a reason to relax on either name-specific item.

## Sector concentration (% of equity, direct exposure)

| Sector | Holdings | % of equity |
|---|---|---|
| Technology / Semis (direct) | NVDA | 9.43% |
| Healthcare (direct) | OMCL + GEHC | 15.78% |
| Energy (direct) | XLE | 13.14% |
| Diversified US equity (cap-weighted, ~35-40% tech-tilted) | VTI | 31.82% |
| Diversified international equity | VXUS | 29.83% |

Named-sector concentration still understates the real picture once VTI's internal AI/mega-cap tilt is counted — true technology/AI-correlated exposure runs closer to a fifth of the book than a tenth.

## Geographic exposure and currency risk

- **US-domiciled/listed: ~70.17% of equity** (NVDA + OMCL + XLE + GEHC + VTI, all USD-reporting).
- **International (ex-US, via VXUS): ~29.83% of equity**, unhedged. VXUS's typical ~75-80% developed / ~20-25% emerging-market split implies an estimated **~6-7% of total equity in unhedged EM currency risk** layered on developed-market FX exposure.
- No currency hedge exists in this toolbox (equities-only, no options, no FX instruments). Unchanged structural gap.

## Interest rate sensitivity by position

| Holding | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High, compounded by key-person/execution risk into a binary event in 4 days** | Long-duration growth multiple; MS's rebuilt base-case WACC of 13.0% (full rebuild, not just a bump) already prices real governance-premium widening, independent of whatever the 11/17 print itself delivers |
| OMCL | **High, and now compounded by a live, unresolved structural-break test** | Small-cap, SaaS-like recurring-revenue healthcare-tech — same long-duration multiple-compression dynamic as NVDA, amplified by thin liquidity and a bear-case floor this book is still trading below |
| VTI | **Moderate-High** | Cap-weighted toward the same long-duration mega-cap growth names driving NVDA's own sensitivity |
| VXUS | **Moderate** | Less mega-cap-growth-weighted than VTI, but EM sleeve adds USD-strength/Fed-policy sensitivity on top of local rate cycles |
| GEHC | **Moderate** | Real balance-sheet leverage (GE spin-off legacy) — rate moves hit interest expense directly |
| XLE | **Low (direct)** | Cash-flow-generative value sector; primary driver is oil price, rate linkage is indirect |

**Standing finding, still unresolved three reports later: the desks on this book do not agree on the risk-free rate input.** This desk's own figures have carried the 10yr at ~4.84-4.90% (FRED's DGS10, last printed 11/5). MS's NVDA rebuild this morning instead holds the 10yr at **5.10%, dated 10/15** — a 20-26bp spread that moves WACC and therefore fair value for the book's two most rate-sensitive names. This desk's own fresh WebSearch this run again found nothing reliably dated past mid-2026 on the 10yr — the chronic dateline wall holds — so this still cannot be resolved today, but three consecutive reports naming the same unreconciled gap without anyone closing it is itself a process problem, not just a data problem. Rule 6a's 4.75% rate-shock-pause reopening threshold sits **~9-15bp away under this desk's own figure, or ~35bp away under MS's.**

## Recession stress test (illustrative drawdown estimate, not a forecast)

Using the same historical sector drawdown ranges (2008/2020/2022), reweighted to today's live weights:

| Holding | Est. recession drawdown | Weight (equity) | Weighted contribution |
|---|---|---|---|
| NVDA | -52% | 9.43% | -4.90pp |
| VTI | -30% | 31.82% | -9.55pp |
| VXUS | -32% | 29.83% | -9.55pp |
| OMCL | -35% | 8.74% | -3.06pp |
| XLE | -40% | 13.14% | -5.26pp |
| GEHC | -22% | 7.04% | -1.55pp |
| **Portfolio (equity-weighted)** | | | **≈ -33.9%** |

Essentially unchanged in methodology and magnitude from the last three reports. Translated to the pool (equity 87.50% of the $48.81 pool): a recession-grade bear market would still be expected to take roughly **-29.7pp off the pool**, on top of the **-2.378% already realized this run** — i.e., a genuine tail scenario could still push this book toward something on the order of **-32.1% versus the original $50 base**, essentially flat vs. this morning's reads.

## Liquidity risk rating by holding

| Holding | Liquidity risk | Basis |
|---|---|---|
| VTI | **Very Low** | Massive-AUM ETF, deepest liquidity in the book |
| NVDA | **Very Low** | Mega-cap, hyper-liquid even through this week's news-driven moves — tight spread confirmed this run ($162.24/$162.26) |
| XLE | **Low** | Large, liquid sector ETF |
| VXUS | **Low** | Large-AUM international ETF |
| GEHC | **Moderate** | Mid/large-cap but has repeatedly shown wide pre-market spreads |
| OMCL | **High, unchanged from this morning's escalation** | Small-cap (~$1.5-2B), the book's thinnest name. This run's quote: bid $35.02 / ask $35.11, a ~0.26% quoted spread — tighter than this morning's ~0.63% read, but still the widest-relative-to-price name in the book, and still trading under a confirmed-broken floor. A forced exit today would still clear materially worse than it would have a week ago. |

## Single stock risk and position sizing

- **NVDA (9.43% equity / 8.25% pool): this desk's top-urgency item this run, for the reasons stated at the top.** The position sits in-band against BR's revised 7% target (+1.25pp), but that is price decay, not discipline — the dollar amount at risk going into Tuesday's print hasn't shrunk, the position's *value* has. MS's full rebuild puts the base case at $119/sh, ~27% below the last verified price even before today's further weakness factors in. This desk reiterates JPM's own finding without softening it: four of the last five NVDA prints were followed by the stock falling or giving back its gains, and this one adds a confirmed governance disqualifier and an untested first-time CEO call on top of that already-poor base rate. No stop-loss is mandated by house rules, and this desk is not recommending one be imposed reactively before the print — but every risk factor on this sheet says this is the position to be watching, not OMCL.
- **OMCL (8.74% equity / 7.65% pool): still this desk's second-most-urgent item, not resolved, just correctly not over-reacted to.** Trading at $35.08 (bid $35.02/ask $35.11), still below the $35.24 bear-case floor on a last-trade basis, following an official 11/12 close ($34.95) that was also below it — the first sustained-close breach on record. Today's session has not closed yet; **a second consecutive close below $35.24 would be the next genuinely new data point**, per GS's own framing, not a reason to pre-empt today. The DCA gate (rule 18) correctly blocks new capital regardless; it does nothing to protect the existing -25.33% position now that the floor it was measured against has given way.
- **GEHC (7.04% equity / 6.17% pool):** still the most overweight name relative to its own named policy target (+2.17pp vs. BR's 4%-of-pool line), reaffirmed-unchanged by BR on 11/12 and now flagged across thirteen-plus consecutive cross-desk reports. With NVDA and OMCL both commanding attention, this item remains at real risk of dropping off the agenda — it shouldn't, and this desk is naming it again specifically so it doesn't.
- **XLE (13.14% equity / 11.49% pool):** a single-factor (oil price) bet sized larger than NVDA, wrapped in diversified-looking ETF packaging. It is doing its job again today (+0.51%, among the book's greener names) — a genuine, working hedge, not a reassurance that the rest of the book is fine.

## Tail risk scenarios (probability estimates, house-skeptic framing)

| Scenario | Rough probability | Est. impact |
|---|---|---|
| **NVDA's 11/17 print, run by interim CEO Kress for the first time, disappoints on the numbers or on tone (deflected CEO-search questions, hedged guidance language)** | **~35-40%, the single highest-weighted scenario on this sheet given the stock's own "beat but sell off" base rate (4 of last 5 prints) now compounding with a fired governance disqualifier** | -5% to -20% further NVDA downside on top of this week's move (~-0.4 to -1.6pp of pool) |
| OMCL prints a second consecutive close below $35.24 today, confirming a sustained break with still no identified structural cause | **~55-65%** given the bid is already $0.22 below the line with roughly 2.5 hours left in the session | No automatic trim mandated by house rules (structural break, not price, is the trigger) — but the next run should treat it as this sheet's top item if it happens |
| Broad PPI/macro-driven risk-off (VTI/VXUS both down together) extends into next week | ~25-30%, a dated catalyst now exists (October PPI) but its persistence is unresolved | -3% to -6% portfolio-wide, concentrated in the two diversified sleeves |
| 10yr crosses the rate-shock threshold (4.75% per this desk's figure, or further per MS's higher 5.10% figure) | Genuinely unresolved given the two desks' input disagreement above, now three reports old | -5% to -8% portfolio-wide, concentrated in VTI/NVDA/OMCL's long-duration sleeve |
| Full recession onset (12-month horizon) | ~20-25% (placeholder, not a forecast) | ≈-30% of pool, per stress test above |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)

1. **NVDA's 11/17 print under an untested first-time CEO (top-urgency item).** No options are available to hedge this directly. The only equities-only lever is exposure reduction, which BR has already partially executed via the 10%→7% target cut rather than an outright sell — this desk does not recommend going further pre-print (that would be the reactive panic trade rules 1-3 exist to prevent), but does recommend the team have an explicit, pre-written answer for what a "bad" call sounds like (JPM's brief already does this well) rather than deciding cold at 5pm Tuesday.
2. **OMCL's unresolved bear-line break.** Same constraint — no options, and exposure reduction conflicts with MS's underlying undervaluation thesis. This desk's recommendation is unchanged from this morning: do not pre-empt mid-session, but treat a second consecutive close below $35.24 as a same-day decision point, not another flag to carry into next week.
3. **Broad-market/duration risk, now with a named dated catalyst (October PPI) rather than an unexplained co-movement.** XLE remains the book's only real natural hedge against this and is doing its job again today. Recommend continuing to not trim XLE to fund anything else, and recommend the team finally reconcile the 10yr input disagreement (4.84-4.90% vs. 5.10%) before it quietly compounds into a sizing decision — this is now a three-report-old open item, not a fresh one.

## Rebalancing suggestions

- **NVDA: hold at the revised 7% target (+1.25pp, in-band) — do not add, do not pre-emptively trim before the print.** This desk's explicit ask: the team's next run after Tuesday's call must do the full 5-analyst re-read the contingency plan already specifies, same-day, not deferred.
- **OMCL: hold, no trim** — the structural-break bar has not been met; a second consecutive sub-$35.24 close is the next decision point, not today's price.
- **GEHC: hold, do not add** — +2.17pp over BR's 4% target with ~1.33pp of runway to the formal trim trigger. Flagging again (thirteenth-plus consecutive report).
- **XLE: hold, do not trim** — preserve as the book's one genuine diversification/rate-hedge holding.
- **Cash: hold the $6.10 buffer** — 12.50% of pool against BR's 14% target; not the week to compress the only dry powder in the book, four days before the book's largest binary event.

---

## Heat map summary

| Risk factor | Level | Trend vs. this morning (10:31 ET) |
|---|---|---|
| NVDA earnings-event risk (11/17, T-4, first call under interim CEO Kress, governance disqualifier already fired) | 🔴 High | **Elevated to this report's top item** — same facts, more urgent framing now that OMCL's acute flag has been resolved |
| OMCL bear-case-line break (confirmed below on 11/12's official close, still below intraday) | 🔴 High, confirmed fired | **Unchanged** — still not a second close yet, still the second-most-urgent item |
| Rate input disagreement between desks (4.84-4.90% vs. 5.10% on the 10yr) | 🟠 Elevated | **Unchanged, now three reports old without reconciliation** |
| Broad market risk-off (PPI-driven) | 🟠 Elevated | **Clarified** — now a named, dated catalyst rather than an unexplained co-movement |
| AI/mega-growth factor concentration (look-through, ~20-22% of equity) | 🟠 Elevated | Unchanged |
| GEHC policy drift vs. BR's 4% target (+2.17pp, ~1.33pp from trigger) | 🟡 Moderate | Essentially unchanged |
| Liquidity (OMCL spread) | 🟡 Moderate | **Improved slightly** — spread tightened from ~0.63% to ~0.26% vs. this morning, still the widest in the book |
| Dry powder (12.50% of pool deployable vs. 14% target) | 🟠 Elevated | Essentially unchanged |
| Process risk (a named trigger going unnoticed) | 🟢 Resolved this run | **Improved** — the specific failure flagged at 10:31 ET was corrected same-day via three full re-reads and two independent cross-desk confirmations |
| Currency/geographic exposure (unhedged VXUS, ~30% of equity) | 🟢 Low-Moderate | Unchanged |
| Diversification (XLE as sole internal hedge) | 🟢 Low (favorable) | Unchanged, working again today |

---

*Prepared by BW Risk Assessment, Bridgewater-style radical-transparency desk. Figures verified live via Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861 at run time (~13:42 ET / 18:42 UTC) — both calls returned clean this run. Cross-referenced against BR's 11/12 ~15:14 ET policy report (NVDA target 10%→7%, cash target 11%→14%, GEHC trigger reaffirmed), MS's 11/13 ~09:56 ET full NVDA rebuild (base case $119/sh, OMCL base $46.75/bear $35.24), JPM's 11/13 ~14:25 ET NVDA pre-earnings brief (8-K primary-source confirmation, Kress-call framing), and GS's 11/13 ~11:46 ET screener (PPI catalyst sourcing, OMCL resolution corroboration). Dedicated WebSearches this run on OMCL, the 10-year Treasury, and Nvidia/Kress all hit the same chronic same-day dateline wall every desk on this book has hit all week — nothing reliably dated to 11/13 found for any of the three beyond what is already on file via Robinhood/internal sources.*
