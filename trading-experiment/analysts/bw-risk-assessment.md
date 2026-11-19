# BW Risk Assessment

**Report date: 2026-11-19 (Thursday), ~09:41 ET** (14:41 UTC; verified via `TZ=America/New_York date` and live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session). Persona file re-read fresh this run — unchanged since last cycle.

## Overall Portfolio Risk Grade: **D** (held)

## Single biggest risk right now

**The book's real tech/AI exposure is bigger than the position list makes it look, and there is still zero hedge against it.** NVDA alone is a modest 8.20% of pool — but VTI (27.93% of pool) is a cap-weighted US total-market fund whose top holdings are dominated by the same mega-cap AI/semiconductor names NVDA belongs to. Add VTI's embedded big-tech weight to the direct NVDA position and the book's *effective* AI/semis beta is meaningfully north of the 8.2% a glance at the position list suggests — while VTI gets counted everywhere else as the "diversified, safe" sleeve. This isn't new information, it's an old blind spot restated with today's numbers because nobody has sized it: there is no options toolbox here, no short, and the only real lever this desk has — cash — currently sits at just 12.81% of pool. If the AI trade rolls over hard, this book does not have a hedge, it has a prayer that OMCL/GEHC/XLE's idiosyncratic moves offset it. They are not sized to.

## Live portfolio snapshot (09:41 ET)

| Holding | Qty | Price | Mkt Value | Avg Cost | Unrealized | % of Equity | % of Pool* |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $157.19 | $3.9025 | $201.40 | **-21.95%** | 9.40% | 8.20% |
| VTI | 0.036690 | $362.35 | $13.298 | $370.40 | -2.17% | 32.04% | 27.93% |
| VXUS | 0.154525 | $79.3475 | $12.263 | $84.13 | -5.69% | 29.55% | 25.76% |
| OMCL | 0.106405 | $34.505 | $3.672 | $46.99 | **-26.57%** | 8.85% | 7.71% |
| XLE | 0.086775 | $61.57 | $5.343 | $57.62 | +6.86% | 12.87% | 11.22% |
| GEHC | 0.036393 | $83.21 | $3.028 | $68.69 | +21.14% | 7.30% | 6.36% |
| **Equity total** | | | **$41.5057** | | | **100%** | **87.18%** |
| Cash (deployable) | | | $6.10 | | | — | 12.81% |

\*Pool = total account value ($97.6057) minus Jash's $50 off-limits reserve = **$47.6057**, currently **-4.79%** below the $50 base (an improvement from this morning's -5.13% as NVDA/VTI/XLE/VXUS all rallied).

## Correlation analysis

- **NVDA ↔ VTI: the book's real correlation problem.** VTI is not an independent diversifier from NVDA — it's cap-weighted and mega-cap tech/semis is its largest sector bloc. A broad AI-led drawdown moves both legs the same direction the same day, which is exactly what happened on 11/17's NVDA print (NVDA and VTI both sold off together). Treat NVDA + VTI as one correlated sleeve, not two.
- **OMCL ↔ GEHC: low-to-moderate correlation.** Both nominally "healthcare," but OMCL (pharmacy automation software/robotics, small-cap) and GEHC (medical imaging equipment, large-cap) sit in different sub-industries with different demand drivers (hospital IT capex vs. imaging capex) and have moved in opposite directions on multiple sessions this month (OMCL down, GEHC up, and vice versa) — this is genuine diversification, one of the few pairs in the book that is.
- **XLE: the only true outlier.** Energy/commodity-driven, historically low-to-negative correlation with tech in several past regimes, though it converges toward 1 with everything else in a genuine broad risk-off recession (see stress test below). It is diversifying day-to-day, not in a crash.
- **VXUS: diversifying day-to-day, converges in a crash.** International equities reduce single-market concentration under normal conditions, but in a US-led risk-off event, global equity correlations historically converge toward 1 — don't over-credit VXUS as a recession hedge.

## Sector concentration (% of pool)

| Sector / sleeve | Exposure | Note |
|---|---|---|
| Tech/AI-semis (NVDA direct) | 8.20% | Understated — see look-through point above |
| Tech/AI-semis (look-through via VTI, est.) | ~8-9% additional | VTI's largest sector weight is tech; this is an estimate, not a held figure, but it is not zero |
| Healthcare (OMCL + GEHC) | 14.07% | Split across two different sub-industries — genuinely diversified internally |
| Energy (XLE) | 11.22% | Single-sector commodity-cyclical bet via one ETF |
| Broad market (VTI + VXUS combined) | 53.69% | Majority of the book, but VTI's internal tech tilt means this is not as "generic" as it looks |
| Cash | 12.81% | Only real dry powder / hedge in the book |

**NVDA + OMCL combined (the two true single-stock risk positions): 15.91% of pool** — clean vs. both the 25% hard trigger and 20% soft trigger the team already tracks, but worth restating plainly: that trigger is sized for ETF-diversified books, and this book's *effective* concentrated-sector exposure (tech via NVDA+VTI, energy via XLE) is considerably wider than "two single names."

## Geographic exposure & currency risk

- **~74% of pool is USD-only / US-domiciled** (NVDA, OMCL, XLE, GEHC, and VTI's underlying US equities) — revenue bases for NVDA and GEHC do have real international components, but the securities themselves are USD-settled with no currency hedge.
- **VXUS (25.76% of pool) is the only genuine FX-diversified sleeve** — developed + emerging market basket, exposure to EUR/JPY/GBP/EM-currency moves against the dollar.
- **Net read:** this is not a currency-hedged or currency-diversified book in any meaningful sense. A broad dollar rally (consistent with the "more aggressive Fed hikes" narrative the team has been tracking since the 10yr-rate correction) would be a drag specifically on the VXUS quarter of the book, not a book-wide driver — but it means VXUS can't be relied on as ballast if the dollar story and the equity-selloff story hit at the same time, which is a common pairing.

## Interest rate sensitivity (per position)

| Holding | Sensitivity | Why |
|---|---|---|
| NVDA | **High** | High-growth/high-multiple name; team's own WACC rebuild (12.72%, now correctly re-pointed to the 5.12% Rf) means fair value moves hard with the discount rate |
| OMCL | **High** | Small-cap growth-ish healthcare tech, WACC 9.43% — among the most rate-sensitive single names on the book |
| VTI | **Moderate-High** | Broad market inherits the growth/tech multiple compression risk from its largest constituents |
| XLE | **Moderate** | Driven more by spot oil/commodity pricing than discount-rate math day-to-day, but higher-for-longer rates still pressure capex-heavy energy valuations at the margin |
| VXUS | **Moderate** | Diversified across multiple central-bank regimes, but still linked to US rates via global capital flows and dollar strength |
| GEHC | **Lower** (relatively) | Large-cap, lower multiple (WACC 8.0%), more stable cash flows — the single name least exposed to a rate shock |

The team-wide finding from two cycles ago (the whole desk was carrying a stale ~4.87% 10-yr Rf for weeks, corrected to 5.12%) is now adopted everywhere, including MS's NVDA rebuild. A fresh WebSearch this run for a same-day 11/19 Treasury print hit the same chronic dateline wall every desk has flagged all week — no fresher number available than the 5.12%/11-16 read already on file. Flagging it rather than guessing: **the team's rate input is current to the best evidence available, not stale, but nobody should mistake "corrected two weeks ago" for "re-verified today."**

## Recession stress test (estimated drawdown, weighted to pool)

| Holding | % of Pool | Assumed Recession Drawdown* | Weighted Impact |
|---|---|---|---|
| NVDA | 8.20% | -55% | -4.51pp |
| VTI | 27.93% | -35% | -9.78pp |
| VXUS | 25.76% | -35% | -9.02pp |
| OMCL | 7.71% | -45% | -3.47pp |
| XLE | 11.22% | -45% | -5.05pp |
| GEHC | 6.36% | -25% | -1.59pp |
| **Total estimated pool drawdown** | | | **≈ -33.4pp** |

\*Drawdown assumptions anchored to historical sector behavior in 2008/2020/2022 downturns (semis/AI-capex names hit hardest, defensive healthcare equipment hit least).

**In plain terms: a garden-variety recession, on top of where this book already sits (-4.79% since inception), would be expected to take the pool from ~$47.61 down to roughly ~$31.7** — a cumulative loss from the original $50 base of **roughly -37%**. This is not a tail scenario, it's a base-case historical recession pattern applied to the book's actual current weights. No hedge is in place against it, because none is available in this equities-only toolbox beyond holding more cash.

## Liquidity risk rating (per holding)

| Holding | Liquidity Rating | Note |
|---|---|---|
| VTI | **Very High** | Mega-cap ETF, deepest market in the book |
| VXUS | **Very High** | Large international ETF, tight spreads |
| NVDA | **Very High** | Mega-cap, among the most liquid single names in the market |
| XLE | **High** | Large sector ETF, ample liquidity |
| GEHC | **High** | Large-cap, adequate daily volume |
| OMCL | **Medium** | Small/mid-cap (~low-single-digit billions market cap); wider spreads possible in a stress event, the one name in the book where a forced exit would see real slippage |

At this book's trivial dollar size, personal execution liquidity is a non-issue — but the mandate asks for the underlying security's liquidity profile, and OMCL is genuinely the weakest link if this book ever needs to delever in a hurry.

## Single stock risk & position sizing

- **Single-name (non-ETF) exposure: NVDA + OMCL + GEHC = 22.27% of pool.** Each individually is small, but collectively nearly a quarter of the book rides on three single-company outcomes rather than diversified baskets.
- **NVDA is down -21.95% from cost and OMCL is down -26.57% from cost** — both single names are the two worst performers in the book by a wide margin, and both are concentrated, rate-sensitive, single-company bets. GEHC is the one single name actually working (+21.14%), which is itself a sizing lesson: the book's winners and losers are evenly split between "single stock" picks, meaning stock-picking skill, not diversification, is driving results so far — a fragile basis for a book this size.
- **Recommendation:** no new single-name adds (NVDA is already gated by the team's own $180 contingency line; OMCL is already gated by the $40 contingency line and the MS floor breach). If/when GEHC's drift-trim trigger fires (BR's desk has it ~1.1pp away, the closest live mechanical gate on the book), take it — don't let a winner's concentration creep become the next single-stock risk simply because it's green.

## Tail risk scenarios (with rough probability estimates)

| Scenario | Rough 12-mo probability | Impact if it hits |
|---|---|---|
| AI capex pause / NVDA guidance shock, further multiple compression | ~10-15% | NVDA -30-40% in a session; VTI drags lower in sympathy given look-through tech weight |
| OMCL structural thesis break (lost contract, margin deterioration, guidance cut) | ~5-10% | OMCL -20-30%+ on the print; this is the one scenario where the team's own contingency plan says trim/exit |
| Broad recession / hard landing (labor deterioration + policy error) | ~20-25% | See stress test above: ≈-33pp pool-wide |
| Oil/Hormuz geopolitical shock (either direction) | ~15% | XLE ±15%+ in a week; could cut either way (supply disruption = spike, demand destruction fear = crash) |
| Rate shock — 10yr breaks meaningfully above 5.12%, inflation resurgence | ~15-20% | Compresses every DCF on the book further (team's own re-pointed WACC math), disproportionately hits NVDA/OMCL |

These are directional estimates for discussion, not calibrated model outputs — flagging that plainly per house transparency rules.

## Hedging strategies (equities-only toolbox — no options)

Top 3 risks being hedged: (1) NVDA+VTI correlated tech/AI exposure, (2) broad recession beta with no offset, (3) OMCL single-name/liquidity risk.

1. **Cash is the only real hedge available and it is underused.** 12.81% of pool in cash is thin for a book carrying an estimated -33pp recession-stress exposure with no options or shorting. Raising the cash buffer (by not fully deploying into dips, and by taking GEHC's drift-trim proceeds to cash rather than redeploying into more correlated equity) is the single most actionable lever this desk has.
2. **Reduce the NVDA+VTI correlated sleeve rather than treating them as separately-sized risks.** Any future rebalancing should account for VTI's embedded tech weight when sizing total AI/semis exposure, not just NVDA's standalone 8.2%.
3. **Consider a broad-market inverse ETF (e.g., SH) as a partial, equities-only tail hedge** if the book ever grows large enough to justify the transaction cost — at the current ~$47 pool size this is almost certainly impractical (minimum position sizes and costs would swamp the hedge), but it's the one genuine "short" tool available without options and should be revisited if/when the book scales.
4. **For OMCL specifically:** going forward, prefer a sector ETF (e.g., XLV) over single-name healthcare-tech bets to cut the liquidity/idiosyncratic risk flagged above, without abandoning the sector thesis.

## Rebalancing suggestions

| Sleeve | Current (% of pool) | Risk-informed target | Action |
|---|---|---|---|
| NVDA | 8.20% | Hold, no add (contingency line engaged) | No action — already gated |
| VTI + VXUS | 53.69% | Hold | Core sleeve, no change |
| OMCL | 7.71% | Hold, no add (contingency line + MS floor breach engaged) | No action — already gated per team contingency plan; flagged here as oversized for its liquidity tier if it were ever a fresh decision |
| XLE | 11.22% | Hold | Single true diversifier against tech/rate risk; keep |
| GEHC | 6.36% | ~4% (BR's standing target) | **Closest live trigger on the book (~1.1pp away)** — take the trim when it fires rather than letting a winner's concentration ride |
| Cash | 12.81% | 15%+ | Build toward this via GEHC trim proceeds and any future realized gains, specifically as the book's only available recession hedge |

---
*BW Risk Assessment — radical transparency, no softened warnings. This book remains ungraded better than D until the recession-stress exposure (-33pp, no hedge) is actually addressed, not just restated.*
