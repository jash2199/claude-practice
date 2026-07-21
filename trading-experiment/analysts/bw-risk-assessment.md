# BW Risk Assessment — Latest Report
**Date: 2026-07-21 (Tuesday, ~14:43 ET)**

*Persona: risk analyst trained on Bridgewater/Ray Dalio radical-transparency principles for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 account. Ground truth this run: live `get_portfolio` + `get_equity_positions` (account 424593861) and live `get_equity_quotes` at ~14:40 ET, cross-checked against state.md and all four teammate reports (GS/MS/JPM dated 7/21, BR dated 7/20).*

---

## Overall portfolio risk grade: **C**
## Single biggest risk right now: **OMCL's pre-earnings decline just accelerated sharply with no identifiable catalyst — down ~6.6% intraday while the broader market and chip sector are rallying — 9 days before the binary 7/30 print.**

This is not a repeat of the "unexplained multi-session drift" flag every desk has been carrying since mid-July. Today is a step-change: OMCL is the *only* red position in the book while NVDA/VTI/VXUS are all green on a second-straight chip-relief-rally day (Nasdaq +1.36%, S&P +0.40%, Dow +0.26% per today's tape). A fresh, dedicated WebSearch for a company-specific catalyst came back empty — no news, no downgrade, no leak. That combination (negative decoupling, no news, accelerating into the print) is exactly the profile that should worry a risk desk more than a name that's simply "cheap." The position is not yet at the $40 mandatory-revisit line set in the 7/21 OMCL contingency plan (state.md) — it's $42.24, about 5.6% away — but it closed that gap by roughly half in a single session today. Grade held at C rather than dropped to C- only because this run's other structural news (the core sleeve landing almost exactly on target) is a genuine, offsetting improvement — see below.

---

## Heat map summary

| Risk factor | Level | Trend vs. last read | Note |
|---|---|---|---|
| OMCL binary earnings event (7/30) | 🔴 High | ⬆ Worsening | Accelerating, unexplained, negatively decoupled today |
| Sector/tech look-through concentration | 🟠 Medium-High | ➡ Flat (~38.7% vs. ~39.4%) | Still the book's largest structural exposure |
| Single-position concentration (VTI) | 🟠 Medium-High | ⬆ New flag this run | VTI now ~50% of invested equity, overshot its own sub-target |
| Geopolitical / Hormuz-oil shock | 🟠 Medium-High | ⬆ Worsening | Day 140, no ceasefire, new Houthi maritime embargo declared |
| Interest-rate event risk (FOMC 7/28-29) | 🟢 Low-Medium | ➡ Flat | ~92% priced for no change |
| Recession/drawdown tail | 🟠 Medium-High | ➡ ~Flat to slightly improved | Core top-up marginally dilutes single-name tail |
| Liquidity risk | 🟢 Low | ➡ Flat | All four names/funds highly liquid at this position size |
| Cash drag / deployment discipline | 🟡 Medium | ⬇ Improving | Cash now 28.2% of pool vs. 44.3% last read — real progress, still above 10% target |
| Currency/FX (via VXUS) | 🟡 Medium | ➡ Flat | Unhedged; USD strength on risk-off is a live headwind |
| Hedging capacity (equities-only) | 🔴 High (structural) | ➡ Flat | No options tool; OXY-as-hedge still stuck unvetted 8+ days |

---

## 1. Correlation analysis between holdings

Live evidence today is genuinely useful here. NVDA, VTI, and VXUS moved together (all green, tracking the chip-sector relief rally) — confirming the standing view that NVDA and VTI are tightly correlated (NVDA is a top-6-7% VTI constituent) and that VXUS, while it dampens the swing, does not decouple from the same broad tech-sentiment driver (it carries TSMC/Samsung/SK Hynix — the same semiconductor supply chain). OMCL alone moved in the opposite direction today, which **is** the decoupling thesis working exactly as designed at the correlation level — it just happens to be working via an unexplained *loss* right now rather than a benign non-move. Correlation and cost are two different questions: OMCL is doing its diversification job (proving it doesn't share NVDA/VTI/VXUS's driver) while simultaneously being the single worst-performing position in the book on a day everything else is up. Don't let the "diversification confirmed" framing paper over the "and it's losing money for reasons nobody can identify" fact sitting right next to it.

Estimated pairwise correlations (qualitative, consistent with prior reads): NVDA↔VTI high (+0.7-0.8), NVDA↔VXUS moderate (+0.4-0.5, via semis), VTI↔VXUS moderate-high (+0.5-0.6, global equity beta), OMCL↔(NVDA/VTI/VXUS) low to slightly negative over the trailing month, exactly the design intent, exactly what's straining the position right now.

## 2. Sector concentration risk

Using invested-equity weights (equity_value $35.59; NVDA 14.4%, VTI 50.4%, VXUS 22.6%, OMCL 12.6%):

- **Technology (blended look-through): ~38.7%** — NVDA (100% tech) + VTI's own ~42% tech sleeve + VXUS's semiconductor-supply-chain names. Essentially flat vs. the ~39.4% last logged (7/17-7/20 cycle); the modest VTI overweight this run is roughly offset by OMCL's shrinking dollar value reducing the healthcare-side denominator effect.
- **Healthcare (OMCL, plus incidental exposure inside VTI/VXUS broad indices): ~12.6%** direct, concentrated in a single name currently under acute event risk.
- **Everything else (financials, industrials, consumer, energy, etc.)** is only accessible through VTI/VXUS's broad-index diversification — the book has zero direct exposure outside tech and healthcare.

Plainly: this is a two-sector book wearing a four-position costume. Tech is nearly 40% of every invested dollar: that is not a diversified portfolio at $50-100 scale, it is a leveraged bet on one macro theme (AI/chip capex) with a healthcare-tech side bet layered on top.

## 3. Geographic exposure and currency risk factors

- **US-domiciled/listed: NVDA, VTI, OMCL** — the overwhelming majority of the book.
- **International ex-US: VXUS (~22.6% of equity)** — the only geographic diversifier, spanning developed (Japan, Europe) and emerging markets, unhedged.
- **Currency risk**: VXUS is unhedged USD-denominated exposure to foreign-currency assets. A risk-off flight to the dollar (which typically accompanies exactly the kind of macro shock this book is most exposed to — a Hormuz escalation, a hawkish Fed surprise) would compound VXUS's local-equity losses with FX translation losses simultaneously. This is a real, underappreciated tail: VXUS is supposed to be the diversifier, but in the specific scenario this book worries about most (geopolitical/oil shock → risk-off → dollar strength), its hedge value partially cancels itself out via the currency channel.
- No direct commodity or emerging-market-currency exposure beyond what's embedded in VXUS's index construction.

## 4. Interest rate sensitivity per position

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | High | Long-duration growth cash flows; MS's own DCF gap (~27.2% "overvalued") is itself a rate-sensitivity readout — a WACC move of even 1pt swings fair value ~$15-20/share per MS's sensitivity table |
| OMCL | Moderate-high | Growth-tech-like duration profile, partially offset by net cash (~$71M) reducing refinancing/leverage rate risk |
| VTI | Moderate | Tracks broad-market average duration, tilted slightly higher than the index average by its own ~42% tech weight |
| VXUS | Moderate, plus FX channel | Direct equity-duration exposure moderate; secondary exposure via USD strength if US rates rise faster than international peers' |

FOMC (7/28-29) sits one day before OMCL's own print — two catalysts sharing a 48-hour window, as flagged previously. Base case is a hold (~92% priced per this run's fresh check), so near-term rate-shock risk itself is Low-Medium, but a hawkish "higher for longer" tone alone (no hike required) would be a real headwind for NVDA and OMCL specifically, landing the day before OMCL's own binary event — a compounding-risk window worth naming explicitly rather than treating as two separate line items.

## 5. Recession stress test — estimated drawdown

Per-position severe-recession drawdown estimates (peak-to-trough, consistent with each name's beta/cyclicality/valuation cushion):

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -50% to -65% | Extreme cyclicality (semis + AI-capex reliance) compounded by an already ~27% valuation stretch per MS's DCF — a recession would remove both the growth premium and the capex tailwind at once |
| OMCL | -35% to -50% | Hospital capex is cyclical and delayable in a downturn; small-cap liquidity premium widens in stress |
| VTI | -30% to -40% | Broad-market historical bear-market range, pushed toward the high end by the fund's own tech tilt |
| VXUS | -25% to -35% | Typically somewhat lower US-recession beta, offset by unhedged currency risk cutting either way |

**Blended equity-sleeve estimate (weighted by current holdings): ~35-40% drawdown.** Applied to the full trading pool (equity + cash, using today's 71.8% invested / 28.2% cash split), the pool-level estimate is **~25-29% drawdown** — modestly better than BR's standing 35-50% band because the improved core allocation and still-elevated cash cushion both dilute the concentrated single-name tail somewhat. This is a real, if small, structural improvement worth crediting — it just isn't the dominant story this run.

## 6. Liquidity risk rating

| Position | Rating | Note |
|---|---|---|
| VTI | 🟢 Very Low | Deepest, most liquid US equity ETF in existence |
| VXUS | 🟢 Very Low | Highly liquid broad international ETF |
| NVDA | 🟢 Low | Mega-cap, extremely deep order book |
| OMCL | 🟡 Low-Moderate | Smaller-cap, thinner average daily volume than the other three — not a practical concern at this position's trivial ($4.49) size, but structurally the book's least liquid holding, and the one most likely to gap on a surprise print |

No liquidity risk is currently binding at this account size — flagging for completeness and because OMCL's liquidity profile (thinner book, prone to gapping) is directly relevant to how a 7/30 surprise would actually execute if a same-day exit were ever needed.

## 7. Single stock risk and position sizing recommendations

**New finding this run: the core sleeve is right on target in aggregate but badly imbalanced internally, and VTI has become the book's largest single position risk by a wide margin.** Today's $8 VTI buy correctly closed the *aggregate* core deficit (core is now 52.4% of the trading pool vs. a 55% target — a gap of just ~$1.28, down from -$9.53) — but it was sized off the aggregate 55% target, not VTI's own 25% sub-target, and it overshot that sub-target substantially: VTI is now **36.2% of the total trading pool and 50.4% of all invested equity** — more than 11 percentage points over its own intended weight, while VXUS sits close to its 15% sub-target (16.2%). Half of every invested dollar in this book now sits in one ETF. VTI is about as safe as a single position gets, and this isn't a crisis — but it is a sizing miss worth naming plainly: **the next core dollar, if any, should go to VXUS or a new fund, not VTI**, or the "diversified core" bucket will keep drifting toward being a VTI-concentration bucket with a VXUS side note.

**NVDA (14.4% of equity / 10.4% of pool)** and **OMCL (12.6% of equity / 9.1% of pool)** both sit within BR's 20% face-value soft cap individually, but OMCL now carries acute, escalating binary-event risk into 7/30, and NVDA carries the book's largest standing valuation gap (~27.2% DCF-overvalued, the widest logged yet). Neither should be added to before their respective catalysts clear — this is already consensus across all five desks and I'm not dissenting. **New recommendation**: tighten the single-satellite-name soft cap from 20% to **15% of invested equity while that name is inside a live earnings window or a widening valuation stretch** — a temporary, condition-triggered tightening, not a permanent policy change. OMCL and NVDA are each currently under that tighter bar, so this is a forward-looking guardrail, not a call to trim today.

## 8. Tail risk scenarios with probability estimates

1. **OMCL 7/30 miss + guidance cut**: -18% to -25% single-day move on the position. Probability **~20-25%** — above the pure 1-of-4 historical base rate (Q4 2025's -18.4%) because today's unexplained, accelerating pre-earnings weakness is itself evidence-weighted, not just noise.
2. **AI-capex valuation air pocket** (an efficiency-shock headline, a hyperscaler capex guide-down): -15% to -30% on NVDA, -5% to -10% drag on VTI via its tech weight. Probability **~10-15%** over the next 1-3 months — this book has now logged three separate soft signals in this direction (NY data-center moratorium, CoreWeave chip-price hedging, recurring Chinese-model-efficiency headlines) without any single one being decisive.
3. **Hormuz/Iran escalation to a full shipping closure or direct Gulf-state disruption**: oil spike, broad risk-off, VXUS hit hardest via EM/Asia + currency, secondary hit to NVDA/VTI/OMCL via general de-risking. Probability **~10%** of a serious escalation in the next 30 days — the conflict just crossed its 140th day with no ceasefire and a **new complication this week**: Houthi militants declared a maritime embargo against Saudi Arabia, a fresh escalation vector not previously on this book's radar.
4. **Hawkish FOMC surprise (7/28-29)**: -3% to -8% broad pullback, hitting NVDA/OMCL hardest as long-duration names. Probability **~7-10%**, in line with priced market odds (~92% no-change).

## 9. Hedging strategies — top 3 risks, equities-only toolbox (no options)

1. **OMCL earnings binary risk**: can't options-hedge a binary event with equities. The available levers are all already partially in use — half-size entry, a written falsifiable decision rule (state.md, 7/21), no pre-earnings add — and I'd add one: **earmark a specific slice of the $14 deployable cash now as the pre-committed "buy the post-earnings dip" reserve, contingent on rule 3 of the contingency plan (a clean miss with no structural cause)**, rather than deciding sizing live under pressure after the print. That converts a pure binary risk into an asymmetric opportunity rather than leaving the trader flat-footed either way.
2. **Tech/AI concentration (blended ~38.7%)**: the only real equities-only hedge is composition, not derivatives — steer future core dollars toward VXUS (not VTI, per the sizing finding above) and treat a value-tilted or equal-weight broad fund, not another growth/tech fund (SCHG/QQQM correctly stays last-priority), as the actual diversifying "3rd core leg" if one is ever added.
3. **Hormuz/geopolitical shock**: OXY remains the one candidate on the board that would function as a genuine equities-only hedge against this book's own largest live tail risk, and it has now been stuck in MS's DCF-vetting queue for **8+ consecutive days**. I'm escalating this past a routine flag: the book currently has *no* hedge against its most active, currently-worsening tail risk (fresh Houthi embargo this week) purely because of a process bottleneck, not a judgment call. This should get resolved — either MS builds the OXY DCF next cycle or the desk should explicitly decide OXY isn't going to clear and stop carrying it as a phantom hedge option.

## 10. Rebalancing suggestions with allocation percentages

Current vs. target (of the ~$49.59 trading pool):

| Sleeve/ticker | Target | Current | Gap |
|---|---|---|---|
| Core total | 55% | 52.4% | -$1.28 (essentially closed) |
| — VTI | 25% | 36.2% | **+$5.46 over** |
| — VXUS | 15% | 16.2% | +$0.60 over (immaterial) |
| — 3rd core fund (SCHG/QQQM) | 15% | 0% | -$7.44 (still correctly unopened) |
| Satellite total | 35% | 19.4% | -$7.72 |
| — NVDA | ~10-12% | 10.4% | roughly on target |
| — OMCL | ~10-12% | 9.1% | roughly on target, frozen by earnings window |
| — 3rd satellite (TBD) | ~10% | 0% | -$4.96, no candidate cleared |
| Cash | 10% | 28.2% | +$9.06 over, improving |

**Recommendation**: don't force a trade to fix VTI's overshoot — at this dollar scale, unwinding a position to rebalance a few dollars of drift isn't worth the discipline cost, and VTI is a benign asset to be overweight in. But **the standing "next dollar → VTI or VXUS" instruction (BR, 7/17-7/20) needs updating**: with VTI now well past its own sub-target, the next core dollar should default to **VXUS specifically**, not "whichever" — the old instruction was correct when VTI was underweight; it is stale now that today's trade flipped that. Satellite remains frozen by the earnings/valuation gates on both existing names, and the cash gap is a byproduct of that freeze, not fresh evidence of excess caution — consistent with BR's standing read, now reinforced by an actual improving trend (44.3%→28.2% in one session) rather than a static complaint.

---

## Cross-check with other analysts

- **GS/MS/JPM (all 7/21)**: unanimous hold-OMCL-no-add-before-7/30 stance stands and this report doesn't dissent — the new contribution here is that today's price action (-6.6% intraday, no news, negatively decoupled from a rallying tape) is a materially fresher and more acute data point than what GS's own report captured (GS's risk rating move 6→7 was based on the multi-session drift as of 7/20-7/21 morning; today's move is a standalone escalation on top of that, not yet reflected in any teammate's report as of this read).
- **MS**: agrees the DCF discount (~24.9% OMCL undervalued) is not itself a buy signal into the print — this report adds that the discount is becoming less relevant by the day as the binary-event risk swamps the valuation signal entirely.
- **BR (7/20, one day stale)**: this report's VTI-overshoot finding directly updates BR's "next dollar → VTI or VXUS, whichever is more underweight" instruction — as of today's live positions, that instruction should read "VXUS" specifically, not "whichever," since VTI already overshot on the last trade.
- **For MS specifically**: escalating GS's repeated OXY-DCF request past a routine ask — the vetting gap now functions as a hedging-capacity gap for this book's largest live tail risk, not just a missed opportunity.

---

Sources:
- [Why Omnicell (OMCL) Shares Are Plunging Today (Yahoo Finance)](https://finance.yahoo.com/news/why-omnicell-omcl-shares-plunging-165610859.html)
- [Omnicell (NASDAQ:OMCL) Trading Down 4.6% – Here's Why (Daily Political)](https://www.dailypolitical.com/2026/07/21/omnicell-nasdaqomcl-trading-down-4-6-heres-why.html)
- [Stock Market Today (July 21, 2026): Nasdaq, S&P 500 climbs as earnings lift market, Middle East tensions loom (TheStreet)](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-july-21-2026)
- [Stock market today: Nasdaq leads Dow, S&P 500 futures higher as chip stocks revive (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-tuesday-july-21-dow-sp-500-nasdaq-084631499.html)
- [Fed Decision in July? Trading Odds & Predictions 2026 (Polymarket)](https://polymarket.com/event/fed-decision-in-july-181)
- [Fed Rate Probability 2026 | FOMC Meeting Odds & Interest Rate Forecast (centralbank.watch)](https://centralbank.watch/federal-reserve/)
- [2026 Strait of Hormuz crisis (Wikipedia)](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_crisis)
- [U.S. strikes Iran as tanker hit in Hormuz; 10-day ceasefire in focus (CNBC)](https://www.cnbc.com/2026/07/21/us-iran-war-trump-hormuz-houthis.html)
