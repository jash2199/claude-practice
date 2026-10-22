# BW Risk Assessment — Risk Management Report
**Date: 2026-10-22 (Thursday), ~14:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. This is this desk's second report today (prior: ~10:44 ET). Three dedicated fresh WebSearches this run — FOMC 10/27-28 odds, OMCL's exact earnings date, and today's broad-selloff cause — produced two genuinely new, dated findings (§4, §7) and one repeat of the chronic dateline wall every desk has logged for 40+ consecutive runs (no sourced cause found for today's broad move). Robinhood live quotes govern throughout per rule 4.

---

## Overall Portfolio Risk Grade: **C-** — held, trending toward D if the pattern below repeats tomorrow

No rule breached, no mechanical trigger fired. But between this morning's 10:44 ET report and now, the risk-off move that was already underway **deepened rather than stabilized**: NVDA's single-session loss widened from -3.41% to -4.41% on zero sourced catalyst, while GEHC and OMCL kept climbing (+2.85%/+1.34%), pulling the pool's accumulated profit down further (+0.42% now vs. +0.48% at 10:44, vs. +1.74% at Tuesday's all-time high). The book is being whipsawed by an unexplained broad move while simultaneously drifting two single-name earnings positions closer to a mechanical trigger for reasons that have nothing to do with either company. That combination — can't explain the macro move, can't fully trust the micro trigger — is exactly the kind of moment radical transparency exists for.

## Single biggest risk right now

**Three uncorrelated catalysts now sit inside a six-day window with zero options-based hedge available, and this run adds real numbers to two of them that make the picture worse, not better.** FOMC decides rates 10/27-28 (a dedicated WebSearch this run found Polymarket pricing **~78-83% hold, ~15-21% for a 25bp hike, <1% for a cut** — a nontrivial one-in-five-to-six chance of a hawkish surprise landing the same day as GEHC's print); GEHC reports before the open on 10/28; OMCL reports before the open on **10/29 — now reconciled** (ScanX/Finviz confirm the company's own announced date, closing GS's flagged 10/29-vs-10/30 ambiguity from this morning's screener). That is a Fed decision and two single-name earnings prints landing within 48 hours of each other, on a book that cannot buy a single put to dampen any of them. GEHC's own 6%-pool earnings-window trigger sits at a **0.856pp buffer** — tighter than this morning's 0.89pp — and, as flagged at 10:44, that tightening is still substantially a pool-denominator artifact (the pool shrinking under today's broad selloff) rather than GEHC re-rating. The team should not let that mechanical origin soften how seriously the underlying concentration is treated once a trigger does fire.

---

## Portfolio snapshot (live, 2026-10-22 ~14:42 ET)

`get_portfolio`: total_value **$100.210** (cash $56.10 + equity $44.110). Pool ≈ **$50.210, +$0.210 (+0.42%) accumulated profit** — down from this morning's +0.48% and sharply down from Tuesday's +1.74% all-time high.

| Position | Qty | Last Price | Value (approx.) | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/21 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $212.185 | ~$5.268 | 11.95% | 10.49% | +5.36% ($201.40) | **-4.41%** |
| VTI | 0.036690 | $373.79 | ~$13.714 | 31.09% | 27.32% | +0.92% ($370.40) | -1.41% |
| VXUS | 0.154525 | $82.665 | ~$12.774 | 28.96% | 25.43% | -1.74% ($84.13) | -1.59% |
| OMCL | 0.106405 | $36.825 | ~$3.918 | 8.89% | 7.81% | **-21.63% ($46.99) — book's largest unrealized loss** | +1.34% |
| XLE | 0.086775 | $67.45 | ~$5.853 | 13.27% | 11.66% | +17.07% ($57.62) | -1.04% |
| GEHC | 0.036393 | $70.975 | ~$2.583 | 5.86% | 5.14% | +3.33% ($68.69) | **+2.85%** |
| Cash (deployable) | — | — | $6.10 | — | 12.15% | — | — |

NVDA+OMCL combined concentration: **20.83% of equity** — 4.17pp buffer to the 25% backstop, clean, easing further on NVDA's deepening pullback. GEHC pool weight 5.14% vs BR's 6%-pool earnings-window trigger (expires 10/28, **6 days out, not fired, ~0.856pp buffer — tighter than 10:44's 0.89pp**). NVDA pool weight 10.49% vs BR's 10% target — only +0.49pp over, inside the 5pp band, rule 20 (no new cash to NVDA) still governs regardless. VTI 27.32%/VXUS 25.43% both inside band. **OMCL DCA gate: accumulated profit $0.210 vs. the $2.50 threshold — $2.290 away**, widening further from this morning's $2.258 as the pool keeps thinning.

---

## 1. Correlation analysis between holdings

The pattern first flagged at 10:44 ET held and deepened through midday: NVDA/VTI/VXUS/XLE (the growth-and-hedge block) all stayed red, with NVDA's loss widening materially (-3.41%→-4.41%) while VTI/VXUS/XLE eased only slightly. OMCL and GEHC — the two binary-earnings satellites, now 6-7 days out — remained the only green names, with GEHC extending to a fresh post-entry high. This is the fourth straight check-in today confirming the same read: the growth block still trades as one correlated bloc under stress (today's within-bloc dispersion is small — -1.0% to -4.4%, all negative), and OMCL/GEHC's joint green session is pre-earnings positioning drift, not a diversification benefit that should be relied on once the prints actually land. XLE again failed to decouple from the growth block on a down day, reinforcing (not contradicting) the standing "conditional, not general-purpose" hedge read.

## 2. Sector concentration risk — percentage breakdown (incl. look-through)

| Sector | Direct holdings | Direct % of pool | Look-through from VTI/VXUS (est.) | **Total estimated % of pool** |
|---|---|---|---|---|
| **Technology / AI-semis** | NVDA | 10.49% | VTI (~32% tech wt. × 27.32%) ≈ 8.74pp + VXUS (~15% tech wt. × 25.43%) ≈ 3.81pp | **≈ 23.05% — easing further on NVDA's deepening pullback** |
| Healthcare | OMCL, GEHC | 12.95% | VTI (~11% wt.) ≈ 3.01pp + VXUS (~10% wt.) ≈ 2.54pp | **≈ 18.50% — ticking up as GEHC/OMCL both run green** |
| Energy | XLE | 11.66% | VTI (~3.5% wt.) ≈ 0.96pp + VXUS (~5.5% wt.) ≈ 1.40pp | **≈ 14.02%** |
| All other sectors | — | — | remainder of VTI + VXUS | **≈ 44.43%** |

No change to the standing read: BR's VTI/VXUS tilt (26%/27% targets) remains the live process fix, tracked for implementation only. Worth naming plainly: tech/AI-semis and the two healthcare-tech satellites together are now **≈ 41.55% of pool** — the book's effective risk concentration hasn't meaningfully diversified even as today's session rotated which half of it is green.

## 3. Geographic exposure and currency risk

Unchanged in substance from 10:44:
- **VTI (27.32% pool): 100% U.S.-domiciled equities, USD-denominated.** No direct currency risk.
- **VXUS (25.43% pool): developed + EM ex-US — the book's only intentional currency exposure, unhedged.** No idiosyncratic FX event found this run.
- **NVDA, OMCL, GEHC, XLE: all USD-denominated, U.S.-listed.** NVDA's Taiwan/China supply-chain dependency remains unpriced and unmodeled by this desk.
- **Net call, unchanged: ~25.43% of pool (VXUS) carries direct FX risk; NVDA carries meaningful indirect Taiwan/China geography risk this book has never separately priced.**

## 4. Interest rate sensitivity by position — updated with a genuinely new, dated input

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows, MS's WACC 11.59%; -11.75% DCF gap (10/22 roll), narrowing today on price alone, not fundamentals |
| GEHC | **Moderate-high** | ~$8.0B net debt (MS), WACC 9.09%; print and FOMC decision now land within the same 48-hour window (below) |
| OMCL | **Moderate** | Small-cap, WACC 9.59%; near-term action dominated by earnings anticipation (7 days out, date now reconciled — §7), not rates |
| VTI | **Moderate** | Cap-weighted index is itself tech/growth-tilted (§2) |
| VXUS | **Low-moderate** | Less growth-weighted; subject to non-U.S. rate paths |
| XLE | **Low** | Price action dominated by geopolitical supply risk, not discount-rate moves |

**New this run: FOMC's 10/27-28 decision is now priced, not just scheduled.** A dedicated WebSearch found Polymarket-sourced odds (undated but internally consistent, cross-checked against two separate captures) putting a hold at the meeting at **~78-83%**, a 25bp hike at **~15-21%**, and a cut at **under 1%**. One search result disputed whether an October meeting exists at all (citing a conflicting Octagon AI read) — the balance of sourcing (calendar sites, Polymarket, MNI) supports October 28 as the real date, consistent with every desk's standing assumption, so this desk treats the meeting as real and the odds as the useful new data point. **Read plainly: this is not a low-risk event.** A ~1-in-5-to-6 chance of a hawkish surprise landing the same week GEHC and OMCL both report is a real, quantified tail risk this book has only ever described qualitatively until now — and a hike surprise would hit NVDA's and GEHC's rate-sensitive valuations at the exact moment their own earnings risk is also live. No WACC rebuild warranted from this alone (the base case is still a hold), but rule 6a's standing pause should not be read as "rates are a closed question" — they are a live, probabilistically real risk into next week.

## 5. Recession stress test — estimated drawdown by position

Same order-of-magnitude bands as the last several builds (no new model work warranted); today's deepening NVDA move is further live evidence supporting the correlated-block assumption, not a reason to revise it:

| Position | Estimated peak-to-trough drawdown in a moderate-to-severe recession | Precedent basis |
|---|---|---|---|
| NVDA | −55% to −70% | High-multiple AI-capex name; drew down ~−66% in the 2022 growth/rate-shock bear market; today's -4.41% single-session move on zero sourced catalyst is a larger live preview than this morning's -3.41% of how fast this name can move without news |
| OMCL | −45% to −60% | Small-cap, already −21.63% unrealized; >10% day-0 earnings moves in 7 of last 8 quarters, print now reconciled to 10/29 before-open |
| GEHC | −25% to −35% | Medtech defensive bias, but leveraged balance sheet + pending cash M&A adds vulnerability; trading further above MS's fair value into a print that now shares a week with a live FOMC decision |
| VTI | −30% to −45% | Broad U.S. market, but composition is itself growth/tech-concentrated (§2); today's -1.41% move tracked NVDA, not an independent signal |
| VXUS | −30% to −40% | Similar magnitude to VTI in USD terms, plus FX volatility |
| XLE | −40% to −65% in a demand-shock recession (vs. further gains in a supply-shock) | **Still conditional, not general-purpose protection** — fell with the growth block again today (-1.04%) rather than offsetting it |

**Blended portfolio estimate: roughly −35% to −48% peak-to-trough in a moderate-to-severe demand-driven recession — at today's ~$50.21 pool, that is a ~$17.57-$24.10 drawdown**, without XLE reliably cushioning that specific scenario.

## 6. Liquidity risk by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Very High | Mega-cap, among the most liquid single names on U.S. markets |
| VTI | Very High | One of the largest ETFs by AUM |
| VXUS | Very High | Large, liquid Vanguard index ETF |
| XLE | Very High | Large sector-SPDR ETF, deep book |
| GEHC | High | Large-cap, ample average daily volume |
| OMCL | **Moderate** | Small-cap; the real liquidity risk is the 10/29 print gapping the stock straight through any reference level, not execution |

At this account's fractional-share, sub-$14-per-position scale, execution liquidity remains a non-issue; OMCL's earnings-gap risk is the one flag that actually matters, now a reconciled 7 days out.

## 7. Single-stock risk and position-sizing recommendations

- NVDA+OMCL combined 20.83% of equity — inside the 25% backstop, 4.17pp buffer, easing further today on NVDA's deeper pullback.
- **OMCL earnings-date ambiguity — closed this run.** GS's 12:42 ET screener flagged an unreconciled 10/29-vs-10/30 date split; a dedicated WebSearch this run found the company's own announcement (via ScanX, corroborated by Finviz) confirming **Thursday, October 29, before market open, with an 8:30am ET call** — the same date JPM's calendar already used. Earnings Whispers' 10/30 and TipRanks' 11/4 reads are both unreconciled third-party estimates, not company-sourced, and are set aside per rule 4. This matters because the OMCL earnings-contingency plan's timing assumptions depend on the print date being right — a one-day miss on that date would have meant evaluating the contingency plan a day early or late.
- **GEHC background flags (FDA recalls, CFO transition) — no change since this desk's 10:44 ET substantive close-out.** CFO transition remains closed as a non-event (independently corroborated today by GS's own correction of its morning report); the FDA Class II recall pattern remains an open watch item, not a structural break.
- Four of six holdings (NVDA, OMCL, GEHC, XLE) remain effectively single-stock/single-sector concentrated bets; together with §2's look-through finding, roughly 41.55% of this pool's effective weight still sits in two themes — AI/semis and binary-earnings healthcare-tech, now heading into a six-day window carrying both companies' earnings and a Fed decision. **Sizing recommendation, unchanged and now more urgent given §4's new FOMC odds: do not add to either OMCL or GEHC ahead of their prints, and do not let any further NVDA selloff tempt a "buy the dip" add — rule 20's no-new-cash-to-NVDA policy stays in force precisely because today's kind of move is noise until proven otherwise.**

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 1-6 months, or as noted) | Potential impact |
|---|---|---|
| FOMC delivers a 25bp hike surprise at the 10/27-28 meeting | **~15-21% (new, sourced this run — Polymarket)** | Multiple compression hits NVDA/GEHC hardest (§4); lands one day before GEHC's own print, compounding rather than offsetting that risk |
| OMCL and/or GEHC earnings miss or guide-down (10/28 and 10/29, dates now reconciled) | ~20-25% each (independent) | OMCL >10% day-0 moves in 7 of last 8 quarters; GEHC's recurring 2026 device/software corrections (BW's 10:44 ET close-out) are a watch item for the call, not yet a thesis break |
| AI-capex sentiment shock / sector-wide memory-semis de-rating | ~15-20% | NVDA -30-40% in weeks; drags VTI/VXUS via look-through; today's -4.41% catalyst-free move (worse than this morning's -3.41%) is escalating evidence of how fast this could compound |
| Hormuz de-escalation / sudden oil-supply-risk unwind | ~15% | XLE gives back hedge gains quickly (-15-20%); today's own -1.04% move (falling with, not against, the growth block for a second straight check this run) keeps reinforcing that the hedge isn't guaranteed to show up when needed |
| Broad recession onset (demand-shock) | ~10-15% over 6 months (base-rate estimate) | Highest-magnitude, lowest-probability: §5; XLE would NOT reliably cushion this scenario |
| **Compound scenario: hawkish FOMC surprise + a GEHC or OMCL earnings miss land in the same 48-hour window** | Joint probability meaningfully above either individually-stated figure's naive product, since a hawkish surprise would itself pressure both names going into their prints | This is now the single most concentrated near-term tail risk on the book, with zero options-based dampening available, and is the first time this desk has had sourced odds (not just a calendar date) for the rate leg of it |

## 9. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **GEHC/OMCL dual pre-earnings binary risk landing the same week as a now-quantified ~15-21% FOMC hike risk:** the only real equities-only hedge remains sizing discipline already in place (BR's 6%-pool trigger — now a thinner 0.856pp buffer — the standard 5pp band, JPM's WAIT calls, OMCL's written contingency plan, now with a reconciled 10/29 date). A no-options book cannot dampen a binary print's or a Fed surprise's variance, only decide what to do after either lands. Repeating this run's explicit ask, sharpened with new numbers: if the GEHC trigger fires at a future run purely because a broad pullback (today's pattern, worsening) shrank the pool denominator, treat that as a mechanical fire and re-weigh fresh evidence before acting — do not treat it the same as a GEHC-specific rally into the print.
2. **AI/semis look-through concentration (~23.05% of pool, §2):** resolved as of BR's 10/19 tilt adoption — no further hedging ask from this desk; tracking implementation, not re-litigating. Today's deepening pullback is a live reminder this figure moves materially in both directions with NVDA's price.
3. **XLE's conditional (not general-purpose) hedge status:** reinforced for a second straight check this run — XLE fell with the growth block again (-1.04%) on a day the thesis would have wanted it to hold or rise. Don't rely on it to offset a GEHC/OMCL earnings-miss or FOMC-surprise scenario; it has no structural reason to move opposite either.

## 10. Rebalancing suggestions (advisory — BR owns actual target-vs-actual policy)

No position breaches a drift trigger, so this desk is not calling for a trade today. Same explicit recommendation as the last several reports, sharpened by two new data points this run: with GEHC's and OMCL's prints now inside one week, their dates mutually reconciled, and the FOMC decision now carrying sourced, nontrivial hike odds, this is the window where sizing discipline matters most and is cheapest to honor — no add to either GEHC or OMCL before its print, and no incremental capital drawn toward NVDA on any bounce or further dip. Standing ask to BR/the trader, repeated because it has not yet been answered: decide now, before any trigger fires, whether a GEHC trigger-fire driven by pool-denominator compression gets the same "mandatory review" weight as one driven by GEHC's own price action.

---

## Heat map summary

| Risk category | Level | Notes |
|---|---|---|
| Correlation / diversification | 🟨 Moderate | Same inverted pattern as 10:44 ET, now with a wider spread (NVDA -4.41% vs. GEHC +2.85%) — still one correlated growth bloc, not real decoupling |
| Sector concentration (look-through) | 🟨 Moderate | ~23.05% tech/AI-semis + ~18.50% healthcare-tech ≈ 41.55% of pool in two themes; BR's tilt mechanism is the live process fix, escalation closed |
| Geographic / currency | 🟨 Moderate | ~25.43% pool (VXUS) unhedged FX; NVDA's Taiwan/China geography risk still unpriced |
| Interest rate sensitivity | 🟧 Elevated — upgraded this run | FOMC 10/27-28 now has sourced odds (~15-21% hike) landing the same week as both earnings prints; rule 6a's pause remains justified but should not read as "rates risk is closed" |
| Recession drawdown | 🟧 Elevated | Blended estimate −35% to −48% (~$17.57-$24.10 at today's pool size); XLE's hedge does NOT reliably apply in a demand-shock scenario |
| Liquidity | 🟩 Low | Execution liquidity a non-issue at this account size; OMCL's earnings-gap risk the one liquidity-adjacent flag, now a reconciled 7 days out |
| Single-stock / sizing | 🟨 Moderate | All mechanical triggers clean; OMCL's earnings-date ambiguity closed this run; GEHC's recall pattern and CFO transition remain substantively assessed (monitor / closed) |
| Tail risk (binary earnings + FOMC, 6-7 days out, same week) | 🟥 High — sharpened this run | GEHC + OMCL ~13.0% of equity, now with a quantified ~15-21% FOMC hike risk landing in the same window; GEHC's trigger buffer thinner than this morning, partly a denominator artifact |
| Hedge integrity (XLE) | 🟨 Moderate-conditional | Fell with the growth block for a second straight check today — the conditional-hedge read keeps getting reinforced, not just repeated |

**No position change recommended this run. No rule breached. Grade held at C-, but flagged plainly: if tomorrow repeats today's pattern (NVDA deepening further, GEHC/OMCL climbing into their prints, no sourced catalyst for either side), this desk will mark the grade down to D rather than hold it out of habit.** The standing biggest risk — two binary earnings events now landing the same week as a live FOMC decision, on a book with no options-based hedge — is no longer just a qualitative concern: this run attached real, sourced odds to the rate leg of it (~15-21% hike) and reconciled OMCL's print date, and both changes make the picture tighter and more concrete, not more comfortable. Radical transparency means saying so now, six days before any of these three events land, not after.
