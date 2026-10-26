# BW Risk Assessment — Risk Management Report
**Date: 2026-10-26 (Monday), ~14:46 ET.** Second BW report today (first was ~10:43 ET). Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Three fresh WebSearches this run (FOMC odds, OMCL news, GEHC news) reproduced the same dateline wall every desk has logged for 55+ consecutive runs — nothing dated 2026-10-26 found for OMCL or GEHC; FOMC odds (~84-87% hold, ~13-17% hike) are directionally unchanged from this morning. Treat all macro/news inputs as stale-but-directional.

---

## Overall Portfolio Risk Grade: **D** (held flat vs. this morning's 10:43 ET downgrade from C-)

Nothing has gotten structurally worse since this morning, but nothing that justified the downgrade has gone away either — so this grade **holds**, it does not improve just because the trader survived four more hours without a mechanical trigger firing. The three reasons behind the morning downgrade are all still live: (1) the FOMC decision (Wed 10/28, 2:00pm ET), GEHC's print (Wed 10/28, before open — **the same day as the Fed decision**), and OMCL's print (Thu 10/29, before open) are now inside a 48-72 hour window; (2) the OMCL DCA auto-buy gate is still drifting toward its $2.50 threshold on broad-rally beta, not an OMCL-specific move; (3) **BR, the gate's own rule owner, is now 3+ days stale (last report 10/23 ~16:12 ET) despite two separate desks (this one and GS) explicitly asking it to reconfirm in writing whether firing into the 24-48 hours before OMCL's own earnings is the gate's intended behavior.** That silence is itself a governance risk, not just a staleness footnote — a mechanical trigger that nobody has re-examined ahead of a collision nobody designed for is exactly the kind of "mechanical discipline without judgment" failure mode this book should be worried about.

## Single biggest risk right now

**Unchanged from this morning: the OMCL DCA gate is mechanically pointed at adding to this book's worst-performing, most event-exposed position, in the exact window where that position reports earnings — and the one desk that owns the rule hasn't weighed in for three days.** As of this run the gate needs the pool to climb **another ~3.6%** (not the ~0.65% figure carried in earlier intraday notes — see math below) to fire, which is a real buffer, not a hair-trigger. But "not imminent" is not "safe to ignore": a strong FOMC-relief rally Wednesday could close most of that gap in one session, and it would land one day before OMCL's own print. Nobody has decided in advance what this trader does if the gate fires *inside* the earnings window with BR silent.

---

## Portfolio Snapshot (live, 2026-10-26 ~14:46 ET)

| Holding | Qty | Avg Cost | Live Price | Mkt Value | % Equity | % Pool | Unrealized P&L |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $216.08 | $5.36 | 12.02% | 10.58% | **+7.29%** |
| VTI | 0.036690 | $370.40 | $375.74 | $13.79 | 30.90% | 27.19% | +1.44% |
| VXUS | 0.154525 | $84.13 | $82.805 | $12.80 | 28.68% | 25.23% | -1.57% |
| OMCL | 0.106405 | $46.99 | $37.50 | $3.99 | 8.95% | 7.87% | **-20.20%** (largest loss) |
| XLE | 0.086775 | $57.62 | $69.625 | $6.04 | 13.55% | 11.92% | **+20.83%** (largest gain) |
| GEHC | 0.036393 | $68.69 | $71.815 | $2.61 | 5.86% | 5.16% | +4.55% |
| Cash | — | — | — | $56.10 | — | 12.03% of pool | n/a |

Total account value **$100.6906** (equity $44.5906 + cash $56.10). Trading pool (= total − $50 reserve) **$50.6906**, accumulated profit **+$0.6906 (+1.38%)**. NVDA+OMCL combined: **20.97% of equity** (25% concentration trigger, ~4.03pp buffer — clean). OMCL DCA gate (rule 18): needs **+$1.8094** more profit to hit the $2.50 threshold, i.e. the pool needs to rise from $50.6906 to $52.50 — a further **+3.57%** pool gain, not the smaller figure some intraday notes implied. GEHC pool weight 5.16% vs. its 6%-pool earnings-window soft cap — 0.84pp buffer, not fired.

---

## Heat Map — By Holding

| Holding | Pool Wt | Concentration Risk | Valuation/Multiple Risk | Rate Sensitivity | Liquidity Risk | Binary Event Risk (next 72h) | **Overall** |
|---|---|---|---|---|---|---|---|
| NVDA | 10.58% | 🟡 Medium | 🔴 High (MS: ~-11% gap, widening) | 🔴 High | 🟢 Very Low | 🟢 Low (no print) | 🟡 **Medium-High** |
| VTI | 27.19% | 🟢 Low (diversified) | 🟡 Medium | 🟡 Medium | 🟢 Very Low | 🟡 Medium (FOMC) | 🟡 **Medium** |
| VXUS | 25.23% | 🟢 Low | 🟢 Low-Medium | 🟡 Medium (FX) | 🟢 Low | 🟡 Medium (FOMC/USD) | 🟡 **Medium** |
| OMCL | 7.87% | 🟡 Medium (DCA-gate magnet) | 🟢 Low (MS: cheap, +31% gap) / 🔴 High (thesis execution) | 🔴 High | 🟡 Medium (smaller-cap) | 🔴 **Critical** (print 10/29 + gate math) | 🔴 **High** |
| XLE | 11.92% | 🟡 Medium (100% single-sector) | 🟡 Medium (richening — MS gap now -9.37%, widening 6th straight session) | 🟢 Low-Medium | 🟢 Low | 🟢 Low (no print) | 🟡 **Medium** |
| GEHC | 5.16% | 🟢 Low-Medium (drifting toward 6% cap) | 🟢 Low-Medium (near fair value) | 🟡 Medium | 🟢 Low | 🔴 **Critical** (print 10/28, same day as FOMC) | 🔴 **High** |
| Cash | 12.03% | ⚪ None | ⚪ n/a | 🟢 Benefits | ⚪ None | 🟡 Low (fuels the DCA gate mechanically) | 🟢 **Low** |

## Heat Map — By Risk Category (book-wide)

| Risk Category | Level | Driver |
|---|---|---|
| Correlation / factor concentration | 🔴 High | NVDA + VTI/VXUS's embedded tech weight + GEHC/XLE's own growth-adjacent betas mean the book behaves like one AI/growth/risk-on factor more than six distinct names |
| Sector concentration | 🟡 Medium-High | Look-through Tech/semis ≈ **22.8% of pool** (see below) once VTI/VXUS's own tech weighting is counted, not just NVDA's 10.58% headline |
| Geographic / currency | 🟢 Low-Medium | ~75% USD-direct, 25% in VXUS's multi-currency basket — contained and intentional |
| Interest-rate sensitivity | 🟡 Medium-High | No fixed income, but NVDA/OMCL are long-duration growth names; book is net long the "rates stay benign" bet into a live Fed decision |
| Recession / macro drawdown | 🔴 High | See stress test — estimated 25-32% pool drawdown in a classic recession scenario |
| Liquidity | 🟢 Low | All six names are liquid large/mid-caps or major ETFs; OMCL is the one relatively thinner name, still immaterial at this position size |
| Single-stock / sizing discipline | 🟡 Medium | No breach of any hard cap, but OMCL is the book's one demonstrated sizing mistake (bought on a clock, not a setup) and GEHC is drifting toward its soft cap |
| Tail / event risk (this week) | 🔴 Critical | FOMC (10/28) + GEHC print (10/28, same day) + OMCL print (10/29) stacked in 72 hours |
| Mechanical governance | 🔴 High | DCA gate live and drifting, rule owner (BR) silent for 3+ days despite two desks asking it to reconfirm the gate's behavior before the collision |

---

## 1. Correlation Analysis Between Holdings

This book is **less diversified than six tickers suggests**. NVDA, VTI (cap-weighted, ~30%+ tech), and VXUS (smaller but nonzero tech weight) all share meaningful exposure to the same AI/growth/risk-on factor; GEHC and OMCL, while nominally "healthcare," are both growth-multiple names whose valuations (per MS's own DCFs) move with the same discount-rate assumptions that move NVDA's. The one genuine low-correlation sleeve is **XLE**, whose thesis is explicitly a hedge against a *different* risk factor (Hormuz/oil-supply shock) — but MS's own valuation work shows XLE's price has been rising on momentum with no fresh fundamental catalyst for six-plus sessions, which is exactly the condition under which a "hedge" quietly becomes just another long, re-correlating with the rest of the book on the next broad rally (today's tape: NVDA, VTI, VXUS, XLE, GEHC all green together — zero diversification benefit showing up intraday). Cash (12.03% of pool) is the only position with genuinely zero correlation to the rest of the book, which is also why it's the right thing to hold flat into this week rather than deploy.

## 2. Sector Concentration

Direct, face-value sector exposure:
- **Technology/Semiconductors (NVDA):** 10.58% of pool
- **Healthcare (OMCL software + GEHC medtech):** 13.03% of pool combined
- **Energy (XLE):** 11.92% of pool
- **Diversified/all-sector (VTI + VXUS):** 52.42% of pool
- **Cash:** 12.03% of pool

That face-value breakdown undersells the real exposure. VTI's own cap-weighted index is roughly ~30-32% Technology; VXUS's is roughly ~13-14%. Doing the look-through math: NVDA (10.58%) + VTI's embedded tech (27.19% × ~32% ≈ 8.70%) + VXUS's embedded tech (25.23% × ~14% ≈ 3.53%) ≈ **22.8% of pool in Technology/semis alone** — this independently reproduces the ">20% of pool" figure BR's own 10/19 core-tilt policy was built around, which is a useful cross-check that the policy is targeting the right number. **This is the actual concentration risk in this book, and it's roughly double the headline NVDA number.**

## 3. Geographic Exposure and Currency Risk

~75% of the book is US-domestic direct exposure (NVDA, OMCL, XLE, GEHC, VTI). The sole international sleeve is **VXUS at 25.23% of pool** — a diversified developed+emerging ex-US basket, which is the intended, by-design currency/geography diversifier, not an accident. The one underweighted nuance: GEHC, though US-listed, has real China/tariff/global-supply-chain exposure embedded in its revenue (flagged in run notes as a margin headwind) — a reminder that "US-listed" is not the same as "no currency/geography risk." Net assessment: currency risk is moderate and concentrated almost entirely in the VXUS sleeve, where it belongs. A broad USD-strength episode (plausible around a hawkish Fed surprise, or as a recession/flight-to-dollar reflex) would be a headwind specifically to the VXUS leg, compounding any local-market weakness there.

## 4. Interest Rate Sensitivity (per position)

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth multiple; MS's DCF gap (already -11%, widening) is a discount-rate-sensitive number by construction |
| OMCL | **High** | Same long-duration-cash-flow profile, compounded by genuinely weak current FCF conversion (financing/working-capital cost channel, not just multiple) |
| VTI | Medium | Blended index duration; moves with the aggregate market's rate sensitivity |
| VXUS | Medium | Adds a second channel — USD strength from US rate moves pressures VXUS's USD-translated return independent of local fundamentals |
| GEHC | Medium | Moderate-duration medtech; hospital capex (its revenue driver) is itself financing-cost-sensitive |
| XLE | Low-Medium | Value/cyclical, shorter-duration cash flows; direct rate sensitivity is low, but higher rates can dampen global growth and therefore oil demand indirectly |
| Cash | **Inverse (benefit)** | Higher rates = more yield on the $56.10 cash balance |

The book is **net long the "Fed doesn't shock the system Wednesday" bet**, concentrated in exactly the two names (NVDA, OMCL) with the longest-duration cash flow profiles and the two live earnings prints landing in the same week as the decision.

## 5. Recession Stress Test

Applying rough, standard macro-stress assumptions by name (not a formal model, directionally sized off historical sector drawdowns):

**Demand-driven recession (classic scenario — broad slowdown, oil demand falls with everything else):**
NVDA -50%, VTI -30%, VXUS -35%, OMCL -40%, XLE -40%, GEHC -25%.
Weighted pool impact ≈ **-31.5pp → estimated pool drawdown of ~31-32%**, i.e. the $50.69 pool would fall to roughly **$34.70** under this scenario. In dollar terms on this account's actual size, that's a ~$16 loss — small in absolute terms, but the *process* lesson (is the book actually positioned for a real recession, not just a pullback) is what matters at any scale.

**Stagflation/supply-shock recession (oil stays elevated on a Hormuz-style shock even as broader demand weakens — the scenario XLE is nominally held against):**
Same assumptions except XLE +15% instead of -40%.
Weighted pool impact ≈ **-24.9pp → estimated drawdown of ~25%**. XLE's hedge, *if it behaves as designed in exactly this scenario*, cushions roughly 6-7 percentage points of pool-level loss versus the demand-driven case.

**The caveat that matters:** this desk has already walked back the XLE-hedge narrative once this month when price action decoupled from the thesis without a sourced catalyst, and MS's own valuation gap on XLE has been widening for six straight catalyst-free green sessions. The stagflation scenario above assumes the hedge works *as originally designed* — that is an assumption, not a confirmed property of the current position, and the stress test should not be read as "XLE will cushion ~6pp" so much as "XLE was *intended* to cushion ~6pp, and that intent has not been re-validated recently."

## 6. Liquidity Risk Rating (per holding)

| Holding | Rating | Why |
|---|---|---|
| NVDA | Very Low | One of the most liquid single stocks on earth |
| VTI | Very Low | Among the largest, most liquid ETFs in existence |
| VXUS | Low | Large, liquid international ETF |
| XLE | Low | Large sector ETF, high daily volume |
| GEHC | Low | Large-cap, adequate daily volume |
| OMCL | **Medium** | Smaller mid/small-cap name, thinner average volume, wider spreads especially around its own earnings print — the one genuinely less-liquid name in the book |
| Cash | None | Fully liquid |

At this book's actual dollar sizes ($3-14 per position), liquidity risk is close to immaterial in practice — every position here could be fully liquidated instantly without moving any market. OMCL's medium rating is worth carrying forward as a documented fact for if/when this book scales, not as an actionable concern today.

## 7. Single Stock Risk and Position Sizing Recommendations

- **OMCL (7.87% of pool):** The book's one demonstrated sizing mistake — bought because a pre-committed clock ran out (rule 16's own stated lesson), not because the setup had genuinely improved. It is simultaneously the cheapest name on MS's sheet (statistically) and the most mechanically dangerous one this week (the DCA gate's funding target, a Thursday print, and the largest unrealized loss in the book, all stacked together). **Recommendation: do not add to OMCL under any circumstance before Thursday's print resolves, including if the DCA gate fires mid-window** — if the gate fires inside the earnings window, treat that as the mandatory-review trigger it's designed to be, not an automatic buy, and explicitly weigh "should this fire be honored or paused" rather than defaulting to execution.
- **NVDA (10.58% of pool / 12.02% of equity):** Comfortably inside its 18-20% single-name and 25% combined-with-OMCL triggers. No sizing change warranted. The risk here is valuation, not concentration — MS's gap continues widening on pure price appreciation with no new fundamentals.
- **GEHC (5.16% of pool):** Drifting upward toward its 6%-pool earnings-window soft cap, into a print landing the same day as the Fed decision. **Recommendation: if GEHC continues drifting up before Wednesday, this is a legitimate candidate for a small risk-reduction trim ahead of the print — not because the thesis has changed, purely to reduce binary-event exposure into a name that's running two scheduled catalysts (FOMC-driven multiple compression risk + its own earnings) on the same day.**
- **XLE (11.92% of pool):** No single-name risk (it's a 24-holding ETF), but it is a concentrated, 100%-energy-sector sector call. The risk to watch is the hedge thesis itself re-pricing richer (MS's widening gap) while still being treated internally as "the hedge," which could lead to holding a worse risk/reward than the diversification narrative implies.
- **VTI / VXUS:** Both sit close to their pool targets (VTI +1.19pp over, VXUS -1.77pp under — neither near the 5pp drift trigger). No sizing issue.

## 8. Tail Risk Scenarios (with rough probability estimates)

| Scenario | Rough probability | Impact if it happens |
|---|---|---|
| FOMC hikes 25bp Wed 10/28 (vs. consensus hold) | ~13-17% | Risk-off shock to NVDA/OMCL's long-duration multiples; plausible -5% to -8% single-day move across the growth sleeve |
| GEHC earnings miss/guidance cut (10/28, same day as FOMC) | ~20-25% | Compounds with any FOMC-driven weakness the same day; GEHC's cushion is already thin (unrealized +4.55%) |
| OMCL "beat but soft guide, sell off anyway" repeat (10/29) | ~30-35% | This is literally the pattern from OMCL's last print (7/30: beat both lines, guided softer, stock gapped -13%); the base rate here is uncomfortably high for a name already down -20% |
| OMCL DCA gate fires inside the 10/27-10/29 window | ~15-20% | Requires a further +3.57% pool rally in ~2 trading days — plausible on a strong FOMC-relief rally, not the base case; the dangerous part is the *governance* gap (BR silent), not the probability itself |
| Renewed Hormuz/oil escalation | ~10% | Would likely help XLE and hurt everything else — a genuine test of whether the hedge is still real |
| Hawkish rate-shock reigniting rule 6a's underlying concern | ~15% | Would extend the existing new-core/NVDA-add pause rather than create new risk — this one is actually the book's safety valve, not a new exposure |

## 9. Hedging Strategies — Top 3 Risks (equities-only toolbox, no options available)

1. **The FOMC/GEHC/OMCL 72-hour event cluster.** The cheapest, most effective hedge available to a $100 account with no options is simply **not deploying the deployable cash this week** — which is already the standing policy, and this desk's explicit recommendation is to keep doing exactly that rather than treat Wednesday's FOMC-relief rally (if hold is confirmed) as a green light to put the ~$6.10 buffer to work before Thursday's OMCL print has also cleared. A genuine equities-only hedge here (e.g., a small defensive-sector ETF like XLP or XLU) is theoretically available but not worth the complexity or slippage drag at this account's size — holding cash flat *is* the hedge.
2. **NVDA+OMCL / look-through AI-growth factor concentration.** The real hedge already adopted (BR's 10/19 core-tilt policy: next core dollar to VXUS, not pro-rata) is correct and should stay in force — it's the only equities-only lever that actually reduces the ~22.8% look-through Tech exposure without touching the satellite names directly. No change recommended; just a reminder not to quietly abandon it the first time VXUS underperforms VTI for a stretch.
3. **The DCA gate's mechanical governance gap.** This is not a position-level risk a hedge trade can fix — it's a process risk. **Recommendation: the trader should explicitly decide now, before the gate is anywhere close to firing, what "mandatory review" means if the gate crosses $2.50 between now and Thursday's OMCL print** (pause until the print clears vs. execute as designed), rather than let BR's silence resolve the question by default when the trigger actually hits. Pre-deciding this is the equities-only-toolbox equivalent of a hedge: it costs nothing and removes the single most avoidable risk in this report.

## 10. Rebalancing Suggestions (allocation %, pool basis)

| Sleeve | Current | BR Target | Drift | Action |
|---|---|---|---|---|
| VTI | 27.19% | 26% | +1.19pp | Hold — inside band |
| VXUS | 25.23% | 27% | -1.77pp | Hold — inside band |
| NVDA | 10.58% | 10% | +0.58pp | Hold — inside band, per rule 20 |
| XLE | 11.92% | 12% | -0.08pp | Hold — essentially on target |
| GEHC | 5.16% | 4% (soft; 6% earnings-window cap) | +1.16pp vs. base target | **Watch** — candidate for a small trim if it keeps drifting before 10/28 |
| OMCL | 7.87% | 10% (DCA-gate funded) | -2.13pp | No action — underweight is by design, gated behind the DCA mechanism, not a sizing gap to close with discretionary cash |
| Cash | 12.03% | 11% | +1.03pp | Hold flat through 10/27-29 by design |

**No position breaches the 5pp drift trigger. No rebalancing trade is warranted today.** The only two watch items are GEHC's drift toward its soft cap (above) and the standing instruction that the ~12% cash buffer stays untouched until the FOMC/GEHC/OMCL cluster has fully cleared — both already the trader's current posture, and this desk endorses continuing it rather than acting early on a partial clearing (e.g., a dovish Fed alone is not a green light to deploy before OMCL's print 24 hours later).

---

*No trade recommended off this report — research and risk-governance only, per mandate. This desk does not place trades or touch Robinhood directly (read-only access used for live verification above).*
