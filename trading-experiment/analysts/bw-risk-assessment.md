# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-13 (~15:xx ET update — third BW run today's cycle; supersedes the ~10:41 ET report)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, account 424593861) this run.*

---

## Overall Portfolio Risk Grade: **C-**

## Biggest risk right now
**100% of the invested sleeve is a single stock (NVDA) sitting directly inside the one sector complex (AI/semiconductors) currently absorbing a live, worsening geopolitical shock (Iran/Strait of Hormuz) plus an independent, sector-specific selloff (SK Hynix profit-miss fears dragging Micron/Seagate/Sandisk down, Philly Semi -3.6% today).** This is not a new risk — it's the same structural concentration this desk has flagged since 2026-07-10 — but today is the first day the abstract "geopolitical shock hits an unhedged, concentrated book" tail scenario this report has warned about is actually live and actively getting worse, not a hypothetical. The dollar amount at stake is small (~$5 of a $100 account), which is the only reason this isn't graded lower — but the *structure* of the book (zero diversification in the invested sleeve, zero hedge, zero stop-loss) is exactly what a risk desk exists to flag regardless of position size, because the structure is what the trader will scale up as the book grows.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| Single-stock concentration | 🔴 Critical | 100% of invested capital in NVDA; unaddressed for 4+ days despite repeated flags |
| Sector concentration | 🔴 Critical | 100% of invested sleeve = AI-compute/semiconductors, the sector currently under the most acute stress in the market |
| Geopolitical/macro tail risk | 🔴 Critical (newly live) | Iran-Israel-US conflict, Strait of Hormuz partially closed, Brent ~$79-81, first time this year's flagged tail scenario has actually triggered |
| Correlation risk | 🟠 High | Only one holding, so "correlation" is really "the account's fate = one name's fate"; any future satellite adds (OMCL, AVGO, SNX) sit inside overlapping macro exposure (rates, risk sentiment) even where sector-uncorrelated |
| Interest rate sensitivity | 🟠 High | NVDA is a long-duration, high-multiple growth name; 10Y at 4.60% and Fed on hold-to-hike footing is a structural headwind, not a one-day event |
| Recession/drawdown risk | 🟠 High | Est. 35-50% drawdown on the invested sleeve in a hard risk-off scenario (see stress test) |
| Liquidity risk | 🟢 Low | NVDA is one of the most liquid equities on earth; $5 position size has zero market-impact/execution risk |
| Idle cash / opportunity risk | 🟡 Moderate | 90%+ of the trading book sitting in cash for 4+ days is defensible risk-avoidance this week specifically, but is starting to look structural rather than tactical |
| Currency/FX risk | 🟢 Low (direct) / 🟡 Moderate (indirect) | Account and holding are USD-denominated; indirect exposure via NVDA's Taiwan (TSMC) manufacturing dependency and now-zeroed China revenue |
| Position sizing discipline | 🟢 Low | Absolute dollar risk is trivial ($5.07 of $100.07); the risk here is structural, not size-driven |

---

## 1. Ground-truth portfolio snapshot (live, this run)

- **Total account value**: $100.07 (`get_portfolio`: cash $95.00 + NVDA equity $5.0682)
- **Position** (`get_equity_positions`): NVDA, 0.024826 sh, avg cost $201.40, implied price ~$204.16 (consistent with state.md's ~14:36 ET read of $203.955)
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): deployed $5.07 (NVDA), deployable cash ~$44.93, reserve $50.00
- **No trades today** — sixth consecutive no-trade check-in per state.md, all on the same macro-shock deferral rationale (OMCL diversification buy still pending)

## 2. Correlation analysis between holdings
There is exactly **one** holding, so a traditional pairwise correlation matrix is degenerate — the account's return series *is* NVDA's return series, scaled by ~5%. The more useful correlation question is forward-looking: the analyst consensus's own candidate diversifiers (AVGO, SNX, MU, ALAB) are all still semiconductor/AI-compute names — adding any of them would reduce single-name risk but do almost nothing for sector-correlation risk. Only OMCL (healthcare tech, GS/BR's flagged diversifier) and, to a lesser extent, FRPT and ISRG, would meaningfully decorrelate the book from the chip complex. **Correlation risk will not improve until a genuinely non-semiconductor name is actually purchased — not just recommended.**

## 3. Sector concentration risk
- **Invested sleeve**: 100% Technology / Semiconductors (AI-compute) — NVDA
- **As % of total account**: ~5.1% (small in absolute terms, which is the only mitigant)
- **As % of the $50 trading book**: ~10.1% deployed, ~89.9% cash
- This is the third consecutive BW report cycle in which this desk has flagged 100% single-sector concentration in the invested sleeve as unresolved. BR's IPS caps satellite AI-infra exposure at 15% of book and targets 55%/35% core/satellite diversification; the live book has 0% of either core or non-AI satellite exposure.

## 4. Geographic exposure and currency risk
- **Direct FX**: none — account and holding are USD-denominated, no direct currency risk.
- **Indirect / supply-chain geography**: NVDA's fabrication is concentrated at TSMC in Taiwan — a standing tail risk this desk has flagged before (Taiwan Strait scenario) that remains unpriced and unhedged.
- **China revenue**: per MS's 7/13 DCF update, NVDA's China data-center revenue has gone from ~$4.6B/year run-rate to effectively $0 under current export restrictions — the "downside break" this desk implicitly warned about is now partially realized, not hypothetical.
- **New this cycle — Middle East/Gulf exposure**: the active Iran-Strait of Hormuz conflict is a live demonstration of how a regional geopolitical shock 7,000 miles from Santa Clara can move the entire semiconductor complex in a single session (Philly Semi -3.6% today) purely on risk sentiment and oil-driven macro spillover, with zero NVDA-specific news required. The account currently has no exposure that would benefit from (rather than merely avoid) this kind of shock — e.g., no energy or defense names that would offset a Gulf-crisis drawdown in tech.

## 5. Interest rate sensitivity
NVDA is a long-duration growth asset — its DCF-implied value (per MS: ~$150.6 base case vs. ~$204 spot) is highly sensitive to the discount rate. Current environment: 10Y UST at 4.60% (up slightly this week), Fed funds held at 3.50-3.75% with PCE inflation projections raised to 3.6% (per BR's 7/10 IPS) — a hawkish-for-longer backdrop that is a structural headwind for high-multiple names, independent of today's geopolitical noise. A 100bps move in long-term rates would move MS's DCF fair value materially at the margins tested in their sensitivity grid (11%→12% WACC moves fair value from $150.6 to $133.4, a ~11.4% swing) — meaningful leverage for a name already trading ~28-35% above every DCF cell MS has published.

## 6. Recession stress test
Applying BR's IPS-level stress assumption (35-45% peak-to-trough drawdown in a bad year for a tech/AI-tilted book) directly to the invested sleeve:
- **Base recession scenario** (broad multiple compression, AI capex digestion pause — MS's flagged "downside break"): NVDA -35% to -45% from current ~$204 → **$112-133/share**, i.e. the $5.07 NVDA position would fall to roughly **$2.79-3.29**, a **$1.78-2.28 loss** on this position alone.
- **Severe/tail scenario** (recession + a confirmed Taiwan/supply-chain disruption or a Gulf-conflict energy/inflation shock compounding a Fed that can't cut): a 50%+ drawdown is plausible given NVDA's beta and the DCF gap already identified — down to roughly **$100-140/share**.
- **On the total account**: because 94.9% of the account is cash, a full NVDA wipeout to zero would only cost ~5% of total account value. **The account's overall recession resilience today comes entirely from the accident of being mostly in cash, not from any deliberate hedging or diversification decision.** That distinction matters — it will not protect the book once more capital is deployed under the current concentration pattern.

## 7. Liquidity risk rating (per holding)
| Holding | Liquidity rating | Notes |
|---|---|---|
| NVDA | 🟢 Very Low risk | One of the most liquid single-name equities globally; average daily volume in the hundreds of millions of shares; a $5 position has zero market-impact risk and can be exited instantly at any size relevant to this account |
| Cash ($95.00) | 🟢 No risk | Fully liquid |

No liquidity concerns exist at this account size. This will remain true even after a disciplined OMCL-sized diversification buy — flagging only because liquidity risk becomes genuinely relevant if the account ever rotates into thinner names (FRPT's abnormally wide bid/ask spread, flagged by BR/GS on 7/12, is a preview of what illiquidity risk would look like here).

## 8. Single stock risk and position sizing recommendations
- Current NVDA position ($5.07) is **~10.1% of the trading book** — inside BR's 20% soft cap, and inside GS/BR's suggested satellite range. Sizing discipline on the existing position is fine.
- The risk is not sizing — it's **that there is nothing else in the book to size against**. A single 10% satellite position is appropriate *within* a diversified book; it is not appropriate as *the entire invested sleeve*.
- **Recommendation, stated plainly, again**: the next dollar deployed should not go to NVDA, MU, AVGO, SNX, or ALAB — every one of those adds exposure to the same sector-correlation and same macro-shock risk already concentrated in the book. It should go to a genuinely uncorrelated name (OMCL remains the cleanest candidate per GS/BR, clean of earnings risk until 7/30) or, per BR's IPS, a broad-market core ETF (VTI/SCHG/QQQM) to establish an actual diversified base before adding more single-name satellite risk.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on invested sleeve |
|---|---|---|
| Hormuz conflict escalates further (sustained closure, oil >$100, broad equity risk-off) | ~15-20% | -30% to -50% on NVDA via multiple compression; broader account impact limited by cash weighting |
| Hormuz conflict de-escalates within 1-2 weeks (a plausible base case given historical precedent for these flare-ups) | ~50-55% | Modest relief rally in semis; NVDA likely recovers toward pre-shock levels |
| AI-capex digestion / hyperscaler spending pause (MS's flagged "downside break," independent of geopolitics) | ~10-15% over 3-6 months | -30%+ on NVDA, potentially larger and more durable than a geopolitical shock since it would hit the demand thesis directly |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity) | Potentially -50%+ and durable, given NVDA's TSMC fabrication dependency — genuinely uninsurable with the current equities-only toolbox |
| China export policy further tightens (already effectively $0 China DC revenue per MS) | Ongoing/already partially realized | Incremental, not a fresh shock — already in the base case |
| Status quo grind (no clean resolution, no fresh escalation) | ~25-30% | Continued sideways-to-down drift, consistent with the last 6 intraday checks today |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options are available, which meaningfully constrains this section — flagging that constraint honestly rather than pretending equities alone can fully hedge tail risk.

1. **Single-stock concentration** → the only real equities-only hedge is diversification itself: deploy a portion of the $44.93 deployable cash into a genuinely uncorrelated name (OMCL) and/or a broad index ETF (VTI/QQQM per BR's IPS). This is not a perfect hedge (still long-only, still equity-beta), but it is the only lever available and it has been sitting unused for 4+ days.
2. **Sector/geopolitical shock risk** → if inverse or defensive-sector ETFs are tradable in this account (e.g., broad market inverse funds, or long energy/defense names that benefit from the same Gulf-crisis conditions hurting tech), a small tactical allocation would let the book benefit from, rather than merely avoid, a continued Hormuz escalation. Untested this cycle — worth confirming tradability next run rather than assuming it's off the table just because options are.
3. **Rate sensitivity** → equities-only rate hedges are limited, but tilting any new core allocation toward lower-duration, higher-quality-cash-flow names (or simply holding more cash, which the book already does heavily) reduces rate sensitivity by construction. The existing 94.9% cash weighting is, whether intentional or not, already functioning as the account's de facto rate/recession hedge.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's 2026-07-10 IPS target as the correct compass (55% core / 35% satellite / 10% cash on the $50 trading book), with an explicit acknowledgment that **the macro-timing discipline keeping this book 90% cash this week is correct, not a risk failure** — buying into a live, worsening war is not good risk management regardless of how attractive any single name's fundamentals look. But BR's own Trigger 3 (cash >25% of book for 2+ consecutive weekly cycles with no fresh catalyst deployed) is close to firing, and this desk's standing critique stands: **correct deferral, repeated indefinitely with no falsifiable resolution, is functionally the same as no risk discipline.** State.md's 7/13 update already converted the open-ended OMCL wait into three falsifiable triggers (ceasefire holding a full session, Brent back under ~$75, or a hard Friday 7/17 time-box) — that is the right fix, and this desk will hold the trader to that time-box rather than repeating the same concentration warning a fourth time with no mechanism forcing resolution.

**Suggested near-term allocation once any one trigger fires**: deploy $8-10 into OMCL (per GS/BR), leaving ~$35-37 deployable cash — this alone would take the invested sleeve from 100% single-name to a still-concentrated-but-meaningfully-better 2-name book (~50/50 NVDA/OMCL), a first real step toward BR's target structure rather than a full jump to it.

---

## Cross-analyst notes
- **GS (7/13 afternoon)** and this desk are now fully aligned on entry timing — GS explicitly states it is "not calling today the entry day." No disagreement to flag.
- **MS's DCF** materially reinforces this report's rate-sensitivity and valuation-risk sections — NVDA's ~28% DCF overvaluation is a standing, unaddressed risk factor independent of today's macro noise, and MS's MU call (~71% downside) is a useful cautionary data point against ever treating "cheaper than the analyst screener's stale price" as a green light without an independent valuation check.
- **JPM** confirms NVDA carries no near-term binary earnings risk (next print 8/26) — the risk profile here is macro/valuation/concentration-driven, not earnings-event-driven, for now.
- **BR's IPS** remains the most-cited unimplemented recommendation in this book's history — three cycles running now (7/10, 7/12, and this report) have pointed at the same target allocation with zero execution. This desk is not second-guessing the *reason* (a live war is a bad week to force a trade) — it's flagging that the *mechanism* to eventually act needs to actually fire, which is why the 7/17 time-box in state.md is the single most important piece of process discipline in this entire book right now.
