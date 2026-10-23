# BW Risk Assessment — Risk Management Report
**Date: 2026-10-23 (Friday), ~10:43 ET** (verified via `TZ=America/New_York date`). Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Three dedicated fresh WebSearches this run (FOMC 10/27-28 odds, broad-market cause for today, 10yr yield/Brent levels) — all three hit the same chronic dateline wall every desk has now logged for 40+ consecutive runs (nothing reliably dated 2026-10-23 found); treat the macro figures below as the freshest available (early-to-mid October), not live.

---

## Overall Portfolio Risk Grade: **C-** (held, unchanged from 10/22)

Held flat rather than downgraded only because mechanical discipline is still intact: no trigger has breached, every satellite position has a pre-written contingency plan on file, and there is no leverage, no options, no margin. But this is the last call before a D. Three uncorrelated catalysts — FOMC (10/27-28), GEHC earnings (10/28), OMCL/SNDK earnings window (10/29) — now sit inside a 5-6 day window with **zero hedging instrument available**, against a macro backdrop of the highest 10-year Treasury yield since the early 2000s and oil still elevated on Hormuz risk. And the book is doing this partially blind: every desk, including this one, has now logged 40+ consecutive runs where WebSearch cannot source anything dated today. Trading on stale macro data into a stacked-catalyst week is itself a risk, independent of what any single position does.

## Single biggest risk right now

**Correlated-timing risk with an unhedgeable toolbox.** The FOMC decision, GEHC's print, and OMCL/SNDK's print cluster inside six calendar days, with no options available to manage any of it (per standing mandate — equities-only toolbox). The three catalysts are fundamentally uncorrelated (Fed policy, a medtech earnings beat/miss, a pharmacy-automation earnings beat/miss) — but a cluster of uncorrelated shocks landing in the same week still produces correlated **volatility timing**: if more than one breaks badly, there's no single day free of event risk to reassess calmly, and "no same-minute decisions" (this book's own stated discipline) gets harder to honor the tighter the catalysts stack.

---

## 1. Live portfolio snapshot (Robinhood-verified, 10:4x ET)

| Position | Qty | Last Price | Market Value | Equity Weight | Pool Weight* | Day Chg |
|---|---|---|---|---|---|---|
| VTI | 0.036690 | $373.25 | $13.69 | 30.99% | 27.22% | -0.44% |
| VXUS | 0.154525 | $82.37 | $12.73 | 28.79% | 25.30% | -0.44% |
| XLE | 0.086775 | $68.97 | $5.98 | 13.54% | 11.90% | **+2.06%** |
| NVDA | 0.024826 | $213.57 | $5.30 | 12.00% | 10.54% | +0.64% |
| OMCL | 0.106405 | $37.04 | $3.94 | 8.91% | 7.83% | -0.16% |
| GEHC | 0.036393 | $70.32 | $2.56 | 5.79% | 5.09% | -1.49%‡ |
| **Equity total** | | | **$44.20** | 100% | 87.88% | |
| Cash (pool portion) | | | $6.10 | — | 12.12% | |

\*Pool = $50 base + accumulated profit (≈$50.30 today, +~0.6% since inception). Account total value $100.30 (equity $44.20 + full cash $56.10, of which $50.00 is the off-limits reserve, $6.10 is pool-deployable cash).
‡GEHC's -1.49% includes today's $0.04/sh ex-dividend mechanical adjustment (JPM-flagged); not a sentiment move.

**Live divergence flagged again today:** XLE is the only green position (+2.06%) against a broadly red book — the same "red broad market / green XLE" pattern this desk has logged repeatedly as BW's own stated informal hedge-test condition, and it is **still unconfirmed by any sourced catalyst**. Treat it as a live data point, not yet evidence the hedge works reliably — see §9.

## 2. Correlation analysis between holdings

- **VTI ↔ NVDA: high and understated.** VTI's market-cap weighting means it already embeds meaningful direct exposure to NVDA and the other mega-cap AI/tech names. The book's *explicit* NVDA weight (12.0%) undercounts true AI/mega-tech look-through exposure once VTI's own tech tilt is added back — rough math below (§3). Short-term, VTI and NVDA move together more than the headline weights suggest.
- **VTI ↔ VXUS: moderate-high.** Global equity beta links them; VXUS offers genuine but partial diversification (different constituents, different central banks, FX overlay), not independence. In a global risk-off (the FOMC tail scenario), expect both red together.
- **XLE ↔ {VTI, VXUS, NVDA}: currently inverted, which is fragile.** Today's divergence is the clean textbook case of this: oil/Hormuz-driven XLE strength while broad growth sells off. This correlation flips positive in a demand-driven downturn (recession scenario, §5) — if growth and oil both fall together, XLE stops being a diversifier and becomes just another loss.
- **OMCL ↔ GEHC: low fundamental correlation, high timing correlation.** Different end markets (pharmacy automation vs. medtech/imaging), different customers, different thesis drivers — genuine diversification on fundamentals. But both report within 24 hours of each other (10/28, 10/29) and inside the same week as the FOMC decision — see §1.
- **NVDA ↔ OMCL/GEHC/XLE: low.** The satellite sleeve's healthcare and energy names are the book's real diversification from the AI/semis theme that dominates both the explicit NVDA position and the look-through VTI exposure.

## 3. Sector concentration risk

| Sector / Theme | Equity Weight | Notes |
|---|---|---|
| US broad market (VTI) | 30.99% | Cap-weighted, mega-cap tech tilt |
| International developed+EM (VXUS) | 28.79% | True diversifier — different macro drivers, FX overlay |
| Energy (XLE) | 13.54% | Commodity/geopolitical beta, 24-holding basket |
| Semiconductors/AI compute (NVDA, direct) | 12.00% | Single name |
| Healthcare — tech/automation + medtech (OMCL+GEHC) | 14.70% | Two single names, different sub-sectors |

**The number that matters more than any single row: estimated AI/mega-tech look-through exposure.** VTI's top holdings are dominated by the same handful of AI-capex-linked mega-caps (NVDA, MSFT, AAPL, GOOGL, AMZN, META), typically ~25-30% of the fund's weight. At VTI's current 30.99% equity weight, that implies roughly **8-9 additional points of indirect AI/mega-tech exposure** layered on top of the explicit 12.0% NVDA position — pushing *true* combined AI/mega-tech look-through exposure to a rough **20%+ of equity**, not the 12% the position list shows at a glance. This is an estimate (VTI's live constituent weights weren't separately verified this run), but directionally it means the book is more concentrated in a single macro theme (AI capex sentiment) than the raw position table implies, and that theme is also the one GS has flagged as showing fresh cracks (chip-stock win streak snapping, per this run's WebSearch).

## 4. Geographic exposure and currency risk

- **VTI:** ~100% US-listed, but constituent revenue is global — indirect FX exposure through underlying company earnings, not direct fund-level currency risk.
- **VXUS (28.79% of equity):** the book's one position with **direct, unhedged currency exposure** — EUR, JPY, GBP, and EM currencies all flow through un-hedged. A stronger dollar (likely companion to a hawkish Fed hold/hike, per §1) is a headwind here independent of local-market equity performance.
- **XLE:** US-domiciled majors, but revenue is set by a globally-priced commodity with acute Middle East/Hormuz geopolitical linkage — this book's most direct channel to a Strait of Hormuz escalation.
- **NVDA:** US-domiciled, but Taiwan-concentrated supply chain (TSMC) and China export-control exposure are real, if currently quiet, tail-risk channels.
- **GEHC:** meaningful non-US revenue (medtech sold globally) — secondary FX translation risk, compounding VXUS's direct exposure if the dollar strengthens.
- **OMCL:** overwhelmingly US hospital-system customers — the book's lowest FX/geographic risk holding.

## 5. Interest rate sensitivity by position

| Position | Rate Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's own DCF fair value moves materially with WACC assumptions |
| GEHC | **Medium-High** | ~$8.0B net debt (BW's own 8/20 10-Q-sourced figure) creates direct interest-expense sensitivity; higher-for-longer raises refinancing cost |
| VTI | **Medium-High** | Index is mega-cap-growth tilted; duration-like sensitivity to discount-rate moves |
| VXUS | **Medium** | More value/financials-weighted than the US index historically; less duration-sensitive, but EM borrowing costs matter |
| OMCL | **Medium** | Growth-ish multiple; hospital-system customers' capex budgets are themselves rate-sensitive |
| XLE | **Low-Medium (direct)** | Energy majors are cash-flow/value names with low effective duration; the dominant rate linkage is indirect — a hawkish Fed is usually a *demand-destruction* signal for oil, not a direct discount-rate hit |

The freshest sourced read this run put the 10-year Treasury near its highest level since the early 2000s (~5%+ in early-October reporting, pre-dateline-wall) with futures pricing roughly 80% odds of a hold / ~20% hike at the 10/27-28 meeting. A hold is priced as the base case, but the tail (a hawkish hold or outright hike) hits the highest-rate-sensitivity names (NVDA, GEHC, VTI) hardest and simultaneously.

## 6. Recession stress test (illustrative, not a formal Monte Carlo)

Applying rough historical drawdown magnitudes for each asset class in a genuine demand-driven recession:

| Position | Equity Weight | Assumed Drawdown | Weighted Contribution |
|---|---|---|---|
| VTI | 30.99% | -30% | -9.30pp |
| VXUS | 28.79% | -32% | -9.21pp |
| XLE | 13.54% | -40% (oil demand craters) | -5.42pp |
| NVDA | 12.00% | -55% (high-beta semis, 2022-style) | -6.60pp |
| GEHC | 5.79% | -33% (leverage amplifies) | -1.91pp |
| OMCL | 8.91% | -28% | -2.49pp |
| **Equity-weighted total** | | | **≈ -35%** |

At the pool level (88% equity / 12% cash), that implies a **pool drawdown of roughly -31%**, or about **-$15.50 on the ~$50 pool**, in a full recession scenario. Note XLE's assumed -40% assumes a *demand-driven* recession (oil falls with growth) — this is the scenario where today's "green XLE, red everything else" divergence would invert and stop protecting the book at all.

## 7. Liquidity risk by holding

| Position | Liquidity Rating | Note |
|---|---|---|
| VTI, VXUS, XLE | Very High | Deep ETF liquidity, billions in AUM, tight spreads |
| NVDA | Very High | One of the most liquid single names globally |
| GEHC | High | Large-cap ($25B+), good but not mega-cap-tier depth |
| OMCL | **Medium** | Small/mid-cap (~$1-1.5B market cap), widest spreads of the book |

Caveat for radical transparency: at this book's position sizes ($2.56-$13.69 per holding), liquidity risk is **theoretical, not practical** — none of these trade sizes could move any of these markets. Flagging it because the mandate asks for it, not because it currently binds.

## 8. Single stock risk & position sizing

- **NVDA (12.00% equity / 10.54% pool):** comfortably below the 18-20% single-name trigger. No sizing action needed, but see §3 — true AI-theme exposure is higher than this line implies.
- **NVDA+OMCL combined (per the adopted 25% combined-concentration trigger):** **20.91%** today — up from ~21.14% at the trigger's August adoption-point but still ~4pp below the trigger. Worth watching, not yet actionable.
- **OMCL (8.91% / 7.83% pool):** reports 10/29 (6 days out). JPM's existing contingency plan governs — hold through the print, no sizing change before it.
- **GEHC (5.79% / 5.09% pool):** reports 10/28 (5 days out), carries the book's highest leverage (~$8.0B net debt). Smallest position in the book by design (quarter-size entry), appropriately — this is the one name where sizing discipline already reflects the risk read.
- **XLE (13.54% / 11.90% pool):** the single largest satellite position, via a 24-holding basket rather than a single company — reduces single-company risk but not sector/commodity risk. Already near the top of its informal satellite band; MS still reads it overvalued, so no case for adding here on valuation grounds even setting hedge-narrative aside (§9).
- **Satellite sleeve total (NVDA+OMCL+XLE+GEHC): 40.24% of equity.** Worth a cross-check against BR's own satellite-sleeve policy target in the next joint read.

## 9. Tail risk scenarios with probability estimates

1. **Hawkish FOMC surprise (hold-with-hawkish-tone, or a hike) — ~20-25% probability** (per this run's sourced futures pricing, itself possibly stale). Hits NVDA/VTI/GEHC hardest (§5); plausible single-day pool impact in the -3% to -6% range.
2. **At least one of GEHC/OMCL posts a structural-break miss — ~20-25% combined probability** (treating each independently at ~10-15%, per JPM's own capsule verdicts). Would trigger this book's own pre-written contingency plans — mechanically manageable, but two live triggers in two consecutive days raises the odds of a same-week double-fire.
3. **Hormuz/Red Sea escalation broadening beyond a contained oil-price shock — moderate, recurring tail (~15-20% per month on this book's own run-rate of flare-ups this year).** Upside for XLE in isolation; downside for broad risk sentiment (VTI/VXUS/NVDA) if it escalates past a commodity story into a broader risk-off event — the scenario where XLE's "hedge" stops netting out (§6).
4. **AI-capex sentiment crack / semis multiple compression — elevated, hard to put a precise number on (call it ~25-30% for a >10% semis-specific move this quarter).** MS's own DCF already reads NVDA ~27%+ overvalued; GS flagged chip stocks snapping back into red after a brief win streak this same week. This is the scenario that hits both the explicit NVDA line and the understated VTI look-through exposure simultaneously (§3).
5. **Dollar-strength/EM stress, compounding scenario 1 — lower standalone probability, but correlated with it.** A hawkish Fed outcome and a strong dollar move together; VXUS and GEHC's foreign-revenue translation both take a secondary hit on top of any direct equity move.

## 10. Hedging strategies — equities-only toolbox, top 3 risks

No options are available (standing mandate). Realistic equities-only tools:

1. **Catalyst-clustering risk (§1):** the only true hedge available is a **cash hedge** — hold pool-deployable cash flat or slightly elevated through 10/27-29 rather than deploying it into new positions ahead of the window. This is already roughly where the book sits (12.12% pool cash); the recommendation is to *not* shrink that buffer for a new idea until the window clears, not to add to it at the cost of an attractive entry.
2. **Look-through AI/mega-tech concentration (§3):** no short or inverse-ETF tool is in scope for this experiment. The only real equities-only lever is **relative rebalancing** — directing any future new core capital toward VXUS over VTI, or toward a genuinely defensive sector (staples/utilities, not currently held) rather than growth, to counterweight VTI's embedded tech tilt over time. This is a multi-month lever, not something that fires before next week's catalysts.
3. **XLE's fragile hedge status (§2, §6):** stop treating XLE as a reliable portfolio hedge. It is doing hedge-like work *today* against a specific geopolitical-supply-shock scenario, but would fail to protect against the demand-driven recession scenario in §6. Mitigation: size and evaluate XLE purely on its own standing valuation merit (MS still reads it overvalued) rather than on a "this is our hedge" narrative — don't add to it opportunistically just because it's green today.

## 11. Rebalancing suggestions (risk-reduction lens only — not a trade recommendation; this desk does not place trades)

| Position | Current (Equity%) | Risk-lens suggestion |
|---|---|---|
| NVDA | 12.00% | Once the FOMC/earnings window clears cleanly, revisit trimming toward ~10% equity weight — not urgent, no trigger breached, but directionally reduces both explicit and look-through AI concentration at once |
| XLE | 13.54% | Hold flat. No case to add (MS overvaluation read); don't trim mid-divergence either — no structural break |
| OMCL | 8.91% | Let the existing DCA gate (BR's mechanism) do the work rather than a lump add — especially 6 days before earnings |
| GEHC | 5.79% | No change pre-earnings |
| VTI / VXUS | 30.99% / 28.79% | Core sleeve is healthy combined (~60%); on the margin, tilt *future* new core contributions toward VXUS over VTI for real (not look-through) diversification away from the AI/mega-tech theme |

---

## Risk Heat Map Summary

| Position | Weight (Equity%) | Market/Beta Risk | Concentration Risk | Rate Sensitivity | Liquidity Risk | Near-Term Event Risk | Geo/FX Risk |
|---|---|---|---|---|---|---|---|
| **NVDA** | 12.00% | 🔴 High | 🔴 High (direct + look-through) | 🔴 High | 🟢 Very Low | 🟡 Medium | 🟡 Medium (Taiwan/China) |
| **VTI** | 30.99% | 🟡 Medium-High | 🟡 Medium (tech tilt) | 🟡 Medium-High | 🟢 Very Low | 🟢 Low | 🟢 Low |
| **VXUS** | 28.79% | 🟡 Medium | 🟢 Low | 🟡 Medium | 🟢 Very Low | 🟢 Low | 🔴 High (direct FX) |
| **XLE** | 13.54% | 🟡 Medium (fragile hedge) | 🟡 Medium | 🟢 Low-Medium | 🟢 Very Low | 🟡 Medium | 🔴 High (Hormuz) |
| **OMCL** | 8.91% | 🟡 Medium | 🟡 Medium | 🟡 Medium | 🟡 Medium | 🔴 High (earnings 10/29) | 🟢 Low |
| **GEHC** | 5.79% | 🟡 Medium | 🟡 Medium (+leverage) | 🟡 Medium-High | 🟡 Medium | 🔴 High (earnings 10/28) | 🟡 Medium |
| **Portfolio-level** | 100% | 🟡 Medium | 🟡 Medium | 🟡 Medium-High | 🟢 Low (impractical at this size) | 🔴 **High — 3 catalysts in 6 days, no hedge** | 🟡 Medium |

---

*BW Risk Assessment — radical transparency, no softened warnings. Next run reassesses against live FOMC outcome and GEHC/OMCL prints as they land.*
