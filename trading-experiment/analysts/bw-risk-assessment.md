# BW Risk Assessment — Latest Report
**Date: 2026-07-22 (Wednesday, ~10:41 ET)**

*Persona: risk analyst trained on Bridgewater/Ray Dalio radical-transparency principles for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 account. Ground truth this run: live `get_portfolio` + `get_equity_positions` (account 424593861) and live `get_equity_quotes` at ~10:41 ET, cross-checked against state.md and all four teammate reports (GS/MS/JPM dated 7/22, BR dated 7/21).*

---

## Overall portfolio risk grade: **C-** (downgraded from C, 7/21)
## Single biggest risk right now: **Two risk factors escalated simultaneously and independently today: OMCL has broken back below this morning's bounce and is now trading at $40.89 — just 2.2% above the $40 mandatory-revisit line, 8 days before its binary print — while the Fed-hike probability for the meeting one day *before* that print has nearly tripled (from ~16.6% to ~46.5% per CME FedWatch) on the back of a sharp Brent crude spike to ~$95.47/bbl.**

Neither of these is a new *category* of risk — OMCL's drift and the Hormuz/rate-risk compounding window have both been flagged for over a week — but today is the day both moved from "flagged and watched" to "meaningfully worse, independently, on the same day." OMCL gave back this morning's entire bounce (from $42.045 at 09:36 ET down to $40.89 by 10:41 ET) with — per this desk's own fresh search — still no identifiable company-specific catalyst. Simultaneously, oil's spike to $95.47/bbl (up sharply from the ~$75 level flagged just two days ago) has pushed live rate-hike odds for the 7/29 FOMC meeting to a near coin-flip, a genuine repricing rather than sentiment noise, landing one day before OMCL's own print. The grade moves to C- because these two escalations are independent of each other (one company-specific/technical, one macro) and neither is offset this cycle by a structural improvement — unlike 7/21, when the core-allocation fix earned back a notch.

---

## Heat map summary

| Risk factor | Level | Trend vs. last read (7/21) | Note |
|---|---|---|---|
| OMCL binary earnings event (7/30) | 🔴 High | ⬆ Worsening | Now $40.89, only 2.2% above the $40 mandatory-revisit line; morning bounce fully reversed |
| Interest-rate event risk (FOMC 7/28-29) | 🔴 High | ⬆⬆ Sharply worsening | Hike probability ~46.5% (was ~16.6%/~92%-hold last read) — a near coin-flip, not a tail |
| Geopolitical / Hormuz-oil shock | 🔴 High | ⬆ Worsening | Brent ~$95.47/bbl (from ~$75 two days ago); Hormuz crossings down ~85%; 11th straight night of strikes |
| Sector/tech look-through concentration | 🟠 Medium-High | ➡ Flat (~38.7%) | Still the book's largest structural exposure |
| Single-position concentration (VTI) | 🟠 Medium-High | ➡ Flat | VTI still ~50% of invested equity, unchanged from 7/21 |
| Recession/drawdown tail | 🟠 Medium-High | ⬆ Slightly worsening | Oil-shock + hawkish-Fed combination is a stagflation-adjacent setup, not just an equity drawdown scenario |
| Liquidity risk | 🟢 Low | ➡ Flat | All four names/funds highly liquid at this position size |
| Cash drag / deployment discipline | 🟡 Medium | ➡ Flat | Cash still ~28.3% of pool vs. 10% target, unchanged from 7/21 |
| Currency/FX (via VXUS) | 🟡 Medium | ➡ Flat | Unhedged; USD strength on risk-off remains a live headwind |
| Hedging capacity (equities-only) | 🔴 High (structural) | ➡ Flat | No options tool; OXY-as-hedge still stuck unvetted, now 9+ days |

---

## 1. Correlation analysis between holdings

Live pricing this morning: NVDA +0.28% ($207.875 vs. $207.29 prior close), VTI -0.15% ($368.91 vs. $369.45), VXUS +0.14% ($84.57 vs. $84.45), OMCL -2.25% ($40.89 vs. $41.83) — small, unremarkable moves across the first three, and OMCL again the standalone outlier, this time to the downside on a quiet tape. This is now a well-established pattern across many consecutive sessions: NVDA/VTI/VXUS track a shared tech/broad-market beta while OMCL moves on its own, uncorrelated schedule. The diversification thesis is intact at the correlation level — but as flagged last cycle, "uncorrelated" and "losing money for unexplained reasons right before an earnings cliff" are not mutually exclusive, and today is another data point in the latter column, not the former.

Estimated pairwise correlations (qualitative, consistent with prior reads, unchanged): NVDA↔VTI high (+0.7-0.8), NVDA↔VXUS moderate (+0.4-0.5, via semis), VTI↔VXUS moderate-high (+0.5-0.6, global equity beta), OMCL↔(NVDA/VTI/VXUS) low to slightly negative over the trailing month.

## 2. Sector concentration risk

Using invested-equity weights (equity_value $35.463; NVDA 14.55%, VTI 50.48%, VXUS 22.71%, OMCL 12.27%):

- **Technology (blended look-through): ~38.7%**, unchanged from last read — NVDA (100% tech) + VTI's ~42% tech sleeve + VXUS's semiconductor-supply-chain names (TSMC/Samsung/SK Hynix).
- **Healthcare (OMCL, plus incidental index exposure inside VTI/VXUS): ~12.3%** direct, still concentrated in a single name now trading within 2.2% of its own contingency-plan trigger.
- **Energy: effectively zero direct exposure**, worth naming explicitly this cycle given oil is the single biggest cross-asset mover in the book's environment right now (Brent +~27% in roughly 48 hours) and this book has no direct energy exposure to offset that move either way — it's a pure pass-through cost/inflation risk with no natural hedge on the books.

Unchanged verdict: this is a two-sector book (tech + healthcare) wearing a four-position costume, with zero direct exposure to the sector (energy) currently driving the macro tape.

## 3. Geographic exposure and currency risk factors

- **US-domiciled/listed: NVDA, VTI, OMCL** — the large majority of the book.
- **International ex-US: VXUS (~22.7% of equity)** — the only geographic diversifier, unhedged.
- **Currency risk, sharpened this cycle**: the standing concern (a Hormuz-driven risk-off flight to the dollar would compound VXUS's local losses with FX translation losses) is no longer hypothetical — oil just moved ~27% in two days on exactly that catalyst. VXUS has not yet shown FX-driven weakness today (+0.14%), but the mechanism this desk has warned about for over a week is now live in the input variable (oil), even if it hasn't yet shown up in the output variable (VXUS price).
- No direct commodity or emerging-market-currency exposure beyond VXUS's index construction.

## 4. Interest rate sensitivity per position

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | High | Long-duration growth cash flows; MS's DCF gap (~27.1% "overvalued") is itself a rate-sensitivity readout — a 1pt WACC move swings fair value ~$15-20/share |
| OMCL | Moderate-high | Growth-tech-like duration profile, partially offset by net cash (~$71M) |
| VTI | Moderate | Tracks broad-market average duration, tilted slightly higher by its ~42% tech weight |
| VXUS | Moderate, plus FX channel | Direct equity-duration exposure moderate; secondary exposure via USD strength if US rates move |

**This is the section that changed most sharply this cycle.** As of 7/21, this desk (and BR) characterized rate risk as "Low-Medium... base case is a hold, ~92% priced." That base case has partially broken down: CME FedWatch now shows **~46.5% probability of a 25bp hike on 7/29** (up from ~34% just days ago, and up from the ~16.6%/83.4%-hold read this desk cited last cycle) — driven directly by the oil spike feeding into inflation expectations, not by any domestic data surprise. A near coin-flip meeting outcome, landing **one day before OMCL's own binary print**, is a materially different risk profile than "low-probability hold expected." Both catalysts now sit inside the same 48-hour window (7/29 FOMC, 7/30 OMCL), and both just became more dangerous independently, on the same day, for related reasons (the oil shock).

## 5. Recession stress test — estimated drawdown

Per-position severe-recession drawdown estimates (peak-to-trough, unchanged basis from prior reads, but the *trigger* environment for a downturn is now more plausible than it was a week ago given a live oil shock plus a repricing hawkish Fed — a combination that historically has been how recessions actually start, not just a garden-variety equity selloff):

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -50% to -65% | Extreme cyclicality (semis + AI-capex reliance) compounded by an already ~27% valuation stretch |
| OMCL | -35% to -50% | Hospital capex is cyclical/delayable in a downturn; small-cap liquidity premium widens in stress |
| VTI | -30% to -40% | Broad-market historical bear-market range, pushed toward the high end by the fund's tech tilt |
| VXUS | -25% to -35%, wider tail this cycle | Typically lower US-recession beta, but an oil-shock-driven global slowdown plus USD strength is a scenario where VXUS's local-currency and FX legs both go the wrong way at once |

**Blended equity-sleeve estimate: ~35-40% drawdown, unchanged in magnitude but higher-probability-weighted this cycle** given the oil-shock/hawkish-Fed combination is a live input today, not a hypothetical. Applied to the full trading pool (equity $35.463 + deployable cash $14.00, 71.7%/28.3% split), pool-level estimate remains **~25-29% drawdown** — the cash cushion still dilutes the tail, but I'd flag that an oil-shock-driven downturn is exactly the kind of scenario where "dry powder" also tends to get deployed too early (buying the first leg down) rather than held for the real bottom — a behavioral risk worth naming alongside the math.

## 6. Liquidity risk rating

| Position | Rating | Note |
|---|---|---|
| VTI | 🟢 Very Low | Deepest, most liquid US equity ETF in existence |
| VXUS | 🟢 Very Low | Highly liquid broad international ETF |
| NVDA | 🟢 Low | Mega-cap, extremely deep order book |
| OMCL | 🟡 Low-Moderate | Smaller-cap, thinner average daily volume — the book's least liquid holding and the one most likely to gap on a surprise print, now trading right at the edge of its own contingency-plan trigger |

No liquidity risk is currently binding at this account size, but OMCL's liquidity profile matters more today than yesterday given how close price sits to the $40 line — a fast break below it on thin volume could gap through the level rather than trade through it cleanly.

## 7. Single stock risk and position sizing recommendations

**VTI concentration finding carries forward unchanged**: VTI is still **50.48% of invested equity / 36.2% of the trading pool**, more than 11 points over its own 25% sub-target, unchanged since 7/21 because no core dollar has moved since then. BR's replacement instruction (next core dollar → VXUS specifically) remains correct and untested — no new capital has been deployed to verify it's actually being followed.

**NVDA (14.55% of equity / 10.4% of pool) and OMCL (12.27% of equity / 8.8% of pool)** both remain within even the 15% tightened soft cap adopted 7/21. No sizing change recommended for either — this remains a hold/no-add call across all five desks. **The position-sizing story this cycle isn't a face-value breach, it's proximity to the contingency plan's own price trigger**: OMCL at $40.89 is close enough to $40 that a single additional down day of ordinary magnitude (it moved -2.25% just this morning) would trip it. I am not recommending a preemptive trim — the contingency plan was written precisely to avoid emotional, pre-trigger action — but I am flagging this as materially more live than "watch it" framing suggests. **Next run should treat any OMCL price at or below ~$41.50 as effectively inside the trigger zone for planning purposes**, even if the literal $40 line hasn't printed, given how little cushion remains.

## 8. Tail risk scenarios with probability estimates

1. **OMCL 7/30 miss + guidance cut**: -18% to -25% single-day move on the position. Probability **~20-25%**, unchanged — still above the pure 1-of-4 historical base rate, still evidence-weighted by the unexplained pre-earnings drift, which has now closed almost all the way to the $40 revisit line.
2. **Hawkish FOMC surprise (7/28-29) — materially re-rated up this cycle**: -3% to -8% broad pullback, hitting NVDA/OMCL hardest as long-duration names, landing one day before OMCL's own print. Probability **raised from ~7-10% to ~35-45%**, directly reflecting CME FedWatch's ~46.5% hike-probability read. This is no longer a tail scenario by any reasonable definition — it is close to a coin flip, and this book has not adjusted its exposure at all in response.
3. **Hormuz/Iran escalation to a full shipping closure or direct Gulf-state disruption — reframed from "risk of" to "already underway"**: Hormuz crossings are down ~85% and the US is on an 11th consecutive night of strikes; the Houthi Saudi-facing maritime embargo is a fresh, additional escalation vector layered on top. Probability of **further** escalation (a Gulf-state direct hit, a full shipping closure) in the next 30 days: **~15%** (raised from ~10%), because the trend line is already moving in the worse direction, not holding steady.
4. **AI-capex valuation air pocket** (an efficiency-shock headline, a hyperscaler capex guide-down): -15% to -30% on NVDA, -5% to -10% drag on VTI. Probability **~10-15%**, unchanged — no new signal this cycle either way.

## 9. Hedging strategies — top 3 risks, equities-only toolbox (no options)

1. **The FOMC/OMCL compounding 48-hour window (7/29-7/30)**: this is now the single most actionable near-term item, and it didn't exist in its current form as of 7/21. The book can't options-hedge a rate decision or an earnings binary, but it *can* choose not to add fresh capital into either name in the 48 hours before their respective catalysts, and it can make sure the OMCL contingency plan's "no same-minute decisions" rule (state.md) is read as covering the FOMC print too, not just the OMCL one — a hawkish surprise on 7/29 could itself move OMCL's price meaningfully before the 7/30 print even lands, and any reaction to that combined move should wait for the full post-both-events picture, not react to whichever catalyst lands first.
2. **Tech/AI concentration (blended ~38.7%)**: unchanged recommendation — future core dollars go to VXUS, not VTI, per BR's 7/21 policy; no update needed this cycle since no capital has moved.
3. **Hormuz/geopolitical shock, now compounding with a real rate-risk channel**: OXY remains the one candidate that would function as a genuine equities-only hedge, and MS's DCF for it is now **9+ consecutive days overdue**. Given oil just moved ~27% in 48 hours and the same shock is now also feeding a near-coin-flip Fed decision, the cost of not having this hedge built is compounding on two fronts at once (direct commodity exposure + rate-sensitivity offset), not just one. Repeating last cycle's escalation: this is a process failure, not a judgment call, and it should be resolved next cycle one way or the other.

## 10. Rebalancing suggestions with allocation percentages

Current vs. target (of the ~$49.463 trading pool):

| Sleeve/ticker | Target | Current | Gap |
|---|---|---|---|
| Core total | 55% | 52.6% ($26.0) | -$1.16 (essentially closed, unchanged) |
| — VTI | 25% | 36.2% ($17.90) | **+$5.42 over, unchanged** |
| — VXUS | 15% | 16.3% ($8.05) | +$0.66 over (immaterial) |
| — 3rd core fund (SCHG/QQQM) | 15% | 0% | -$7.42 (still correctly unopened) |
| Satellite total | 35% | 19.2% ($9.51) | -$7.76 |
| — NVDA | ~10-12% | 10.4% ($5.16) | roughly on target |
| — OMCL | ~10-12% | 8.8% ($4.35) | now below its own sub-target range, purely on price decline, not a sizing decision |
| — 3rd satellite (TBD) | ~10% | 0% | -$4.95, no candidate cleared |
| Cash | 10% | 28.3% ($14.00) | +$9.09 over, unchanged |

**Recommendation, unchanged from 7/21**: no forced trade to fix VTI's overshoot — the discipline cost isn't worth it at this scale, and VTI is a benign asset to be overweight in. No trim recommended for OMCL despite it drifting below its own satellite sub-target — that drift is exactly the contingency plan's rule 1 territory ("a miss alone is not a sell signal," and here there isn't even a miss yet, just price drift). **New this cycle**: given the FOMC/OMCL compounding window is now genuinely live (not just theoretical), I'd recommend the deployable $14 cash stay fully in reserve through 7/30 rather than deploying any of it to VXUS before then — not because VXUS is a bad idea, but because holding maximum optionality through a week with two live binary-ish catalysts is worth more than closing a core-sleeve gap a few days early.

---

## Cross-check with other analysts

- **GS (7/22, ~13:30 ET)**: resolved the OMCL pricing-discrepancy flag in favor of the lower figure this morning (~$41.95-42.05) — this desk's live 10:41 ET quote shows the price has since fallen further to $40.89, meaning GS's "not near the $40 revisit line" read (accurate at the time, ~2% away) is now stale by mid-morning; flagging for GS's next cycle that the gap has closed further intraday.
- **JPM (7/22, ~09:15 ET)**: correctly identified the OMCL pricing ambiguity as the cycle's key action item and deferred to live Robinhood pricing — this desk's read resolves it: the $42.045 level JPM/GS/MS all cite from ~09:36 ET has already reversed to $40.89 by 10:41 ET, a fresh and more urgent data point none of today's other reports have yet.
- **MS (7/22, ~14:00 ET)**: DCF discount on OMCL is now ~34% undervalued on an unchanged model — this desk agrees the discount is increasingly irrelevant against the binary risk, and would add that the discount is also now irrelevant against a second, newly-material risk (the FOMC hike odds) that MS's DCF framework doesn't price at all (no rate-scenario sensitivity beyond the standard WACC table).
- **BR (7/21, one day stale as of this read)**: VTI/VXUS allocation findings carry forward unchanged since no capital has moved. This report's new recommendation — hold the $14 deployable cash through 7/30 rather than deploying to VXUS now — is a direct, if temporary, amendment to BR's "next dollar → VXUS" instruction, on timing grounds only, not on the underlying allocation call.
- **For MS specifically**: renewing the escalation on the OXY DCF, now 9+ days overdue, with an added dimension this cycle — oil's ~27% two-day move and the resulting Fed-hike repricing both raise the value of having a working hedge candidate on the board, not just the raw commodity-exposure argument from last cycle.

---

Sources:
- [Why Omnicell (OMCL) Shares Are Plunging Today (Yahoo Finance)](https://finance.yahoo.com/news/why-omnicell-omcl-shares-plunging-165610859.html)
- [Omnicell (OMCL) Research Report (StockStory)](https://stockstory.org/us/stocks/nasdaq/omcl)
- [U.S. strikes Iran and Houthis threaten Saudi Arabia shipping as mediators push 10-day ceasefire (CNBC)](https://www.cnbc.com/2026/07/21/us-iran-war-trump-hormuz-houthis.html)
- [2026 Strait of Hormuz crisis (Wikipedia)](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_crisis)
- [Yemen's Houthis declare naval blockade of Saudi Arabia: What to know (Al Jazeera)](https://www.aljazeera.com/news/2026/7/20/yemens-houthis-declare-naval-blockade-of-saudi-arabia-what-to-know)
- [Houthi embargo on Saudi Arabia threatens oil market relief valve (Quartz)](https://qz.com/houthi-maritime-embargo-saudi-arabia-oil-hormuz-072026)
- [Current price of oil as of July 22, 2026 (Fortune)](https://fortune.com/article/price-of-oil-07-22-2026/)
- [A July rate hike from the Fed? The odds are rising (CNBC)](https://www.cnbc.com/2026/07/13/-a-july-rate-hike-from-the-fed-the-odds-are-rising.html)
- [Fed Decision in July? Trading Odds & Predictions 2026 (Polymarket)](https://polymarket.com/event/fed-decision-in-july-181)
- [Fed Rate Probability 2026 | FOMC Meeting Odds & Interest Rate Forecast (centralbank.watch)](https://centralbank.watch/federal-reserve/)
