# BW Risk Assessment

**Report date: 2026-11-25 (Wednesday), ~09:43 ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session, quote timestamps ~14:40-14:41 UTC / 09:40-09:41 ET). Persona file re-read fresh this run — unchanged since last cycle. Prior BW read: 2026-11-24 ~13:41 ET.

## Overall Portfolio Risk Grade: **D** (held, not upgraded — see note below)

## Single biggest risk right now

**The AI/semis selloff this desk has been flagging for a week just had its sharpest single session yet, and for the first time in weeks it is no longer sparing the "diversifier" sleeves.** Tuesday's close already confirmed a brutal session (Philadelphia Semiconductor Index -7.88%, NVDA -5.86% to $155.38) — this run's live quotes show **NVDA down a further -8.58% intraday to $142.05**, its worst single-session move since the 11/20 all-time-worst close, pushing the buffer to the trader's own $180 contingency-plan-v2 revisit line to **-21.08%**, the deepest reading since Monday's reinstatement rally reversed. Unlike the last several cycles, where OMCL/XLE/GEHC were flat-to-green while only NVDA bled, **every single holding is red today** — VTI -2.80%, VXUS -2.21%, OMCL -1.60%, XLE -0.50%, GEHC -0.59% — a materially broader risk-off tape than the prior "NVDA-only" pattern, even though NVDA's magnitude (-8.58%) still dwarfs the rest by 3-15x. The trading pool has deepened to **-8.28% unrealized against the $50 base**, among the worst readings this book has recorded (prior all-time low: -9.579%, on file from an earlier drawdown), and this desk has no new structural fact to report — this is confirmation and acceleration of an already-logged, already-escalated risk, not a fresh one. **Grade stays D: holding through a continuation of a flagged risk is not the same as the risk being contained, and another session like today without stabilization moves this to F.**

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$95.86** = cash $56.10 + equity $39.76. Trading pool (= total − $50 off-limits reserve, per Jash's capital rule) = **$45.86**, a **-$4.14 / -8.28%** accumulated loss against the $50 base — a sharp deterioration from yesterday's ~13:41 ET read (-6.26%) and from this morning's own earlier-session figures.

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $142.05 | $3.53 | $5.00 | **-$1.47 / -29.5%** | 8.87% | 7.69% |
| VTI | 0.036690 | $370.40 | $343.95 | $12.62 | $13.59 | -$0.97 / -7.1% | 31.74% | 27.52% |
| VXUS | 0.154525 | $84.13 | $76.22 | $11.78 | $13.00 | -$1.22 / -9.4% | 29.63% | 25.69% |
| OMCL | 0.106405 | $46.99 | $34.14 | $3.63 | $5.00 | **-$1.37 / -27.4%** | 9.13% | 7.92% |
| XLE | 0.086775 | $57.62 | $60.15 | $5.22 | $5.00 | +$0.22 / +4.4% | 13.13% | 11.38% |
| GEHC | 0.036393 | $68.69 | $82.03 | $2.99 | $2.50 | +$0.49 / +19.6% | 7.52% | 6.52% |
| **Total equity** | | | | **$39.76** | $44.09 | -$4.33 | 100% | 86.70% |
| Cash (deployable, in pool) | | | | $6.10 | | | — | 13.30% |

**Intraday moves vs. 11/24's official close ($155.38 NVDA / $353.84 VTI / $77.94 VXUS / $34.70 OMCL / $60.45 XLE / $82.52 GEHC):** NVDA **-8.58%** (its sharpest single-session move since the 11/20 all-time-worst close), VTI -2.80%, VXUS -2.21%, OMCL -1.60%, XLE -0.50%, GEHC -0.59%. **Every position is red today** — a broader risk-off session than the prior week's pattern, where the non-NVDA sleeves were reliably flat-to-green against NVDA's weakness. NVDA now sits **-21.08% below** the trader's own $180 contingency-plan-v2 line (widened sharply from yesterday's -8.58%-ish close-based reading), continuation of an already-fired-and-resolved governance disqualifier, not a fresh trigger — but the deepest reading since the reinstatement rally began reversing.

## Risk heat map summary

| Risk category | Level | Driver |
|---|---|---|
| AI/mega-cap-tech sentiment & sector correlation (NVDA + VTI tech tilt) | 🔴 High | Third straight session of AI/semis selloff; today NVDA -8.58% vs. -0.5% to -2.8% for the rest of the book — zero hedge on this factor |
| Broad risk-off spillover (new this run) | 🟠 Elevated | Unlike recent sessions, every holding is red today, not just NVDA — the "diversifiers" are still dramatically outperforming NVDA in relative terms, but the clean divergence pattern has narrowed |
| Governance/legal tail risk (NVDA) | 🟠 Elevated | Board investigation still open; Huang's Dec 1 closed-door House testimony is T-6 days; stock now -21.08% below the plan's own revisit line |
| Single-name concentration (NVDA+OMCL combined, % equity) | 🟡 Moderate | 18.00% of equity vs. the 25% hard trigger — 7.00pp buffer, essentially flat vs. yesterday despite both names falling |
| Mechanical rebalancing drift (GEHC, new flag) | 🟡 Moderate→watch | GEHC's pool weight (6.52%) has drifted to within **0.98pp** of BR's 7.5% trim-trigger — not because GEHC rallied (it's down -0.59% today) but because the pool denominator is shrinking under NVDA's losses. A mechanical trigger fire for the wrong reason is still a trigger fire; don't let the "why" soften the "what" |
| Sector concentration | 🟡 Moderate | VTI (27.52% pool) carries internal mega-cap/tech weight beyond its own label |
| Geographic/currency | 🟢 Low-Moderate | ~74.3% pool US-domiciled; VXUS is the one unhedged direct FX exposure (25.69% pool), also down today on the same risk-off tape |
| Interest rate sensitivity | 🟠 Elevated | NVDA, OMCL, GEHC all high-duration growth exposure; today's October PCE print (released this morning, outcome not yet confirmed by this desk's searches — dateline wall held again) is a live, same-day rate-expectations catalyst |
| Recession/drawdown exposure | 🔴 High | Est. -25% to -35% pool-basis drawdown in a garden-variety recession (see stress test below) — today's actual -8.28% is a fraction of that tail, a reminder of how much room remains |
| Liquidity | 🟡 Moderate (OMCL widened again) | OMCL spread back out to ~1.56% ($34.25/$34.79) from a recently "normalized" ~0.29% — the rest of the book remains tight and liquid |
| Rebalancing urgency | 🟡 Moderate | GEHC's drift-trim trigger is now the closest live mechanical gate at 0.98pp, tighter than yesterday's 1.11pp |

## Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation, still demonstrated in the sell direction but now joined by the rest of the book.** NVDA -8.58% vs. VTI -2.80% today — VTI's cap-weighted tech tilt continues to transmit a fraction of NVDA's moves, same mechanism as every prior cycle, just a larger fraction today.
- **NVDA/VTI ↔ VXUS: moderate positive correlation, also elevated today (-2.21%)** — VXUS is normally the dampener; today it moved more than half of VTI's decline, consistent with a broader global risk-off tape (plausibly tied to today's PCE release) rather than a pure AI/semis-specific shock.
- **XLE: still the book's lowest-correlated sleeve, but not immune today (-0.50%)** — the smallest move in the book outside GEHC, consistent with energy's largely independent macro drivers, but no longer flat/green.
- **GEHC: still the best diversifier by magnitude (-0.59%)** — a genuine four-way divergence from NVDA's -8.58% even on a day everything is red, the clearest ongoing evidence the healthcare sleeve is doing its job.
- **OMCL ↔ everything else: still mostly idiosyncratic** — -1.60% today, giving back a slice of yesterday's +4.67% rally; tracks its own post-earnings recovery arc more than the broad tape, though today it moved with the market rather than against it.
- **Read-through:** today is the first session in a while where the correlation matrix looks less like "NVDA alone vs. everything else" and more like "NVDA severely, everything else mildly" — worth watching whether this is one-day macro noise (PCE-driven) or the start of the diversification thesis compressing. One session is not enough data to change the underlying call, but it is new information this desk hadn't logged before today.

## Sector concentration risk (% of pool)

| Sector / sleeve | % of Pool | Flag |
|---|---|---|
| US total market (VTI, cap-weighted — includes significant internal mega-cap/tech weight) | 27.52% | Largest single sleeve; internal tech tilt adds to AI-sentiment exposure beyond the headline number |
| International developed + EM (VXUS) | 25.69% | Genuine sector/geography diversifier, but moved with the tape today |
| Semiconductors / AI compute (NVDA, pure-play) | 7.69% | Today's selloff landed hardest here by a wide margin; zero hedge |
| Energy (XLE) | 11.38% | Single-sector bet, still the book's best macro diversifier |
| Healthcare — devices/diagnostics (GEHC) | 6.52% | Best-performing diversifier today; mechanically approaching BR's trim trigger regardless |
| Healthcare IT (OMCL) | 7.92% | Idiosyncratic name, spread widened again today |
| Cash (deployable) | 13.30% | Rising only because the equity base is shrinking, not because of any deliberate de-risking move |

**Combined AI/growth-correlated exposure (NVDA pure-play + VTI's internal tech tilt) remains the book's largest uninsured factor bet** — unchanged in kind from every prior cycle, just larger in realized pain today.

## Geographic exposure and currency risk

- **~74.3% of the pool is US-domiciled** (VTI, NVDA, OMCL, XLE, GEHC combined: 27.52+7.69+7.92+11.38+6.52 = 61.03%... plus cash, all USD).
- **VXUS (25.69% of pool) is the sole direct non-US/FX exposure** — a diversified developed+EM basket, unhedged. Today's -2.21% move suggests the risk-off tape had a global, not purely US-AI-sector, component (consistent with a broad PCE/rate-expectations driven session rather than an idiosyncratic Nvidia story alone).
- No currency hedge exists anywhere in the book (equities-only toolbox, no FX instruments available) — this is a standing, unaddressed exposure, not a new one.

## Interest rate sensitivity

| Position | Duration/rate sensitivity | Why |
|---|---|---|
| NVDA | High | Long-duration growth cash flows, most sensitive of the book to real-rate moves; today's -8.58% is consistent with (though not proven to be caused by) a hawkish rate read |
| OMCL | High | Small-cap growth, higher discount-rate sensitivity, thin liquidity amplifies rate-driven moves |
| GEHC | Moderate | Large-cap but still growth-multiple-dependent |
| VTI | Moderate | Broad market, mega-cap/tech tilt adds duration beyond the index label |
| VXUS | Moderate | International developed+EM, generally lower duration than US growth but not immune |
| XLE | Low | Energy cash flows are nearer-term, less rate-duration-sensitive; more exposed to commodity-price and demand factors |

**Today's live catalyst:** the October PCE print was due for release this morning per GS's own prior reporting (expected ~3.8% YoY headline). This desk's searches hit the same chronic dateline wall the team has logged repeatedly — no reliably same-day-dated confirmation of the actual print or market reaction was found this run. The 10Y yield level itself remains unconfirmed fresh (last verified figure, ~5.051%, is now 6 days stale). **Flagging for the next run: if any desk can confirm today's PCE print and yield reaction, that is the single most useful missing data point for explaining today's broad-based (not just NVDA) selloff.**

## Recession stress test — estimated pool-basis drawdown

Applying typical garden-variety-recession equity drawdowns by sleeve to current pool weights:

| Position | % of Pool | Stress drawdown range | Weighted contribution |
|---|---|---|---|
| NVDA | 7.69% | -45% to -55% | -3.46% to -4.23% |
| VTI | 27.52% | -30% to -35% | -8.26% to -9.63% |
| VXUS | 25.69% | -30% to -35% | -7.71% to -8.99% |
| OMCL | 7.92% | -40% to -50% | -3.17% to -3.96% |
| XLE | 11.38% | -30% to -40% | -3.41% to -4.55% |
| GEHC | 6.52% | -20% to -30% | -1.30% to -1.96% |
| Cash | 13.30% | 0% | 0% |
| **Total estimated pool drawdown** | | | **≈ -27% to -33%** |

This range is essentially unchanged from the prior cycle's -22%/-32% estimate, nudged slightly on the current-weighting math — the point stands: **today's actual -8.28% pool loss is roughly a quarter to a third of the full stress-case tail, not the tail itself.** The book has materially more room to fall in a genuine recession than today's pain suggests, which argues against treating today's move as "already priced in" for sizing purposes.

## Liquidity risk by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| VTI | 🟢 Very high | Mega-cap ETF, tightest spread in the book (~0.05%) |
| VXUS | 🟢 Very high | Mega-cap ETF, spread ~0.01% |
| XLE | 🟢 Very high | Large sector ETF, spread ~0.02% |
| NVDA | 🟢 High | Mega-cap single name, spread ~0.02% even amid today's sharp move |
| GEHC | 🟢 High | Large-cap, spread ~0.16% |
| OMCL | 🟡 Moderate (widened again) | Spread back to ~1.56% ($34.25/$34.79) from a recently normalized ~0.29% — small-cap liquidity remains episodic, not structurally improved |

## Single stock risk and position sizing recommendations

- **NVDA is now the single worst-performing position in dollar-P&L-percentage terms (-29.5%)**, edging out OMCL (-27.4%) for the first time. Both are deliberately tiny, half- and quarter-size satellite-style entries ($5.00/$5.00 cost basis) — the sizing discipline that has protected this book from a much larger drawdown is working exactly as designed. **The lesson is not "trim now"** (no structural break has occurred, and rule 6 cross-vetting still requires fresh MS/BW input before any sizing move) — **the lesson is that the original small-size discipline on both of the book's two most volatile names is the only reason an -8.58% single-session move hasn't meaningfully dented the overall book.**
- **Do not add to NVDA "because it's cheap."** Every valuation swing this name has shown in the past month (deep undervalued → fair → overvalued → undervalued again, purely on price) has been a function of volatility, not a new fundamental signal. Sizing decisions require BR's explicit overweight case plus a fresh MS/BW cross-vet, not a lower sticker price.
- **GEHC's drift toward BR's 7.5% trim trigger is mechanical, not a reflection of the position getting riskier** — flagging explicitly so nobody mistakes "the trigger is close" for "GEHC is underperforming." It's the opposite: GEHC is the best performer in the book today, and the trigger is approaching because everything else is shrinking around it.

## Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 30 days) | Potential impact |
|---|---|---|
| Continuation of the broad AI/semis correction (no fresh NVDA-specific shock) | ~40-50% | Pool extends into the -10% to -18% range; consistent with, not beyond, the stress-test band above |
| A fresh NVDA governance shock (board investigation finding, Dec 1 testimony producing a new disqualifying fact) | ~10-15% | Could reopen disqualifier (f); NVDA's small $3.53 position size caps the book-level dollar impact, but would be a second genuine structural event inside three weeks |
| Broad market/rate shock (hawkish PCE/Fed repricing triggering a multi-day equity selloff beyond AI/semis) | ~15-20% | Would hit VTI/VXUS/GEHC/OMCL simultaneously — the scenario today's broad-red session is a small-scale preview of; closer to the -27% to -33% stress-test band if sustained |
| OMCL idiosyncratic liquidity event (wide-spread session coincides with a forced exit) | ~5% | Small position, but the recurring spread-widening pattern means a bad-timing exit could realize a worse price than the quoted last-trade suggests |
| Full reversal/relief rally (PCE comes in soft, AI-capex fears ease) | ~20-25% | Pool could recover several points of today's loss quickly — not a reason to act defensively today, but the balancing scenario against the above |

## Hedging strategies for the top 3 risks (equities-only toolbox — no options available)

1. **AI/semis correlated selloff (NVDA + VTI tech tilt):** The only equities-only lever available is reducing correlated exposure or adding genuinely uncorrelated equity sleeves. XLE and GEHC are already serving this role and did so again today (smallest moves in the book). No action is recommended today absent a structural break, but if this desk's "broadening beyond NVDA alone" observation repeats tomorrow, consider trimming VTI's effective tech beta via a modest rotation toward a lower-tech-weight core fund — not available today, flagging as a forward-looking option for BR to evaluate, not a today recommendation.
2. **NVDA governance tail risk (Dec 1 testimony, T-6 days):** Equities-only hedge = position-size discipline, already in place ($3.53 current value, well below any trigger). The only additional lever is accelerating the existing concentration-trigger review cadence through the Dec 1-3 testimony window rather than waiting for a mechanical breach — recommend every desk explicitly re-check the NVDA+OMCL combined trigger (currently 18.00%, 7.00pp buffer) at the first run after Dec 1, regardless of price action.
3. **Mechanical rebalancing drift (GEHC's trigger approaching for the wrong reason):** The hedge here is procedural, not a position: execute BR's pre-committed GEHC trim promptly and without hesitation if/when the 7.5% line is actually crossed, specifically because today's analysis shows the drift is denominator-driven — delaying action because "GEHC didn't do anything wrong" would defeat the purpose of having a mechanical trigger at all.

## Rebalancing suggestions with allocation percentages

- **No rebalancing is mechanically triggered today.** GEHC (6.52% of pool) remains 0.98pp below BR's 7.5% trim line; NVDA+OMCL combined (18.00% of equity) remains 7.00pp below the 25% concentration trigger.
- **Do not mistake NVDA's price-driven underweight (7.69% of pool, likely below BR's policy target) for a buy signal.** A position falling below its target weight purely because the price fell is not the same as a deliberate underweight the trader chose — any rebalancing back toward target requires BR's explicit sign-off plus fresh MS/BW cross-vetting (rule 6), same bar as any other sizing decision.
- **Recommended watch allocation, if GEHC's trigger fires:** per BR's own standing instruction, a trim back to the 6% band-midpoint, with proceeds split toward a new defensive/diversifying candidate and partial cash buffer rebuild — this desk defers to BR's specific split mechanics and simply flags that the trigger is now the closest live gate in the book.
- **Cash buffer (13.30% of pool) is rising passively, not by design** — a reminder that "more cash" today reflects shrinking equity, not a deliberate de-risking decision. Don't report this as a defensive posture improvement without that caveat.
