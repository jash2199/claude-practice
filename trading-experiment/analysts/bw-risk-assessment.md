# BW Risk Assessment — Risk Management Report
**Date: 2026-10-15 (Thursday), ~10:45 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Twenty-first BW report overall, third of the day — follows this desk's own 2026-10-14 ~14:45 ET report (grade D-, explicit grace-period-before-F threshold on CPI attribution) and two subsequent trader run notes today (09:4x, 10:37 ET).

---

## Overall Portfolio Risk Grade: **C-** — upgraded from D-, but earnings-event risk now dominates

Yesterday's explicit, falsifiable threshold was: *if the team still cannot attribute the broad sell-off, or cannot produce the actual September CPI print, this grade drops to F.* Neither default happened — this morning's 09:4x ET run located the actual print (3.7% YoY, confirmed hot) and resolved the attribution mystery. Radical transparency cuts both ways: when a self-set threshold is met honestly rather than fudged, the grade should move. It moves up, not to a clean pass — the book is still carrying a -24.98%-cost position into its most binary two-week stretch yet, and this report's job is to put a number on that, not to recycle yesterday's "mystery" framing now that the mystery is solved.

## Single biggest risk right now

**GEHC and OMCL — a combined ~13.9% of equity — report earnings within 24 hours of each other on 2026-10-28 (before open) and 2026-10-29 (before open), 13 and 14 calendar days out.** This is not a vague macro worry; it is two dated, company-confirmed events landing back-to-back, on the book's two smallest, least-liquid, most earnings-volatile holdings:
- **OMCL** has moved >10% on earnings day in 7 of the last 8 quarters (JPM), is already this book's largest unrealized loss (-23.22% vs. $46.99 cost as of this report), and has a documented "beat but guide down and sell off anyway" pattern (most recently 7/30/26: EPS +100% beat, stock -10.4%). Third-party consensus for 10/29 is itself disputed between a $0.24-0.25 and a $0.35-0.43 EPS band — a double layer of uncertainty.
- **GEHC** has its own repeated "beat but sell off" history (JPM) and has just put in a new post-entry high (+2.44% vs. cost as of this report, accelerating for three straight sessions) on **no sourced catalyst beyond a small, already-priced dividend raise**. A name that rallied for unexplained reasons walking into an earnings print is a round-trip risk, not a cushion.

Pre-written contingency plans exist for both (OMCL's 7/21 earnings plan; GEHC's structural-break band) — that is a genuine mitigant and this desk says so plainly. But a mechanism existing on paper is not the same as the position being small enough that a bad double-print doesn't matter. It is not: see §7 stress test.

---

## Portfolio snapshot (live, 2026-10-15 ~10:45 ET)

`get_portfolio`: total_value **$100.359935883** (cash $56.10 + equity $44.259935883). Pool ≈ **$50.359935883, a +$0.359935883 (+0.72%) accumulated profit** — up from this morning's +0.41-0.59% readings, still well below Monday 10/12's all-time high of +1.75% and Tuesday 10/13's +2.06%.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/14 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $216.48 | $5.374 | 12.14% | 10.67% | +7.49% ($201.40) | -2.18% |
| VTI | 0.036690 | $376.517 | $13.818 | 31.22% | 27.44% | +1.65% ($370.40) | -0.10% |
| VXUS | 0.154525 | $83.405 | $12.890 | 29.13% | 25.60% | -0.86% ($84.13) | -0.21% |
| OMCL | 0.106405 | $36.0786 | $3.840 | 8.68% | 7.62% | **-23.22% ($46.99) — book's largest unrealized loss** | +1.95% |
| XLE | 0.086775 | $66.675 | $5.785 | 13.07% | 11.49% | +15.72% ($57.62) | **-1.41% — today's worst mover, despite yesterday's favorable DCF rebuild** |
| GEHC | 0.036393 | $70.365 | $2.561 | 5.79% | 5.09% | **+2.44% ($68.69) — new post-entry high, 3rd straight accelerating session** | +2.77% — today's best mover |
| Cash (deployable) | — | — | $6.10 | — | 12.11% | — | — |

NVDA+OMCL combined concentration: **20.82% of equity** — 4.18pp buffer to the 25% backstop trigger (clean). GEHC pool weight 5.09% vs. BR's 4% target (+1.09pp, inside the 5pp drift band but the closest of any position to breach, and drifting the wrong way into earnings). **OMCL DCA gate: accumulated profit $0.360 vs. the $2.50 threshold, ~$2.14 away** — still far from firing; new cash cannot flow to OMCL by rule, which is itself a risk-limiting feature worth crediting, not just a constraint.

---

## 1. Correlation analysis between holdings

- **Today is a partial reversion, not a resolution, of the correlation-to-1 pattern flagged for a week running.** NVDA/VTI/VXUS are red together again (-2.18%/-0.10%/-0.21%) while OMCL and GEHC are both green, and XLE — the one position whose job is to be the diversifier — is today's single worst mover (-1.41%) despite MS rebuilding its DCF yesterday to a *narrower* overvaluation gap. A hedge whose price moves opposite its own improving fundamentals on the same day it's supposed to be earning its keep is a data point against relying on it mechanically, not for it.
- **OMCL/GEHC moving together again today (+1.95%/+2.77%)** — a fourth-plus session of the two healthcare names correlating, which is starting to look less like "shared label, otherwise independent" and more like a real factor (both are rate-sensitive small/mid-cap growth-ish healthcare names). This desk is revising its long-standing "low correlation beyond the shared healthcare label" read downward in confidence, not reversing it outright yet.
- **NVDA / VTI / VXUS cluster**: still the dominant, largest-dollar-weighted correlated bloc — unchanged finding, now in its second week of repeated confirmation.
- **XLE vs. the rest**: inversely correlated again today, but on a day the broader market wasn't even sharply down — this is the first session in over a week where XLE moved against its own improving DCF *and* without an obvious broad-market risk-off to explain the inverse move. Watch whether this is noise or the start of XLE's own idiosyncratic volatility decoupling from its hedge rationale entirely.

## 2. Sector concentration (% of equity, look-through where estimable)

| Sector / bucket | % of equity | Note |
|---|---|---|
| Technology / Semis / AI (direct NVDA + look-through via VTI/VXUS) | ~27-30% (estimate, unchanged methodology) | Direct NVDA alone is 12.14% |
| Diversified US equity (VTI, ex-tech-look-through) | 31.22% (gross) | Largest single line item |
| Diversified ex-US equity (VXUS, ex-tech-look-through) | 29.13% (gross) | Second-largest line item |
| Energy (XLE) | 13.07% | Satellite/hedge sleeve — see §1 and §9 on reliability |
| Healthcare — tech/services (OMCL) | 8.68% | Least liquid holding, deepest unrealized loss, 13-14 days from its binary event |
| Healthcare — medtech/equipment (GEHC) | 5.79% | Over BR's 4% target by 1.09pp of pool, closest position to a drift-band breach |

**Combined healthcare (OMCL+GEHC): 14.47% of equity**, both reporting within 24 hours of each other in under two weeks — this is a sector-level earnings-calendar concentration the book has not faced before (GEHC's 9/3 entry and OMCL's 7/17 entry have never previously had their earnings dates fall this close together). **Combined satellite/conviction sleeve (NVDA+OMCL+XLE+GEHC): 39.68% of equity** vs. **60.35% in the two core ETFs** — essentially unchanged in shape.

## 3. Geographic exposure and currency risk

- **VTI**: 100% US-domiciled, USD. No direct FX risk.
- **VXUS**: ~100% ex-US, underlying EUR/JPY/GBP/EM currency exposure — the book's only real translation risk, down again today in lockstep with the USD sleeve (-0.21%), not offsetting it.
- **NVDA**: USD revenue with Taiwan/China supply-chain and export-control exposure (TSMC's record Q3 print today, +50.9% YoY, raised FY26 growth guide — a tailwind for the AI-capex complex NVDA sits in, per JPM's cross-desk note; no change to the geopolitical/export-control risk itself).
- **OMCL / GEHC**: essentially pure US domestic revenue — no meaningful FX risk for either.
- **XLE**: USD-denominated but economically linked to a dollar-priced global commodity (Brent ~$104.4/bbl per MS's fresh Hormuz-driven rebuild) — indirect geopolitical/currency-adjacent exposure via the underlying commodity, not a direct FX risk.

## 4. Interest rate sensitivity per position

Rf input resolved yesterday by MS (confirmed 10/14 print ~5.19%, down from the prior stale 5.29%, 14 days overdue) — this desk credits that cleanup; it had been flagging the staleness for two weeks.

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows, DCF fair value moves materially per 100bp of WACC (MS's own sensitivity tables show multi-percentage-point swings) |
| VTI | Medium | Broad-market beta to rates, large-cap-weighted, dampened by diversification |
| VXUS | Medium | Same mechanism as VTI plus a currency-rate-differential layer (relative rate paths between US and ex-US) |
| OMCL | **High** | Small-cap, growth-weighted DCF (MS's widest gap on the book, +38.43% undervalued at current Rf) — the *most* rate-sensitive name in dollar-weighted fair-value terms, which cuts both ways: a rate cut would be the single best catalyst this book has, a hawkish surprise the single worst, right into its earnings window |
| XLE | Low-Medium | Energy cash flows are commodity-price-driven first, discount-rate-driven second; current move is almost entirely a Hormuz supply-shock story, not a rate story |
| GEHC | Medium-High | ~$8.0B sourced net debt (BW's 8/20 10-Q read) moves per-share fair value materially with Rf; a genuine refinancing-cost exposure, not just a DCF-math sensitivity |

**14 calendar days of Rf staleness just got resolved — flag for the team: that gap existed through the entire 10/6-10/14 drawdown.** Every DCF read relied on during that stretch was built on a rate assumption later found to be ~10bp stale. The dollar impact was small (MS: <0.5%/share), but the *process* risk — going two weeks on an unconfirmed macro input while actively not-trading on "no mechanical trigger fired" logic — is worth naming even though this particular instance turned out benign.

## 5. Recession stress test — estimated drawdown

Modeling a correlated equity-market recession shock (broad -20% to -35% equity drawdown, consistent with BR's own "-27% to -37% pool-level" correlation-to-1 estimate) against current live weights:

| Scenario | Assumed move | Pool-level impact |
|---|---|---|
| Mild recession / growth scare (-15% broad equities, XLE flat-to-down with demand destruction offsetting any residual supply premium) | NVDA -22%, VTI/VXUS -15%, OMCL -20%, GEHC -18%, XLE -12% | **≈ -16% to -18% of pool value** (~-$8 to -$9 on today's ~$50.36 pool) |
| Severe recession (-35% broad equities, credit-spread widening hits GEHC's debt-funded balance sheet, oil demand destruction overwhelms any Hormuz supply premium and XLE falls *with* the market rather than against it) | NVDA -45%, VTI/VXUS -33%, OMCL -40%, GEHC -38%, XLE -30% | **≈ -34% to -37% of pool value** (~-$17 to -$19) |

**The critical, radically transparent point: XLE is modeled falling in BOTH scenarios, including alongside the broader market.** XLE's entire current gain (+15.72%) is a geopolitical *supply-shock* story (Hormuz), not a structural recession hedge. In an actual demand-driven recession, energy demand destruction historically *drags oil down with everything else* — XLE would very plausibly be a source of additional drawdown, not an offset. BR's and this desk's own framing of XLE as "the hedge" has only ever been tested against a geopolitical/supply scenario, never a demand-side recession, and the team should stop treating it as a general-purpose recession hedge until it is tested as one. **This book currently has zero demonstrated recession hedge.**

## 6. Liquidity risk rating per holding

| Position | Liquidity rating | Note |
|---|---|---|
| NVDA | Very low risk | Mega-cap, enormous daily volume, sub-penny effective spread at this position size |
| VTI | Very low risk | One of the most liquid ETFs in existence |
| VXUS | Very low risk | Highly liquid broad ETF |
| XLE | Very low risk | Highly liquid sector ETF |
| GEHC | Low risk | Large-cap, ample daily volume |
| OMCL | **Moderate risk (relative)** | Smallest market cap in the book; live spread this report $35.95/$36.10 (~0.42% of price) — the widest relative spread of any holding, though still immaterial at this position's ~$3.84 size. Flag matters more at scale than today, but the DCA-gate design means any future add will also be a small-cap, wider-spread fill — budget for slippage when the gate eventually fires. |

At current fractional-share position sizes (all under $14), liquidity risk is not binding for execution on any holding — this rating is about relative structural liquidity, not a live execution concern.

## 7. Single stock risk and position sizing recommendations

- **NVDA**: 10.67% of pool vs. 10% target (+0.67pp), inside the 5pp band, no-new-cash instruction standing. Sizing is fine; the risk is concentration-of-narrative with the core ETFs' own tech look-through (§2), not the headline NVDA number itself.
- **OMCL**: 7.62% of pool, DCA-gated against the $2.50 threshold (~$2.14 away) — the gate is doing exactly the risk-limiting job it was designed for heading into 10/29. **No sizing change recommended; the existing mechanism is correctly binding.**
- **GEHC**: 5.09% of pool vs. 4% target (+1.09pp) — the one position this desk would flag for a discretionary look before 10/28, not because any mechanical trigger has fired (none has — 5pp band, structural-break band both closed by design) but because a position that rallied ~5% in three sessions on no sourced catalyst, walking into an earnings print with its own "beat but sell off" history, is exactly the setup where giving back the drift-band cushion before the print — rather than waiting for a forced review after a bad print — would be the more conservative read of "radical transparency," not the required one. **Recommendation, not an order: consider trimming GEHC back toward its 4% pool target (~$0.55 of pool, roughly a fifth of the current position) ahead of 10/28, funding the standing cash buffer rather than redeploying it, purely as event-risk size management — this is a suggestion for BR/the trader to weigh, not a trade this desk can or will place.**
- **XLE**: 11.49% of pool vs. 12% target (-0.51pp) — modestly underweight, no sizing concern. The risk here is reliability of the hedge thesis (§1, §5), not size.
- **Deployable cash**: $6.10, 12.11% of pool vs. BR's 11% target (+1.11pp) — slightly above target, which this desk reads as a mild positive heading into the dual-earnings window: more of the buffer is uncommitted than policy strictly requires right before the one period that could use it.

## 8. Tail risk scenarios with probability estimates

*(Subjective, this desk's own estimates — not a market-implied probability.)*

1. **OMCL beats and sells off anyway on 10/29 (the "beat but guide-down" pattern repeating a 3rd/4th straight time): ~35-40% probability**, given 7-of-8-quarters >10% move history and the most recent print (7/30) following exactly this pattern. Impact: another -10% to -20% day-0 move on an already -23%-cost position → **-0.4% to -0.8% of total pool**, small in dollars but would push OMCL's unrealized loss past -30% for the first time.
2. **GEHC gives back its unexplained 3-session rally around its own 10/28 print: ~35% probability.** This is a name that is up on no sourced catalyst; earnings prints are exactly the event that corrects unexplained moves in either direction. Impact: -5% to -10% round-trip → **-0.1% to -0.25% of total pool.**
3. **Both land badly in the same week (10/27-10/30): ~15-18% probability** (not simply the product of the two individual probabilities, since a common macro shock that week would push both the same direction). Impact: **combined -0.5% to -1.0% of total pool** in a plausible-bad case, materially worse in a tail case if NVDA/core ETFs are simultaneously in a risk-off episode like the one just experienced 10/6-10/14.
4. **Hormuz de-escalation erases XLE's gain just as the hedge is most relied upon: ~25-30% probability over the next 4-6 weeks.** MS's own rebuilt DCF still shows XLE -5.78% overvalued even after the Brent-driven improvement — a de-escalation would widen that gap again and could happen quickly (as it nearly did 7/27 and 8/3 earlier in this book's history). Impact: could remove the book's only green holding at the same time a broader risk-off resumes — a compounding, not independent, risk (see §5's point that XLE has no demonstrated role as a true hedge in a demand-driven scenario anyway).
5. **Recurrence of a broad, correlated, unattributed risk-off episode like 10/6-10/14, now resolved but structurally unaddressed: >50% probability of recurring at least once more this quarter**, given it has already happened multiple times and the team's own repeated finding is a chronic data-availability/dateline-staleness gap, not a one-off. This is the standing, highest-probability, moderate-impact risk this book carries continuously.

## 9. Hedging strategies to reduce the top 3 risks (equities-only — no options)

**Top 3 risks, ranked:** (1) the 10/28-10/29 dual-earnings event concentration in OMCL+GEHC; (2) single-point dependency on XLE as "the hedge" despite a supply-shock-not-recession-hedge mechanism (§5); (3) recurring correlated broad-market risk-off hitting NVDA/VTI/VXUS together.

1. **For the earnings-event concentration**: the only real equities-only lever is *size and timing*, not instrument selection — there is no options-based event hedge available here. §7's GEHC-trim suggestion is one lever; the other is simply **not adding to either name before its print** (already standing policy, and the OMCL DCA gate enforces it mechanically for OMCL). Consider explicitly extending the same "no new cash" discipline to GEHC through 10/28, even though GEHC has no formal gate — a verbal/written standing instruction would close the one gap between how OMCL and GEHC are actually protected going into their respective prints.
2. **For XLE hedge-dependency**: this desk cannot buy a different instrument on your behalf, but flags the diversification gap plainly for BR/GS: a true recession hedge in an equities-only, no-options book would look like a genuinely low-beta, demand-defensive sleeve (utilities, staples, or a short-duration Treasury-proxy ETF) — not an energy-sector ETF whose current strength is geopolitical-supply-driven. **Recommendation: treat any future 7th-ticker slot as an opportunity to add a genuine low-beta defensive name, not another satellite conviction bet, specifically to cover the recession scenario XLE does not.**
3. **For recurring correlated risk-off**: the only equities-only mitigant is cash buffer discipline and avoiding forced selling into a drawdown — both already policy (11% cash floor, no stop-loss mandate, "don't react to one unattributed day" rule). This desk's addition: given tail risk #5's >50% recurrence probability, **the cash floor should be read as a floor to actively defend through 10/28-10/30 specifically**, not just a general-purpose number — the one period this quarter where a cash cushion would do the most good is also the one with two binary catalysts in it.

## 10. Rebalancing suggestions with allocation percentages

No position has breached a 5pp drift-band trigger — **no mechanical rebalancing is required today.** Discretionary suggestions only:

- **GEHC**: 5.09% pool vs. 4% target (+1.09pp) — see §7's trim suggestion (~$0.55, roughly a fifth of the position) ahead of 10/28, purely as pre-earnings size management, not a valuation call (MS's own DCF still reads GEHC undervalued).
- **OMCL**: 7.62% vs. 10% target — underweight, but correctly gated; no action, let the DCA mechanism work.
- **XLE**: 11.49% vs. 12% target — modestly underweight; no action recommended while the hedge-reliability question (§5, §9) is unresolved. Adding to a position whose recession-hedge property is unproven would be sizing up an open question, not closing one.
- **VTI/VXUS**: both within ~0.6pp of target — no action.
- **Cash**: 12.11% vs. 11% target (+1.11pp) — hold the surplus through the earnings window per §9 rather than deploying it; this is the one input where being slightly over target right now is a feature.

---

## Heat map summary

| Risk factor | Level | Trend vs. yesterday |
|---|---|---|
| Single-name concentration (NVDA+OMCL) | Low | Flat (clean, 4.18pp buffer) |
| GEHC drift (vs. 4% target) | **Medium** | Worsening (+0.15pp today, 3rd straight session up) |
| Dual-earnings event risk (OMCL 10/29 + GEHC 10/28) | **High** | **New this report — was >2 weeks out, now inside 2 weeks** |
| OMCL unrealized loss | **High** | Slightly improved today (-23.22% vs. -24.98%) but still the book's worst cost-basis position, now entering its binary event |
| Correlation-to-1 (NVDA/VTI/VXUS cluster) | **Medium-High** | Flat — still the book's dominant structural risk |
| XLE hedge reliability | **Medium** | **Worsening — decoupled from its own improved DCF today** |
| Recession-hedge coverage | **High (gap)** | Unchanged — no genuine demand-side recession hedge exists in this book |
| Rate-input staleness | Low | **Improved — resolved yesterday after 14 days** |
| Liquidity | Low | Flat |
| Geographic/FX | Low-Medium | Flat |
| Macro attribution / data-availability gap | Medium | Improved today (CPI print located) but chronic pattern (8+ weeks) unresolved as a process risk |
| Cash buffer adequacy | Low | Flat, slightly above target (favorable going into §8) |

---

*This desk's mandate is radical transparency on risk, not trade execution — all figures above are live-verified via the Robinhood MCP connector (read-only) and the current analyst files; no order has been or will be placed by this report.*
