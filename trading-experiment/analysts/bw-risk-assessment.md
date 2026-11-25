# BW Risk Assessment

**Report date: 2026-11-25 (Wednesday), ~13:41 ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session, quote timestamps ~18:40-18:41 UTC / 13:40-13:41 ET). Persona file re-read fresh this run — unchanged since last cycle. Prior BW read: 2026-11-25 ~09:43 ET (~4h stale). This is a price-action update, not a structural rebuild — no new fundamental fact found anywhere this run.

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**The book just demonstrated, in a single session, exactly how violent its one uninsured factor bet can be — and today's partial recovery does not change that fact, it proves it.** NVDA swung from this morning's -8.58% open-read to an intraday trough near -8.73% (per the trader's own 11:38 ET log) and has since clawed back to **-5.15%** as of this run's live quote ($147.38 vs. yesterday's $155.38 close) — a ~3.6 percentage-point intraday range on a single name that still sits at 7.81% of pool. Every other holding has now flipped from this morning's broad-red tape to green (VTI -0.35%, VXUS -0.19%, OMCL +2.13%, XLE +1.22%, GEHC +1.18%), confirming the morning's "broad risk-off" read was largely NVDA/AI-semis-transmission noise, not a genuine diversification breakdown — but that doesn't reduce the core problem: **this book still owns zero hedge against NVDA/AI-semis volatility, and today proved that volatility can still move ~9 points intraday with no new fundamental catalyst found by any desk.** Separately, GEHC's mechanical drift-trim trigger (BR's 7.5%-of-pool line) is now **~1.01pp away**, essentially unchanged from this morning despite GEHC being one of today's best performers — a reminder the trigger is denominator-driven, not performance-driven, and will fire for the "wrong" reason if it fires at all. **Grade held at D: a one-day partial bounce off a trough is not stabilization, it's volatility — the structural concentration and correlation risk this desk has flagged all week is fully intact.**

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$96.83** = cash $56.10 + equity $40.73. Trading pool (= total − $50 off-limits reserve) = **$46.83**, a **-$3.17 / -6.34%** accumulated loss against the $50 base — a meaningful improvement from this morning's ~09:43 ET read (-8.28%) and from the session trough (~-8.22% at 11:38 ET), though still a loss.

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $147.38 | $3.66 | $5.00 | **-$1.34 / -26.8%** | 8.99% | 7.81% |
| VTI | 0.036690 | $370.40 | $352.59 | $12.94 | $13.59 | -$0.66 / -4.8% | 31.77% | 27.63% |
| VXUS | 0.154525 | $84.13 | $77.79 | $12.02 | $13.00 | -$0.98 / -7.5% | 29.52% | 25.67% |
| OMCL | 0.106405 | $46.99 | $35.44 | $3.77 | $5.00 | **-$1.23 / -24.6%** | 9.26% | 8.05% |
| XLE | 0.086775 | $57.62 | $61.185 | $5.31 | $5.00 | +$0.31 / +6.2% | 13.04% | 11.34% |
| GEHC | 0.036393 | $68.69 | $83.49 | $3.04 | $2.50 | +$0.54 / +21.6% | 7.46% | 6.49% |
| **Total equity** | | | | **$40.73** | $44.09 | -$3.36 | 100% | 86.97% |
| Cash (deployable, in pool) | | | | $6.10 | | | — | 13.03% |

**Intraday moves vs. 11/24's official close ($155.38 NVDA / $353.84 VTI / $77.94 VXUS / $34.70 OMCL / $60.45 XLE / $82.52 GEHC):** NVDA -5.15% (recovering from an intraday trough near -8.7-8.9%, per the trader's own 09:38/11:38 ET logs, but still the day's worst mover by 2-25x), VTI -0.35%, VXUS -0.19%, **OMCL +2.13%, XLE +1.22%, GEHC +1.18% — a clean reversal from this morning's broad-red tape to a broad-green one**, with NVDA now the lone laggard again. NVDA sits **-18.12% below** the trader's own $180 contingency-plan-v2 revisit line — an improvement from this morning's -21.08%, but still a wide gap; this remains continuation of an already-fired-and-resolved governance disqualifier, not a fresh trigger.

## Risk heat map summary

| Risk category | Level | Driver |
|---|---|---|
| AI/mega-cap-tech sentiment & sector correlation (NVDA + VTI tech tilt) | 🔴 High | NVDA alone has ranged ~9pp intraday today with zero fresh fundamental catalyst found by any desk — the book's single largest uninsured factor exposure, no change in kind from every prior cycle |
| Broad risk-off spillover (resolving) | 🟢 Improved from this morning | This morning's "everything red" pattern has fully reversed — VTI/VXUS/OMCL/XLE/GEHC are all green now, confirming it was largely NVDA-transmission noise rather than a genuine correlation breakdown, though VTI/VXUS still moved negative before recovering |
| Governance/legal tail risk (NVDA) | 🟠 Elevated | Board investigation still open; Huang's Dec 1 closed-door House testimony is now **T-6 days**; stock -18.12% below the plan's own revisit line |
| Single-name concentration (NVDA+OMCL combined, % equity) | 🟡 Moderate | 18.25% of equity vs. the 25% hard trigger (6.75pp buffer) and BR's 20% soft line (1.75pp buffer) — essentially flat vs. this morning |
| Mechanical rebalancing drift (GEHC) | 🟡 Moderate→watch | GEHC's pool weight (6.49%) is **~1.01pp** from BR's 7.5% trim-trigger — virtually unchanged from this morning's 0.98pp despite GEHC being one of today's best performers, because the pool denominator moved with it |
| Sector concentration | 🟡 Moderate | VTI (27.63% of pool) carries internal mega-cap/tech weight beyond its own label |
| Geographic/currency | 🟢 Low-Moderate | ~74.3% pool US-domiciled; VXUS is the one unhedged direct FX exposure (25.67% pool) |
| Interest rate sensitivity | 🟠 Elevated | NVDA, OMCL, GEHC all high-duration growth exposure; this desk's search for today's PCE print again hit the chronic dateline wall — still unconfirmed by live search |
| Recession/drawdown exposure | 🔴 High | Est. -27% to -33% pool-basis drawdown in a garden-variety recession (see stress test below) — today's actual -6.34% is roughly a fifth to a quarter of that tail |
| Liquidity | 🟢 Normalized | OMCL spread back to a tight ~0.31% ($35.43/$35.54), down from this morning's widened ~1.56% — the rest of the book remains tight and liquid throughout |
| Rebalancing urgency | 🟡 Moderate | GEHC's drift-trim trigger remains the closest live mechanical gate at ~1.01pp |

## Correlation analysis between holdings

- **NVDA ↔ VTI: the dominant correlation this book carries, and today's chart shows it in both directions.** NVDA's trough-to-now recovery (-8.7% → -5.15%) tracked a milder version of the same arc in VTI (which went from negative to -0.35%, essentially flat). The magnitude gap (NVDA moving ~5-9x VTI's range) is unchanged.
- **NVDA/VTI ↔ VXUS: moderate positive correlation, same story — VXUS followed VTI's arc from red to -0.19%, consistent with a broad risk-sentiment read rather than a US-only or AI-only shock.**
- **XLE and GEHC: the book's two genuine diversifiers, and they proved it again today** — both are now among the day's best performers (+1.22% and +1.18% respectively) while NVDA remains the lone red name. This is the clearest evidence in the book that the "diversifier" sleeves are structurally doing their job, not just riding a lucky stretch.
- **OMCL: still mostly idiosyncratic** — +2.13% today, recovering more than its post-earnings-recovery arc alone would suggest; tracks its own story more than the broad tape.
- **Read-through: this morning's "everything is red" observation has already proven to be a one-session, tape-wide (likely rate/PCE-driven) event rather than a durable widening of the correlation matrix.** The underlying structure — NVDA the outlier risk, XLE/GEHC the genuine diversifiers, VTI/VXUS the transmission mechanism — reasserted itself by midday. One day of "broad red" was noise; the standing correlation read is confirmed, not revised.

## Sector concentration risk (% of pool)

| Sector / sleeve | % of Pool | Flag |
|---|---|---|
| US total market (VTI, cap-weighted — includes significant internal mega-cap/tech weight) | 27.63% | Largest single sleeve; internal tech tilt adds to AI-sentiment exposure beyond the headline number |
| International developed + EM (VXUS) | 25.67% | Genuine sector/geography diversifier; recovered with the broader tape today |
| Semiconductors / AI compute (NVDA, pure-play) | 7.81% | Still today's worst performer by a wide margin even after recovering; zero hedge |
| Energy (XLE) | 11.34% | Single-sector bet; today's best macro diversifier alongside GEHC |
| Healthcare — devices/diagnostics (GEHC) | 6.49% | Today's other top performer; mechanically approaching BR's trim trigger regardless of its own strength |
| Healthcare IT (OMCL) | 8.05% | Idiosyncratic name, liquidity normalized today |
| Cash (deployable) | 13.03% | Essentially unchanged; not a deliberate de-risking move |

**Combined AI/growth-correlated exposure (NVDA pure-play + VTI's internal tech tilt) remains the book's largest uninsured factor bet** — unchanged in kind, modestly improved in realized pain today vs. this morning.

## Geographic exposure and currency risk

- **~74.3% of the pool is US-domiciled** (VTI, NVDA, OMCL, XLE, GEHC combined ≈ 61.0%, plus cash, all USD).
- **VXUS (25.67% of pool) is the sole direct non-US/FX exposure** — unhedged. It moved negative with the morning's broad tape and has since recovered alongside it, consistent with a global rather than purely-US-AI-sector driver.
- No currency hedge exists anywhere in the book (equities-only toolbox, no FX instruments available) — standing, unaddressed exposure.

## Interest rate sensitivity

| Position | Duration/rate sensitivity | Why |
|---|---|---|
| NVDA | High | Long-duration growth cash flows, most sensitive of the book to real-rate moves; today's wide intraday range is consistent with a rate-expectations-driven session |
| OMCL | High | Small-cap growth, higher discount-rate sensitivity; liquidity normalized today but can re-widen on a rate shock |
| GEHC | Moderate | Large-cap but still growth-multiple-dependent |
| VTI | Moderate | Broad market, mega-cap/tech tilt adds duration beyond the index label |
| VXUS | Moderate | International developed+EM, generally lower duration than US growth but not immune |
| XLE | Low | Energy cash flows are nearer-term, less rate-duration-sensitive; more exposed to commodity-price and demand factors |

**This desk's dedicated search for today's October PCE print again hit the chronic dateline wall** — no reliably same-day-dated confirmation of the print or market reaction was found this run (search results returned prior-year PCE coverage only). This remains the single most useful missing data point for explaining both this morning's broad selloff and today's partial recovery; flagging again for the next run/desk that can confirm it.

## Recession stress test — estimated pool-basis drawdown

Applying typical garden-variety-recession equity drawdowns by sleeve to current pool weights:

| Position | % of Pool | Stress drawdown range | Weighted contribution |
|---|---|---|---|
| NVDA | 7.81% | -45% to -55% | -3.52% to -4.30% |
| VTI | 27.63% | -30% to -35% | -8.29% to -9.67% |
| VXUS | 25.67% | -30% to -35% | -7.70% to -8.98% |
| OMCL | 8.05% | -40% to -50% | -3.22% to -4.03% |
| XLE | 11.34% | -30% to -40% | -3.40% to -4.54% |
| GEHC | 6.49% | -20% to -30% | -1.30% to -1.95% |
| Cash | 13.03% | 0% | 0% |
| **Total estimated pool drawdown** | | | **≈ -27% to -33%** |

Essentially unchanged from the prior cycle. **Today's actual -6.34% pool loss (improved from this morning's -8.28%) is still only a fifth to a quarter of the full stress-case tail** — the book has materially more room to fall in a genuine recession than today's swing suggests.

## Liquidity risk by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| VTI | 🟢 Very high | Spread ~0.03% |
| VXUS | 🟢 Very high | Spread ~0.01% |
| XLE | 🟢 Very high | Spread ~0.02% |
| NVDA | 🟢 Very high | Spread ~0.01%, tight even through today's wide range |
| GEHC | 🟢 High | Spread ~0.11% |
| OMCL | 🟢 Normalized | Spread back to ~0.31% ($35.43/$35.54), down sharply from this morning's widened ~1.56% — confirms the earlier widening was episodic, not structural |

## Single stock risk and position sizing recommendations

- **NVDA (-26.8%) and OMCL (-24.6%) remain the two worst-performing positions in percentage-P&L terms**, both deliberately tiny half-/quarter-size satellite entries ($5.00/$5.00 cost basis). The sizing discipline is still the single biggest reason today's ~9-point NVDA swing hasn't meaningfully dented the overall book — reiterate, don't relax it.
- **Do not add to NVDA "because it's cheap" or "because it bounced.**" A recovery from -8.7% to -5.1% intraday is volatility resolving, not a new fundamental signal. Any sizing decision still requires BR's explicit overweight case plus a fresh MS/BW cross-vet (rule 6), not a price move in either direction.
- **GEHC's drift toward BR's 7.5% trim trigger is still mechanical, not a reflection of risk** — it is today's second-best performer and the trigger is approaching anyway because of relative pool-weight math. Execute the pre-committed trim promptly if/when it actually fires; don't let "GEHC didn't do anything wrong" become a reason to delay.

## Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 30 days) | Potential impact |
|---|---|---|
| AI/semis volatility continues (more intraday whipsaws, no net trend) | ~35-45% | Pool chops in a -4% to -12% band around today's levels; today's own session is a live example |
| A fresh NVDA governance shock (board investigation finding, Dec 1 testimony producing a new disqualifying fact) | ~10-15% | Could reopen disqualifier (f); NVDA's small $3.66 position size caps the book-level dollar impact, but would be a second genuine structural event inside three weeks |
| Broad market/rate shock (hawkish PCE/Fed repricing triggering a multi-day equity selloff beyond AI/semis) | ~15-20% | Would hit VTI/VXUS/GEHC/OMCL simultaneously — closer to the -27% to -33% stress-test band if sustained |
| OMCL idiosyncratic liquidity event (a bad-timing exit catching a wide-spread session) | ~5% | Small position; today's spread normalized, but the pattern has recurred before |
| Durable relief rally (today's bounce extends, AI-capex fears ease further) | ~20-30% | Pool could recover toward break-even on the trading base within days — the balancing scenario against the chop/shock cases above |

## Hedging strategies for the top 3 risks (equities-only toolbox — no options available)

1. **AI/semis correlated volatility (NVDA + VTI tech tilt):** Today reconfirmed that XLE and GEHC are the book's only working hedge against this factor — both were the day's top performers while NVDA swung wide. No new action recommended absent a structural break; if the team wants to actively reduce this exposure rather than just dampen it, the only equities-only lever is trimming NVDA/VTI's correlated weight directly, which requires BR sign-off.
2. **NVDA governance tail risk (Dec 1 testimony, T-6 days):** Equities-only hedge = position-size discipline, already in place and proven again today. Recommend every desk explicitly re-check the NVDA+OMCL combined trigger (currently 18.25%, 6.75pp buffer) at the first run after Dec 1, regardless of price action between now and then.
3. **Mechanical rebalancing drift (GEHC's trigger approaching for denominator reasons):** The hedge is procedural: execute BR's pre-committed GEHC trim promptly and without hesitation if/when the 7.5% line is actually crossed. Today's data reinforces the prior read — the drift is weight-math-driven, not a GEHC performance problem, and delaying action on that basis would defeat the point of a mechanical trigger.

## Rebalancing suggestions with allocation percentages

- **No rebalancing is mechanically triggered today.** GEHC (6.49% of pool) remains ~1.01pp below BR's 7.5% trim line; NVDA+OMCL combined (18.25% of equity) remains 6.75pp below the 25% concentration trigger and 1.75pp below BR's 20% soft line.
- **Do not mistake NVDA's recovery for a signal either way.** A position moving from deeply underweight-by-price back toward (but still below) its target weight is price noise, not a deliberate rebalancing decision — any action still requires BR's sign-off plus fresh MS/BW cross-vetting per rule 6.
- **Recommended watch allocation, if GEHC's trigger fires:** per BR's own standing instruction, a trim back to the 6% band-midpoint, with proceeds split toward a new defensive/diversifying candidate and partial cash buffer rebuild.
- **Cash buffer (13.03% of pool) is essentially flat today** — a modest improvement from this morning's 13.30% purely because equity value recovered, not because of any deliberate deployment or de-risking decision.
