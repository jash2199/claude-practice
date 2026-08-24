# BW Risk Assessment — Risk Management Report
**Date: 2026-08-24 (~10:45 ET, Monday)** — first BW read of the week. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time, plus independent WebSearch verification of rates/CDS/Hormuz-Iran developments. All weights recomputed fresh this run, not carried from BR/MS/GS/JPM.

---

## Overall Portfolio Risk Grade: **C** (downgraded from C+)

## Single biggest risk right now
**The NVDA pool-drift trigger buffer just hit its tightest reading on record — 0.37pp — and for the first time it's approaching the band from the *opposite* side every prior report has been warning about.** Every BW report this month has framed the drift trigger as "one rally away from firing" on the upside (NVDA getting too heavy). Today NVDA is down **−2.22%** intraday on broad risk-off (Treasury Secretary Bessent's "economic D-Day" Iran sanctions announcement, including for the first time explicit targeting of third-country oil buyers naming China, plus a stalled US-Canada tariff standoff), and the position's pool weight has fallen to **10.37%** — just 0.37pp above the 10% floor of the ±5pp band around the 15% pool target. **This is the same forced-review mechanism, now compressed to its tightest gap ever recorded, two days before NVDA's 8/26 print, driven by macro/geopolitical selloff rather than any NVDA-specific news.** A continuation of today's move — or a further pre-print risk-off leg — could fire the trigger from the downside before the print even happens, which the book's contingency plans have never explicitly modeled (both the NVDA earnings contingency plan and the drift-trigger design were written assuming an upside breach).

Compounding factors, all still live:
1. **NVDA/CRWD report Wednesday 8/26 after the close (2 days out).** Zero hedging capacity under the equities-only mandate.
2. **Rate-shock trigger (rule 6a) status unresolved, and today's read is a mild positive, not a fire.** Friday 8/21's 30yr close was a confirmed 5.273% (over the line, 1-for-2 toward the two-close test). Today's 30yr is reading ~5.24% intraday (still pre-close) — **if that holds into the official close, the streak breaks and rule 6a resets to 0-for-2** rather than firing. Flagging as directionally favorable but not yet confirmed; next run must check the settled close.
3. **A genuinely new, dated geopolitical escalation**: Bessent's Iran sanctions explicitly name China's oil purchases from Iran as a target for the first time this book has seen, and Iran has separately warned that vessels violating its Strait of Hormuz transit rules could face fines, detention, or confiscation — a harder line than the "route-coordination" language this desk had been tracking. Oil itself eased today (Brent $93.10, WTI $85.89, both down slightly) as markets await sanction details rather than price in an immediate supply shock — meaning **XLE did not do its usual hedge job today** (XLE −0.83%, in line with the rest of the red tape rather than offsetting it). Rule-3 OXY veto stands and strengthens.

All five holdings were red today with no single-position outlier beyond NVDA — this reads as broad macro risk-off into event week, not an idiosyncratic break on any name.

---

## Live position snapshot (Robinhood-verified)

| Symbol | Qty | Avg cost | Price now | Day chg | Since-cost | Position value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $209.95 | −2.22% | +4.25% | $5.21 | 11.78% | 10.37% |
| VTI | 0.043290 | $370.76 | $377.26 | −0.26% | +1.75% | $16.33 | 36.90% | 32.49% |
| VXUS | 0.154525 | $84.13 | $87.17 | −0.62% | +3.61% | $13.47 | 30.43% | 26.80% |
| OMCL | 0.106405 | $46.99 | $35.41 | −0.48% | −24.64% | $3.77 | 8.51% | 7.50% |
| XLE | 0.086775 | $57.62 | $63.11 | −0.83% | +9.53% | $5.48 | 12.37% | 10.90% |
| **Cash (deployable)** | — | — | — | — | — | $6.00 | — | 11.94% |

Equity = $44.261 (Robinhood-verified `get_portfolio`), total account = $100.261 (cash $56.00, of which ~$50 is the untouchable reserve and $6.00 is trading-pool cash), pool ≈ $50.261. **NVDA+OMCL combined = 20.29% of equity** — under the 25% combined trigger, buffer widened slightly to ~4.71pp (both names fell, buffer moves mechanically, not a signal). NVDA solo (11.78%) remains comfortably under the 18–20% single-name trigger (~6.2pp buffer). **NVDA's pool-drift trigger buffer is the story this run — see above.** OMCL remains the book's only structurally underwater position at −24.64% since cost, essentially flat today on no identified catalyst either way.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| **NVDA pool-drift trigger proximity** | 🔴 High (new: tightest ever, approaching from the downside) | Only 0.37pp of headroom to the 10% floor of the ±5pp band — closer to firing than any prior BW read, and for the first time on the underweight side |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.29% of equity combined, ~4.71pp under the 25% trigger |
| Correlation / lack of true diversification | 🔴 High | All five holdings red together today — exactly the "no ballast" scenario this desk keeps flagging; VTI+VXUS long-only beta, NVDA a levered slice of VTI's own top holding |
| Binary-event stacking (NVDA/CRWD print + Jackson Hole) | 🔴 High | 8/26 print (2d out) landing inside a week already carrying a fresh Iran-sanctions shock and a US-Canada tariff flare-up; zero options hedging capacity |
| Sector concentration | 🟡 Medium | AI/mega-cap-tech (NVDA + VTI's embedded tech weight) remains the book's largest single factor bet, 2 days from its own binary catalyst |
| Interest-rate / duration sensitivity | 🟡 Medium (improving, unconfirmed) | 10yr steady 4.71%; 30yr reading ~5.24% intraday vs Friday's confirmed 5.273% close — if it holds, rule 6a's two-close test breaks rather than fires. Not yet confirmed. |
| Geopolitical / Hormuz-Iran shock | 🟠 Medium-High (escalating) | Fresh, dated escalation (China named as a sanctions target for the first time; Iran threatening vessel fines/detention/confiscation); rule-3 OXY veto strengthens; XLE's hedge underperformed today specifically |
| Geographic / currency exposure | 🟡 Medium | ~69.6% of equity USD-domestic; VXUS (30.4%) the only unhedged FX sleeve |
| Liquidity risk | 🟡 Medium (OMCL) / 🟢 Low (others) | OMCL smallest, most-volatile, hardest to exit in size of the five holdings |
| Recession / broad drawdown | 🟡 Medium | See stress test — no position is recession-proof |
| Hedging capacity | 🔴 High (structural gap) | Equities-only, ~$50 pool — cash is the only real hedge and only 11.94% of pool is in it, effectively unchanged for weeks |

---

## Correlation analysis
- **All five holdings moved the same direction today (down)** — the cleanest single-day illustration on file of this desk's standing "no true diversification" flag. NVDA (−2.22%) led the drop; the other four clustered in a tighter −0.26% to −0.83% band.
- **VTI vs. VXUS**: moved together again (−0.26%, −0.62%) — standard high-correlation pairing, and it holds on red days exactly as it does on green ones.
- **NVDA vs. VTI**: NVDA fell far harder than VTI today (−2.22% vs. −0.26%) — the first genuinely large divergence in weeks, consistent with pre-earnings idiosyncratic volatility layering on top of the broad selloff rather than NVDA simply tracking the tape.
- **XLE vs. everything else**: normally this book's one plausible low/negative-correlation holding, but today it fell in line with the rest of the book (−0.83%) rather than offsetting the equity weakness — a reminder, restated plainly, that its hedge behavior is regime-dependent and did not show up on the one day this run that a geopolitical escalation actually landed.
- **OMCL**: lowest correlation to the other four in magnitude terms (−0.48%, near the middle of the pack today) but still a position down ~24.6% with no identified catalyst for the original slide — "uncorrelated" here continues to mean "poorly understood," not "diversifying."

## Sector concentration (equity-value basis)
- AI/semiconductors (direct): NVDA ≈ 11.78%
- Broad-market equity beta, mega-cap-tech-weighted: VTI ≈ 36.90% (embeds a further unquantified tech overweight via VTI's own top holdings)
- International developed + EM: VXUS ≈ 30.43%
- Healthcare IT: OMCL ≈ 8.51%
- Energy: XLE ≈ 12.37%

Roughly half the book (NVDA direct + VTI's embedded tech weight) remains a single concentrated bet on AI/mega-cap-tech multiples, now two days from that bet's own binary catalyst.

## Geographic exposure and currency risk
- USD-domestic: NVDA, OMCL, XLE, VTI ≈ 69.6% of equity.
- VXUS ≈ 30.4% is the entire non-USD sleeve — developed-ex-US + EM, fully unhedged. Per BR's own read, 2026 outperformance here has been partly dollar-driven, so a dollar reversal compresses this sleeve's return independent of underlying fundamentals.

## Interest-rate sensitivity by position
- **NVDA**: high — MS's DCF (8/21) shows a ~30.7% downside gap that widens directly with the discount rate; every basis point matters more with a binary print two days out.
- **OMCL**: high — small-cap growth healthcare IT, discount-rate sensitive, compounded by an already-deep, unexplained drawdown.
- **VTI**: moderate-high — mega-cap/tech-heavy, inherits much of NVDA's duration in aggregate.
- **VXUS**: moderate — somewhat lower duration than VTI, not immune.
- **XLE**: low, arguably inverse — driven by the oil premium, not rates; today's oil pullback (despite the Iran escalation) shows this can cut against the position too.
- **GEHC (candidate, not held)**: moderate — MS's corrected DCF base ($70.2) still implies a mild overvaluation at today's price; net-debt (~$8.0B) adds a rate-refinancing sensitivity layered on top of duration.

## Recession stress test (illustrative peak drawdown)
| Position | Est. drawdown in a recessionary bear | Basis |
|---|---|---|
| NVDA | −45% to −60% | High-beta semis/AI drew down ~45–65% in 2022; recession adds demand downside on top of the current valuation stretch |
| VTI | −25% to −35% | Broad US market recession range, high end given elevated valuations/duration |
| VXUS | −25% to −35% | Similar; EM sleeve adds tail variance |
| OMCL | −35% to −50% | Small-cap growth healthcare IT, compounded by a visible idiosyncratic drawdown already in progress |
| XLE | −30% to −55% | Wide by design: demand-shock recession hits energy hardest; a supply-shock/inflationary recession (plausible given the live Hormuz/Iran situation) could see it hold or rally |

**Blended estimate**: roughly −30% to −40% peak-to-trough on the ~$44.26 equity sleeve (≈ $13–18), pool-level −26% to −36% since cash is largely untouched. Trivial in absolute dollars at this book size; the percentage remains the number that should discipline sizing as the account scales — unchanged methodology from prior reports.

## Liquidity risk by holding
- NVDA, VTI, VXUS, XLE: **Low** — effectively unlimited at this account size.
- OMCL: **Medium** — mid/small-cap, the one position with non-negligible exit cost if sold in size, and the one whose price action remains least explicable of the five.

## Single-stock risk and position-sizing recommendations
- NVDA (11.78% of equity) and OMCL (8.51%) remain the only true single-name risk; combined 20.29% sits comfortably under both hard triggers, but **the pool-drift trigger (a separate, tighter mechanism) is now the one to watch closely — 0.37pp of headroom, closest to firing this desk has ever recorded.**
- **Recommendation, stated plainly**: do not treat today's NVDA weakness as a buying opportunity to "average down" pre-print — any purchase now would push the drift trigger further from the floor in the short term but adds exposure into a binary event with zero hedging capacity, which is exactly the wrong trade-off two days out. Equally, do not treat a further slide toward or through the 10% pool-weight floor as a reason to panic-trim; if the trigger fires, let it force the review it's designed to force, per the same discipline this desk has argued for the upside case all month.
- **Standing ask, restated and sharpened this run**: the written NVDA contingency plans (earnings contingency + drift trigger) were both designed assuming an upside breach. This desk asks the team to explicitly confirm the same "forced review, not automatic action" framing applies symmetrically if the trigger fires from a *downside* macro-driven move mid-week, rather than assuming it only matters for gains.
- Rule 6a (rate shock): 30yr reading ~5.24% intraday vs. Friday's confirmed 5.273% close — if today's official close lands below 5.25%, the two-consecutive-close test breaks and rule 6a resets to 0-for-2. **Next run must pull the confirmed close, not another intraday snapshot.**
- On GEHC sizing: unchanged — endorse $2.50 quarter-size only paired with entry ≤ ~$70. GEHC's gap to that ceiling has been widening for three straight sessions (per GS 8/24) on no company-specific news; still not price-eligible.

## Tail risk scenarios
| Scenario | Rough probability (next 2–5 trading days) | Portfolio impact |
|---|---|---|
| NVDA prints in-line-to-good but the market sells it anyway (JPM: 3 of last 4 next-day reactions negative despite beats) | ~50–60% | Concentrated hit to NVDA + VTI's embedded tech weight; the book's written contingency plan is the live test case, 2 days away |
| NVDA's pool-drift trigger fires from further pre-print risk-off weakness (no NVDA-specific catalyst needed — only 0.37pp of headroom) | ~30–40% (raised sharply — tightest buffer on record, and today's macro tape is actively pushing this direction) | Mandatory review forced from the downside, mid-event-week — a genuinely new scenario this desk's contingency plans don't yet explicitly address |
| Iran sanctions escalation triggers a genuine Hormuz supply disruption (beyond today's rhetoric) | ~20–25% | Oil spikes, but today's pattern (oil easing on sanctions news, XLE falling with the tape) suggests the hedge may lag any actual spike rather than lead it |
| Rate-shock trigger (rule 6a) fires on today's close despite the intraday pullback | ~15–20% (lowered — today's intraday 30yr read is below the line, though unconfirmed) | Multiple-compression concentrated in NVDA/OMCL/VTI's tech-heavy core |
| Chip-sector-specific stress reasserts into the print (CDS still elevated near 80.77bps, unresolved sourcing for a fifth+ cycle) | ~20–25% | Compounds the earnings-reaction risk rather than being independent of it |
| Broad risk-off (Iran sanctions + US-Canada tariff standoff) extends through the print and Jackson Hole | ~25–30% | Compounds every other risk on this list simultaneously — the scenario today's price action is the leading edge of |

## Hedging strategies for the top 3 risks (equities-only, no options)
1. **NVDA pool-drift trigger at its tightest-ever buffer, approaching from the downside (top risk this run)**: no options toolbox, so the lever is discipline, not action — do not add into the weakness (would mask the signal the trigger is designed to surface) and do not panic-trim if it breaches (same "forced review, not automatic sell" framing this desk has argued for the upside case). **Standing ask, sharpened**: get explicit team confirmation that the trigger's response framework applies symmetrically to a downside/macro-driven fire, not just a price-appreciation fire — this has never been tested in either direction and today is the closest call yet.
2. **Binary-event stacking (NVDA/CRWD print + Iran sanctions + Jackson Hole, compounding into the same 48 hours)**: cash is the only real hedge at this scale. Defend the 11.94%-of-pool floor through the print; do not spend it down chasing a GEHC entry or averaging into NVDA weakness specifically inside this window.
3. **Geopolitical / correlation risk (today's all-five-red session as the case study)**: XLE's hedge behavior is regime-dependent, not standing — it did not offset today's broad selloff. No fix available under the equities-only mandate beyond continuing to hold XLE for the scenarios where it does work (a genuine Hormuz supply shock, as opposed to sanctions-announcement rhetoric) and not over-relying on it as a blanket portfolio hedge.

## Rebalancing suggestions
- **NVDA**: −4.63pp under the 15% pool target, buffer to the 5pp band's floor down to just 0.37pp. **Do not close this gap via purchase before 8/26** — the tightness itself is the signal to leave alone, not fill.
- VTI +2.49pp over a 30% pool target, VXUS +1.80pp over 25% — both inside the 5pp band, no rebalance action warranted.
- OMCL −2.50pp under a 10% pool target — standing read unchanged: the drawdown remains unexplained; not a valuation-driven add case regardless of MS's DCF discount.
- XLE +0.90pp — essentially on target, no action.
- Cash at 11.94% of pool, above the 10% floor — **defend this floor through the print and Jackson Hole window**; the one lever the book actually has this week.
- If new capital deploys, preference order unchanged: (1) let deployable cash sit at or above its current level through the event window; (2) any equity add should favor the lowest-correlation candidate at the right price (GEHC, still not there); NVDA remains the least-preferred add on risk grounds this week specifically, now doubly so given the drift-trigger proximity.

---
*Prior report: consult `git log -p -- trading-experiment/analysts/bw-risk-assessment.md` for history.*

**Sources this run**: [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield), [US 30 Year Bond Yield (TradingEconomics)](https://tradingeconomics.com/united-states/30-year-bond-yield), [30-year Treasury yield tops 5.33%, new 19-year high (CNBC, 8/18 context)](https://www.cnbc.com/2026/08/18/treasury-yields-.html), [Stock Market Today (Aug. 24, 2026): Nasdaq slides on Iran sanctions, U.S.-Canada tariff threats (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/stock-market-today-aug-24-134834490.html), [Shares dither, oil slips in wait for US details of Iran sanctions (Reuters via Lufkin Daily News)](https://lufkindailynews.com/news_reuters/business/shares-dither-oil-slips-in-wait-for-us-details-of-iran-sanctions/article_72d1ff43-7bc0-5449-9a96-7f9cb2a417d5.html), [US Stocks Fall as Traders Prep for Nvidia Earnings, Jackson Hole (Bloomberg)](https://www.bloomberg.com/news/articles/2026-08-24/us-futures-drop-as-investors-prep-for-busy-week-nvidia-earnings), [Nvidia's credit default swaps surpass July peak (Seeking Alpha)](https://seekingalpha.com/news/4634471-nvidias-credit-default-swaps-surpass-july-peak), [Nvidia's rising CDS the talk of Wall Street (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/nvidia-rising-cds-talk-wall-123955612.html), plus Robinhood live quotes/positions/portfolio and the sibling analyst reports (GS 8/24, JPM 8/24, MS 8/21, BR 8/21) + state.md.
