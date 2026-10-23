# BW Risk Assessment — Risk Management Report
**Date: 2026-10-23 (Friday), ~14:42 ET** (verified via `TZ=America/New_York date`). Second BW report of the day (prior: ~10:43 ET). Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Two dedicated fresh WebSearches this run (FOMC 10/27-28 odds + 10yr yield, broad-market/Brent/Hormuz for today) both hit the same chronic dateline wall every desk on this book has now logged for **41+ consecutive runs** — nothing reliably dated 2026-10-23 found for either query; freshest usable figures trace to Oct 7-9 reporting. Treat all macro inputs below as stale-but-directional, not live.

---

## Overall Portfolio Risk Grade: **C-** (held, unchanged from the 10:43 ET report and from 10/22)

Held flat, not downgraded, for the same reason as this morning: mechanical discipline remains fully intact — no trigger has breached, every satellite position has a pre-written contingency plan on file, there is no leverage, no options, no margin. But this is still the last call before a D, and if anything the picture sharpened rather than eased since this morning: XLE's catalyst-free rally **widened** (+2.06% at 10:43 ET → **+2.32%** now), which is good for the P&L line but makes the unconfirmed-hedge problem in §2/§9 more acute, not less — the more XLE "works" without a sourced reason, the more dangerous it is to lean on it as protection. The FOMC decision (10/27-28), GEHC's print (10/28), and OMCL/SNDK's print window (10/29) are now **4-6 calendar days out** with zero hedging instrument available, against a macro backdrop (freshest available: ~5.2% 10-year, oil still Hormuz-elevated) that is itself over two weeks stale. Trading into a stacked-catalyst week on two-week-old macro data is a risk in its own right, independent of what any single position does.

## Single biggest risk right now

**Correlated-timing risk with an unhedgeable toolbox — unchanged from this morning, and now one data point worse.** FOMC, GEHC, and OMCL/SNDK cluster inside six calendar days with no options available (equities-only mandate). The three catalysts are fundamentally uncorrelated in cause (Fed policy, a medtech print, a pharmacy-automation print), but a cluster of uncorrelated shocks landing in the same week still produces correlated **volatility timing**: there is no single day free of event risk between now and 10/29 to reassess calmly. XLE's widening, catalyst-free divergence today (§1, §9) adds a second live risk on top: a book that is quietly getting more comfortable with an unconfirmed hedge right as the highest-event-density week on the calendar approaches.

---

## 1. Live portfolio snapshot (Robinhood-verified, ~14:4x ET)

| Position | Qty | Last Price | Market Value | Equity Weight | Pool Weight* | Day Chg† |
|---|---|---|---|---|---|---|
| VTI | 0.036690 | $373.22 | $13.69 | 30.93% | 27.19% | -0.45% |
| VXUS | 0.154525 | $82.465 | $12.74 | 28.79% | 25.30% | -0.32% |
| XLE | 0.086775 | $69.14 | $6.00 | 13.55% | 11.91% | **+2.32%** |
| NVDA | 0.024826 | $211.685 | $5.26 | 11.88% | 10.43% | -0.25% |
| OMCL | 0.106405 | $37.36 | $3.98 | 8.98% | 7.89% | +0.70% |
| GEHC | 0.036393 | $71.48 | $2.60 | 5.88% | 5.17% | +0.14%‡ |
| **Equity total** | | | **$44.27** | 100% | 87.89% | |
| Cash (pool portion) | | | $6.10 | — | 12.11% | |

\*Pool = $50 base + accumulated profit. `get_portfolio`: total value $100.368 (cash $56.10 + equity $44.268). Pool ≈ **$50.368, a +$0.368 (+0.736%) accumulated profit** — narrower than the day's ~11:40 ET high (GS logged +0.870%) and the 12:36 ET read (+0.808%), as OMCL/GEHC eased back off their intraday highs even as XLE kept extending. Profit is still positive and nowhere near erased, but today's trend inside the day is a mild fade, not a straight line up.
†vs. `adjusted_previous_close` (10/22 official close).
‡GEHC's $0.04/sh dividend went ex-date this morning (JPM-confirmed at 09:2x ET); that mechanical drag has already passed through — today's remaining move is ordinary price action, not a residual ex-div effect.

**Live divergence, now sharper than this morning:** XLE is the *only* green position (+2.32%) against a broadly red-to-flat book (VTI/VXUS/NVDA all negative, GEHC barely positive). This is the same "red broad market / green XLE" pattern logged repeatedly across runs today and this week as BW's informal hedge-test condition — and it remains **unconfirmed by any sourced catalyst** this run (both WebSearches above came back dateline-stale). A hedge that keeps "working" with no source behind it is not evidence it will keep working; it is evidence the book hasn't yet seen the day it's actually tested. See §9.

## 2. Correlation analysis between holdings

- **VTI ↔ NVDA: high and understated.** VTI's cap weighting already embeds material direct exposure to NVDA and the other AI-capex mega-caps. The book's *explicit* NVDA line (11.88%) undercounts true look-through AI/mega-tech exposure once VTI's own tilt is added back (§3). Short-term, the two move together more than headline weights imply — today both are red together, consistent.
- **VTI ↔ VXUS: moderate-high.** Global equity beta links them; VXUS is genuine but partial diversification. Both red today, as expected in the mild global risk-off tone.
- **XLE ↔ {VTI, VXUS, NVDA}: currently inverted, which is fragile.** Today is the clearest version of this divergence yet this week (+2.32% vs. three red lines). This correlation flips *positive* in a demand-driven downturn (§6) — the scenario where XLE stops diversifying and just loses money alongside everything else.
- **OMCL ↔ GEHC: low fundamental correlation, high timing correlation.** Different end markets (pharmacy automation vs. medtech/imaging), genuine fundamental diversification — but both report within 24 hours of each other (10/28, 10/29), inside the same week as the FOMC decision.
- **NVDA ↔ OMCL/GEHC/XLE: low.** The satellite healthcare/energy sleeve remains the book's real diversification away from the AI/semis theme dominating both the explicit NVDA line and the look-through VTI exposure.

## 3. Sector concentration risk

| Sector / Theme | Equity Weight | Notes |
|---|---|---|
| US broad market (VTI) | 30.93% | Cap-weighted, mega-cap tech tilt |
| International developed+EM (VXUS) | 28.79% | True diversifier — different macro drivers, FX overlay |
| Energy (XLE) | 13.55% | Commodity/geopolitical beta, 24-holding basket |
| Semiconductors/AI compute (NVDA, direct) | 11.88% | Single name |
| Healthcare — tech/automation + medtech (OMCL+GEHC) | 14.86% | Two single names, different sub-sectors |

**The number that matters more than any single row: estimated AI/mega-tech look-through exposure.** VTI's top holdings skew heavily toward the same AI-capex-linked mega-caps (NVDA, MSFT, AAPL, GOOGL, AMZN, META), typically ~25-30% of fund weight. At VTI's current 30.93% equity weight, that implies roughly **8-9 additional points of indirect AI/mega-tech exposure** on top of the explicit 11.88% NVDA line — pushing *true* combined AI/mega-tech look-through exposure toward a rough **20%+ of equity**, not the ~12% the position table shows at a glance. This remains an estimate (VTI's live constituent weights weren't separately re-verified this run), but directionally the book is more concentrated in a single macro theme than the raw table implies — and BW has now flagged this same gap across multiple consecutive cycles without BR formally adopting or declining it. Today's distillation (per state.md's own step-14 flag) is the moment to resolve that, not carry it to a fifth cycle.

## 4. Geographic exposure and currency risk

- **VTI:** ~100% US-listed, but constituent revenue is global — indirect FX exposure through underlying earnings, not direct fund-level currency risk.
- **VXUS (28.79% of equity):** the book's one position with **direct, unhedged currency exposure** — EUR, JPY, GBP, EM currencies all flow through unhedged. A hawkish Fed outcome (dollar-supportive) is a headwind here independent of local-market performance.
- **XLE:** US-domiciled majors, but revenue is set by a globally-priced commodity with acute Hormuz/Middle East linkage — this book's most direct channel to a Strait of Hormuz escalation.
- **NVDA:** US-domiciled, but Taiwan-concentrated supply chain (TSMC) and China export-control exposure remain real, currently-quiet tail channels.
- **GEHC:** meaningful non-US revenue (medtech sold globally) — secondary FX translation risk, compounding VXUS's direct exposure in a dollar-strength scenario.
- **OMCL:** overwhelmingly US hospital-system customers — the book's lowest FX/geographic risk holding.

## 5. Interest rate sensitivity by position

| Position | Rate Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's own DCF fair value ($192.0) moves materially with WACC assumptions |
| GEHC | **Medium-High** | ~$8.0B net debt (BW's 8/20 10-Q-sourced figure) creates direct interest-expense sensitivity; higher-for-longer raises refinancing cost |
| VTI | **Medium-High** | Mega-cap-growth-tilted index; duration-like sensitivity to discount-rate moves |
| VXUS | **Medium** | More value/financials-weighted historically; less duration-sensitive, but EM borrowing costs matter |
| OMCL | **Medium** | Growth-ish multiple; hospital-system customers' own capex budgets are rate-sensitive |
| XLE | **Low-Medium (direct)** | Energy majors are cash-flow/value names with low effective duration; the dominant rate linkage is indirect — a hawkish Fed is usually a *demand-destruction* signal for oil, not a direct discount-rate hit |

Freshest sourced read (Oct 7-9, pre-dateline-wall): 10-year Treasury near **~5.2%**, among the highest levels in two decades; futures as of that window priced roughly **82-83% odds of a hold / ~15-18% hike** at the 10/27-28 meeting — hold is the base case, but the tail (hawkish hold or outright hike) hits NVDA/GEHC/VTI hardest, and simultaneously. These figures are two weeks stale; treat the probability as directional, not current.

## 6. Recession stress test (illustrative, not a formal Monte Carlo)

| Position | Equity Weight | Assumed Drawdown | Weighted Contribution |
|---|---|---|---|
| VTI | 30.93% | -30% | -9.28pp |
| VXUS | 28.79% | -32% | -9.21pp |
| XLE | 13.55% | -40% (oil demand craters) | -5.42pp |
| NVDA | 11.88% | -55% (high-beta semis, 2022-style) | -6.53pp |
| GEHC | 5.88% | -33% (leverage amplifies) | -1.94pp |
| OMCL | 8.98% | -28% | -2.51pp |
| **Equity-weighted total** | | | **≈ -34.9%** |

At the pool level (87.89% equity / 12.11% cash), that implies a **pool drawdown of roughly -30.7%**, or about **-$15.46 on the ~$50.37 pool**, in a full demand-driven recession. XLE's assumed -40% here is the *opposite* scenario from today's live divergence: today's "green XLE, red everything else" is a supply-shock pattern; a genuine recession is a demand-shock pattern where XLE falls *with* the rest of the book, not against it. The hedge-like behavior currently on display would not survive this scenario.

## 7. Liquidity risk by holding

| Position | Liquidity Rating | Note |
|---|---|---|
| VTI, VXUS, XLE | Very High | Deep ETF liquidity, billions in AUM, tight spreads |
| NVDA | Very High | One of the most liquid single names globally |
| GEHC | High | Large-cap ($25B+), good but not mega-cap-tier depth |
| OMCL | **Medium** | Small/mid-cap (~$1-1.5B market cap), widest spreads of the book |

Radical-transparency caveat: at this book's position sizes ($2.60-$13.69 per holding), liquidity risk is **theoretical, not practical** — none of these trade sizes could move any of these markets. Flagged because the mandate asks for it, not because it currently binds.

## 8. Single stock risk & position sizing

- **NVDA (11.88% equity / 10.43% pool):** comfortably below the 18-20% single-name trigger. No sizing action needed, but §3's look-through math means the real AI-theme exposure is materially higher than this line alone suggests.
- **NVDA+OMCL combined (25% combined-concentration trigger):** **20.86%** today — essentially flat vs. this morning's ~20.79-20.85% reads, still ~4.14pp below the trigger. Stable, not yet actionable.
- **OMCL (8.98% / 7.89% pool):** reports 10/29, **6 days out**. The DCA gate (accumulated profit $0.368 vs. $2.50 threshold, **~$2.13 away**) and JPM's standing WAIT call govern — no sizing change before the print.
- **GEHC (5.88% / 5.17% pool):** reports 10/28, **5 days out** — same day as the FOMC decision, the book's single most concentrated event-risk day. Carries the book's highest leverage (~$8.0B net debt). Smallest position by design (quarter-size entry); sizing discipline here already reflects the risk.
- **XLE (13.55% / 11.91% pool):** the single largest satellite position, via a 24-holding basket rather than a single company — reduces single-company risk but not sector/commodity risk, and it is now the position doing the most unexplained work in the book's recent P&L (§1, §9). MS still reads it overvalued (-6.91% DCF gap, widening). No valuation case to add here even setting the hedge-narrative question aside.
- **Satellite sleeve total (NVDA+OMCL+XLE+GEHC): 40.29% of equity.** Essentially flat vs. this morning. Worth a cross-check against BR's own satellite-sleeve target the next time both desks publish close together — BR's own table (10/22 ~16:12 ET) puts satellites at ~35.1% of *pool*, consistent at this weighting.

## 9. Tail risk scenarios with probability estimates

1. **Hawkish FOMC surprise (hawkish hold, or an outright hike) — ~15-20% probability** (per this run's sourced-but-stale futures pricing; treat as directional only). Hits NVDA/VTI/GEHC hardest (§5); plausible single-day pool impact in the -3% to -6% range, landing just 4 days from today.
2. **At least one of GEHC/OMCL posts a structural-break miss — ~20-25% combined probability** (each independently ~10-15%, per JPM's standing capsule verdicts). Both have pre-written contingency plans on file — mechanically manageable, but two live triggers one day apart (10/28, 10/29), the second coincident with the FOMC decision, raises the odds of a same-week multi-fire with no breathing room between reassessments.
3. **Hormuz/Red Sea escalation broadening past a contained oil-price shock — moderate, recurring tail.** Upside for XLE in isolation (as today's price action shows); downside for broad risk sentiment (VTI/VXUS/NVDA) if it escalates past a commodity story into broader risk-off — the scenario where XLE's apparent "hedge" stops netting out (§6). Today's widening XLE/broad-market gap is consistent with the contained version of this scenario still being live, not yet with the broader one.
4. **AI-capex sentiment crack / semis multiple compression — elevated, roughly 25-30% for a >10% semis-specific move this quarter.** MS's DCF already reads NVDA ~9% overvalued (narrowed today on broad weakness, not improved fundamentals) — this scenario hits both the explicit NVDA line and the understated VTI look-through exposure simultaneously (§3).
5. **Dollar-strength/EM stress, compounding scenario 1 — lower standalone probability, correlated with it.** A hawkish Fed outcome and dollar strength move together; VXUS and GEHC's foreign-revenue translation both take a secondary hit on top of any direct equity move.

## 10. Hedging strategies — equities-only toolbox, top 3 risks

No options available (standing mandate). Realistic equities-only tools:

1. **Catalyst-clustering risk (§1, §9):** the only true hedge available is a **cash hedge** — hold pool-deployable cash flat through 10/27-29 rather than deploying it ahead of the window. The book is already roughly here (12.11% pool cash, essentially flat all day). Recommendation: don't shrink that buffer for a new idea until the window clears.
2. **Look-through AI/mega-tech concentration (§3):** no short or inverse-ETF tool is in scope. The only real lever is **relative rebalancing** — direct any future new core capital toward VXUS over VTI, or toward a genuinely defensive, currently-unheld sector (staples/utilities), to counterweight VTI's embedded tech tilt over time. A multi-month lever, not something that fires before next week's catalysts — and the one BR has now been asked to adopt or decline across several cycles.
3. **XLE's fragile hedge status (§2, §6, §9):** stop treating XLE as a reliable portfolio hedge, and say so more plainly given today's widening, still-uncorroborated divergence. It is doing hedge-like work *today* against a specific supply-shock scenario but would fail outright in the demand-driven recession scenario in §6. Mitigation: size and evaluate XLE purely on its own standing valuation merit (MS still reads it overvalued, gap widening) rather than on a "this is our hedge" narrative — don't add to it opportunistically just because it keeps being green.

## 11. Rebalancing suggestions (risk-reduction lens only — not a trade recommendation; this desk does not place trades)

| Position | Current (Equity%) | Risk-lens suggestion |
|---|---|---|
| NVDA | 11.88% | Once the FOMC/earnings window clears cleanly, revisit trimming toward ~10% equity weight — not urgent, no trigger breached, but directionally reduces both explicit and look-through AI concentration at once |
| XLE | 13.55% | Hold flat. No case to add (MS overvaluation read, widening gap); don't trim mid-divergence either — no structural break, just an unconfirmed price pattern |
| OMCL | 8.98% | Let the existing DCA gate (BR's mechanism, ~$2.13 away) do the work rather than a lump add — especially 6 days before earnings |
| GEHC | 5.88% | No change pre-earnings; smallest position by design on the book's highest-leverage name |
| VTI / VXUS | 30.93% / 28.79% | Core sleeve healthy combined (~60%); on the margin, tilt *future* new core contributions toward VXUS over VTI for real (not look-through) diversification away from the AI/mega-tech theme |

---

## Risk Heat Map Summary

| Position | Weight (Equity%) | Market/Beta Risk | Concentration Risk | Rate Sensitivity | Liquidity Risk | Near-Term Event Risk | Geo/FX Risk |
|---|---|---|---|---|---|---|---|
| **NVDA** | 11.88% | 🔴 High | 🔴 High (direct + look-through) | 🔴 High | 🟢 Very Low | 🟡 Medium | 🟡 Medium (Taiwan/China) |
| **VTI** | 30.93% | 🟡 Medium-High | 🟡 Medium (tech tilt) | 🟡 Medium-High | 🟢 Very Low | 🟢 Low | 🟢 Low |
| **VXUS** | 28.79% | 🟡 Medium | 🟢 Low | 🟡 Medium | 🟢 Very Low | 🟢 Low | 🔴 High (direct FX) |
| **XLE** | 13.55% | 🟡 Medium (fragile, unconfirmed hedge) | 🟡 Medium | 🟢 Low-Medium | 🟢 Very Low | 🟡 Medium | 🔴 High (Hormuz) |
| **OMCL** | 8.98% | 🟡 Medium | 🟡 Medium | 🟡 Medium | 🟡 Medium | 🔴 High (earnings 10/29, 6d out) | 🟢 Low |
| **GEHC** | 5.88% | 🟡 Medium | 🟡 Medium (+leverage) | 🟡 Medium-High | 🟡 Medium | 🔴 High (earnings 10/28, 5d out — same day as FOMC) | 🟡 Medium |
| **Portfolio-level** | 100% | 🟡 Medium | 🟡 Medium | 🟡 Medium-High | 🟢 Low (impractical at this size) | 🔴 **High — 3 catalysts in 4-6 days, no hedge** | 🟡 Medium |

---

*BW Risk Assessment — radical transparency, no softened warnings. Next run reassesses against live FOMC outcome and GEHC/OMCL prints as they land; flagging again that BW's AI/mega-tech look-through concentration ask (§3, §10) is now at 4+ consecutive cycles without an adopt/decline from BR.*
