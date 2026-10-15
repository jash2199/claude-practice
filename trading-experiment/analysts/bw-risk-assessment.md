# BW Risk Assessment — Risk Management Report
**Date: 2026-10-15 (Thursday), ~14:4x ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report today, following this desk's own 2026-10-15 ~10:45 ET report (grade upgraded D-→C- on the CPI-attribution resolution).

---

## Overall Portfolio Risk Grade: **C-** — held, not re-upgraded or downgraded

No new structural information since this morning's report. Dedicated fresh WebSearch this run (GEHC-specific, OMCL-specific, XLE/Hormuz-specific) found **no dated 2026-10-15 catalyst for any of the three** — every query hit the same chronic staleness wall every desk on this book has now flagged for 8+ consecutive weeks. Radical transparency means not moving the grade just because the clock advanced four hours with nothing new to justify it. What *has* moved, intraday, within the same session: GEHC's unexplained rally extended further (bigger eventual round-trip risk, not smaller), OMCL gave back some of this morning's gain (unrealized loss deepened slightly), and XLE deepened its loss on the day despite yesterday's materially improved DCF. None of these cross a mechanical trigger. All three are noted below because "nothing crossed a trigger" is not the same claim as "nothing changed."

## Single biggest risk right now

**Unchanged from this morning: GEHC and OMCL — a combined ~14.40% of equity — report earnings 13 and 14 calendar days out (2026-10-28 and 2026-10-29, both before market open), and the position that's supposed to be cushioning the book least explicably is now *more* extended, not less.** GEHC is up +2.59% vs. its $68.69 cost as of this report (was +2.44% four hours ago) on zero sourced catalyst beyond the already-priced dividend raise — a bigger unexplained gap to round-trip into the print than this desk flagged this morning, not a smaller one. OMCL's unrealized loss deepened intraday to -23.61% (was -23.22% this morning) as it gave back part of its earlier bounce, re-approaching the -24.98% level flagged as the book's worst-ever. Pre-written contingency plans exist for both; a mechanism on paper still isn't the same as the position being small enough that a bad double-print doesn't matter (see §7 stress test, unchanged in substance from this morning).

---

## Portfolio snapshot (live, 2026-10-15 ~14:4x ET)

`get_portfolio`: total_value **$100.420490495** (cash $56.10 + equity $44.320490495). Pool ≈ **$50.420490495, a +$0.420490495 (+0.84%) accumulated profit** — up from this morning's +0.72%, still below Monday 10/12's all-time high of +1.75% and Tuesday 10/13's +2.06%.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/14 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $217.2084 | $5.392 | 12.17% | 10.69% | +7.85% ($201.40) | -1.85% |
| VTI | 0.036690 | $377.350 | $13.845 | 31.24% | 27.46% | +1.88% ($370.40) | +0.12% |
| VXUS | 0.154525 | $83.6751 | $12.930 | 29.18% | 25.65% | -0.54% ($84.13) | +0.11% |
| OMCL | 0.106405 | $35.895 | $3.819 | 8.62% | 7.57% | **-23.61% ($46.99) — book's largest unrealized loss, deepening intraday** | +1.43% |
| XLE | 0.086775 | $66.480 | $5.769 | 13.02% | 11.44% | +15.38% ($57.62) | **-1.70% — today's worst mover, deepening since the 10:45 ET read (-1.41%)** |
| GEHC | 0.036393 | $70.470 | $2.565 | 5.79% | 5.09% | **+2.59% ($68.69) — new post-entry high, extending further within the day** | +2.92% — today's best mover, by a widening margin |
| Cash (deployable) | — | — | $6.10 | — | 12.09% | — | — |

NVDA+OMCL combined concentration: **20.78% of equity** — 4.22pp buffer to the 25% backstop trigger (clean, essentially flat vs. this morning). GEHC pool weight 5.09% vs. BR's 4% target (+1.09pp, unchanged from this morning, inside the 5pp drift band but still the position closest to one, still drifting the wrong way intraday). **OMCL DCA gate: accumulated profit $0.420 vs. the $2.50 threshold, ~$2.08 away** — narrowed modestly from this morning's ~$2.14 purely on the pool's own small gain; still far from firing.

---

## 1. Correlation analysis between holdings

- **The NVDA/VTI/VXUS cluster broke down intraday, worth flagging plainly since it cuts against this desk's own repeated finding.** NVDA is red (-1.85%) while VTI and VXUS are both modestly green (+0.12%/+0.11%) — the first time in several reports this specific trio has split rather than moved together. This reads as an NVDA-/AI-complex-specific pullback (consistent with GS's screener flagging a mixed semis tape today) rather than a broad-market move dragging the core sleeve down with it. One session isn't enough to reverse a multi-week finding, but it is a genuine data point *against* treating the cluster as mechanically correlated-to-1, and this desk is logging it rather than only logging confirmations.
- **GEHC/OMCL correlation continues to strengthen, not weaken** — both green again today (+2.92%/+1.43%), the fifth-plus session of the two healthcare names moving together. This desk's growing-confidence read (first flagged this morning) stands: this is starting to look like a real rate-sensitive small/mid-cap-healthcare factor, not just a shared label.
- **XLE vs. the rest**: inversely correlated again, and the move deepened as the session went on (-1.41% at 10:45 ET → -1.70% now) even as MS's DCF gap for the name stayed at yesterday's materially narrower -5.78%. This is now two consecutive reports today (same session, intraday) where XLE's price has moved the wrong way relative to its own improving fundamentals — strengthening, not resolving, the hedge-reliability concern flagged this morning (see §5, §9).

## 2. Sector concentration (% of equity, look-through where estimable)

| Sector / bucket | % of equity | Note |
|---|---|---|
| Technology / Semis / AI (direct NVDA + look-through via VTI/VXUS) | ~27-30% (estimate, unchanged methodology) | Direct NVDA alone is 12.17% |
| Diversified US equity (VTI, ex-tech-look-through) | 31.24% (gross) | Largest single line item |
| Diversified ex-US equity (VXUS, ex-tech-look-through) | 29.18% (gross) | Second-largest line item |
| Energy (XLE) | 13.02% | Satellite/hedge sleeve — see §1 and §9 on reliability, worsening |
| Healthcare — tech/services (OMCL) | 8.62% | Least liquid holding, deepest unrealized loss, 14 days from its binary event |
| Healthcare — medtech/equipment (GEHC) | 5.79% | Over BR's 4% target by 1.09pp of pool, still closest position to a drift-band breach |

**Combined healthcare (OMCL+GEHC): 14.40% of equity**, both reporting within 24 hours of each other in under two weeks — unchanged risk framing from this morning. **Combined satellite/conviction sleeve (NVDA+OMCL+XLE+GEHC): 39.59% of equity** vs. **60.41% in the two core ETFs** — essentially unchanged in shape.

## 3. Geographic exposure and currency risk

- **VTI**: 100% US-domiciled, USD. No direct FX risk. Unchanged.
- **VXUS**: ~100% ex-US, underlying EUR/JPY/GBP/EM currency exposure — the book's only real translation risk, up marginally today (+0.11%), not a notable move either way.
- **NVDA**: USD revenue with Taiwan/China supply-chain and export-control exposure. No new geopolitical/export-control development found this run.
- **OMCL / GEHC**: essentially pure US domestic revenue — no meaningful FX risk for either. Unchanged.
- **XLE**: USD-denominated but economically linked to a dollar-priced global commodity (Brent, per MS's ~$104/bbl Hormuz-driven rebuild). This run's dedicated WebSearch found no fresher-than-10/14-dated Brent/Hormuz figure — the price action described in §1 above is happening without a confirmed fresh catalyst behind it, same data-availability gap as every other holding this run.

## 4. Interest rate sensitivity per position

Rf input resolved yesterday by MS (confirmed 10/14 print ~5.19%, down from the prior stale 5.29%) — no change to report; this desk continues to credit that cleanup.

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; DCF fair value moves materially per 100bp of WACC |
| VTI | Medium | Broad-market beta to rates, dampened by diversification |
| VXUS | Medium | Same mechanism as VTI plus a currency-rate-differential layer |
| OMCL | **High** | Small-cap, growth-weighted DCF (MS's widest gap on the book) — most rate-sensitive name in dollar-weighted fair-value terms, cutting both ways right into its earnings window |
| XLE | Low-Medium | Commodity-price-driven first, discount-rate-driven second; current move is a Hormuz supply-shock story, not a rate story |
| GEHC | Medium-High | ~$8.0B sourced net debt moves per-share fair value materially with Rf — a genuine refinancing-cost exposure |

No change from this morning's read; the Rf input is current, not stale, and no fresh rate print was found or needed this run.

## 5. Recession stress test — estimated drawdown

Same methodology as this morning, re-run against this run's live weights (correlated equity-market recession shock, -20% to -35% broad equities, consistent with BR's "-27% to -37% pool-level" estimate):

| Scenario | Assumed move | Pool-level impact |
|---|---|---|
| Mild recession / growth scare (-15% broad equities) | NVDA -22%, VTI/VXUS -15%, OMCL -20%, GEHC -18%, XLE -12% | **≈ -16% to -18% of pool value** (~-$8.07 to -$9.08 on today's ~$50.42 pool) |
| Severe recession (-35% broad equities, oil demand destruction flips XLE to falling with the market) | NVDA -45%, VTI/VXUS -33%, OMCL -40%, GEHC -38%, XLE -30% | **≈ -34% to -37% of pool value** (~-$17.14 to -$18.66) |

**Unchanged conclusion from this morning, restated because it still matters: XLE is modeled falling in BOTH scenarios.** Today's intraday action (XLE red while its own DCF improved, see §1) is a small live illustration of exactly the decoupling this desk warned about — a hedge that fails to track its own improving fundamentals on an ordinary day is not a hedge whose behavior in an actual demand-side recession should be assumed favorable. **This book still has zero demonstrated recession hedge.**

## 6. Liquidity risk rating per holding

No change from this morning — re-stated for completeness:

| Position | Liquidity rating | Note |
|---|---|---|
| NVDA | Very low risk | Mega-cap, enormous daily volume |
| VTI | Very low risk | One of the most liquid ETFs in existence |
| VXUS | Very low risk | Highly liquid broad ETF |
| XLE | Very low risk | Highly liquid sector ETF |
| GEHC | Low risk | Large-cap, ample daily volume |
| OMCL | **Moderate risk (relative)** | Smallest market cap in the book; widest relative spread of any holding (live $35.90/$35.93, ~0.08% today, actually tighter than this morning's snapshot but still structurally the widest-spread name on the sheet at scale) |

At current fractional-share position sizes (all under $14), liquidity risk is not binding for execution on any holding today.

## 7. Single stock risk and position sizing recommendations

- **NVDA**: 10.69% of pool vs. 10% target (+0.69pp), inside the 5pp band, no-new-cash instruction standing. No change.
- **OMCL**: 7.57% of pool, DCA-gated against the $2.50 threshold (~$2.08 away). **No sizing change recommended; the gate is correctly binding.**
- **GEHC**: 5.09% of pool vs. 4% target (+1.09pp), unchanged in magnitude from this morning but the underlying rally it reflects extended further intraday (+2.59% vs. cost, up from +2.44%). **This desk repeats this morning's recommendation, not a new one but a reinforced one: consider trimming GEHC back toward its 4% pool target (~$0.56 of pool) ahead of the 10/28 print, purely as event-risk size management.** This is still a suggestion for BR/the trader to weigh, not a trade this desk can or will place — but the case for it has gotten marginally stronger, not weaker, in the four hours since this morning's report, since the unexplained gap to round-trip is now larger.
- **XLE**: 11.44% of pool vs. 12% target (-0.56pp) — modestly underweight, no sizing concern. The risk remains hedge-thesis reliability (§1, §5), which worsened intraday, not position size.
- **Deployable cash**: $6.10, 12.09% of pool vs. BR's 11% target (+1.09pp) — still mildly above target heading into the dual-earnings window, still a positive heading into §8.

## 8. Tail risk scenarios with probability estimates

*(Subjective, this desk's own estimates — unchanged from this morning; no new information arrived this run that would move any of these.)*

1. **OMCL beats and sells off anyway on 10/29: ~35-40% probability.** Impact: another -10% to -20% day-0 move on an already -23.6%-cost position → **-0.4% to -0.8% of total pool**, which would push OMCL's unrealized loss past -30% for the first time.
2. **GEHC gives back its unexplained rally around its own 10/28 print: ~35% probability**, if anything modestly higher-impact than this morning's estimate given the gap it would be giving back has grown (+2.59% vs. cost now vs. +2.44% this morning). Impact: -5% to -10% round-trip → **-0.1% to -0.25% of total pool.**
3. **Both land badly in the same week (10/27-10/30): ~15-18% probability.** Impact: **combined -0.5% to -1.0% of total pool** in a plausible-bad case.
4. **Hormuz de-escalation erases XLE's gain just as the hedge is most relied upon: ~25-30% probability over the next 4-6 weeks.** Today's intraday decoupling (XLE red despite an improved DCF) is a small supporting data point for this risk being live, not resolved.
5. **Recurrence of a broad, correlated, unattributed risk-off episode: >50% probability of recurring at least once more this quarter.** Unchanged, standing, highest-probability moderate-impact risk.

## 9. Hedging strategies to reduce the top 3 risks (equities-only — no options)

**Top 3 risks, ranked, unchanged from this morning:** (1) the 10/28-10/29 dual-earnings event concentration in GEHC+OMCL; (2) single-point dependency on XLE as "the hedge" despite a supply-shock-not-recession-hedge mechanism, now with a second data point (§1, §5) that it doesn't even reliably track its own improving fundamentals day-to-day; (3) recurring correlated broad-market risk-off hitting NVDA/VTI/VXUS together, tempered slightly today by the cluster's intraday split (§1).

1. **For the earnings-event concentration**: unchanged — size and timing are the only equities-only levers. §7's GEHC-trim suggestion remains open, now with a somewhat stronger case (the rally it would unwind is bigger). Repeating this morning's proposal: extend the OMCL-style "no new cash" discipline to GEHC explicitly through 10/28, closing the one written-policy gap between how the two positions are protected into their respective prints.
2. **For XLE hedge-dependency**: unchanged recommendation — a true recession hedge in an equities-only book would look like a low-beta, demand-defensive sleeve (utilities, staples, short-duration Treasury-proxy), not an energy ETF whose current strength is geopolitical-supply-driven. Today's intraday decoupling is one more data point for treating any future 7th-ticker slot as a genuine defensive add, not another satellite conviction bet.
3. **For recurring correlated risk-off**: unchanged — cash buffer discipline and avoiding forced selling into a drawdown remain the only equities-only mitigants. The cash floor should still be read as a floor to actively defend through 10/28-10/30 specifically.

## 10. Rebalancing suggestions with allocation percentages

No position has breached a 5pp drift-band trigger — **no mechanical rebalancing is required this run.** Discretionary suggestions, unchanged from this morning except where noted:

- **GEHC**: 5.09% pool vs. 4% target (+1.09pp) — see §7's trim suggestion (~$0.56, roughly a fifth of the position) ahead of 10/28; the case is marginally stronger this run, not new.
- **OMCL**: 7.57% vs. 10% target — underweight, correctly gated; no action.
- **XLE**: 11.44% vs. 12% target — modestly underweight; no action recommended while the hedge-reliability question (§5, §9) remains open and, if anything, slightly worse today.
- **VTI/VXUS**: both within ~1pp of target — no action.
- **Cash**: 12.09% vs. 11% target (+1.09pp) — hold the surplus through the earnings window.

---

## Heat map summary

| Risk factor | Level | Trend vs. this morning (10:45 ET) |
|---|---|---|
| Single-name concentration (NVDA+OMCL) | Low | Flat (clean, 4.22pp buffer) |
| GEHC drift (vs. 4% target) | **Medium** | Flat in magnitude; underlying rally extended further intraday |
| Dual-earnings event risk (OMCL 10/29 + GEHC 10/28) | **High** | Flat (13/14 days out), but the GEHC gap to round-trip grew |
| OMCL unrealized loss | **High** | **Worsening intraday** (-23.61% vs. -23.22% this morning) |
| Correlation-to-1 (NVDA/VTI/VXUS cluster) | Medium | **Improving** — cluster split intraday for the first time in several reports |
| GEHC/OMCL correlation | **Medium** | **Worsening (new)** — fifth-plus session moving together |
| XLE hedge reliability | **Medium-High** | **Worsening** — deepened its decoupling from its own improved DCF since this morning |
| Recession-hedge coverage | **High (gap)** | Unchanged — no genuine demand-side recession hedge exists in this book |
| Rate-input staleness | Low | Flat (resolved yesterday, holding) |
| Liquidity | Low | Flat |
| Geographic/FX | Low-Medium | Flat |
| Macro attribution / data-availability gap | Medium | Flat — fresh WebSearch this run reproduced the same chronic wall |
| Cash buffer adequacy | Low | Flat, slightly above target (favorable going into §8) |

---

*This desk's mandate is radical transparency on risk, not trade execution — all figures above are live-verified via the Robinhood MCP connector (read-only) and the current analyst files; no order has been or will be placed by this report.*
