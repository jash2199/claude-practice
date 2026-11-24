# BW Risk Assessment

**Report date: 2026-11-24 (Tuesday), ~13:41 ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session, quote timestamps ~18:41 UTC / 13:41 ET). Persona file re-read fresh this run — unchanged since last cycle. Prior BW read: 2026-11-24 ~09:42 ET (second BW report today, ~4 hours later).

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**Today is a live, real-money demonstration of the exact risk this desk has named for weeks, not a new one: a confirmed, sector-wide AI/semis selloff (AMD, ADI, ALAB, SNDK, MU, MRVL all down double digits today per the team's own internal 11:38 ET extended-search findings — AI-capex-ROI doubts, renewed rate-hike expectations, a US Trade Representative subsidy probe) has hit NVDA and NVDA alone within this book, while OMCL, GEHC and XLE — the three genuinely uncorrelated sleeves — are all green.** NVDA is -6.63% vs. Monday's close as this report is written (partially recovered from an intraday low of -8.58% at 11:38 ET, still within a sector-wide move, not an idiosyncratic one). That is rule 9's diversification thesis working exactly as designed on the names that have it — and exactly the uninsured ~36-39% NVDA+VTI AI/tech-correlated weight that has none of it. **Layered on top, the NVDA governance tail did not close today — it crystallized into a hard calendar date:** per the team's own research this morning, Huang's congressional testimony is no longer a rumor but a scheduled Dec 1 closed-door House appearance (Select Cmte on China, Foreign Affairs, Intelligence), with GC Tim Teter following Dec 2 and a Senate hearing Dec 3 unconfirmed. A closed-door format is lower immediate market-reaction risk than a public hearing, but it is now seven days away and this book still owns the name through it with zero downside protection. **Grade stays D: a sector-wide shock landing exactly where this book's one uninsured correlation lives, plus a real date now on the calendar for the one open governance question, is confirmation of the standing diagnosis, not an improvement or a fresh deterioration.**

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$96.87** = cash $56.10 + equity $40.77. Trading pool (= total − $50 off-limits reserve, per Jash's capital rule) = **$46.87**, a **-$3.13 / -6.26%** accumulated loss against the $50 base — an improvement from this morning's 09:42 ET read (-6.65%) and from the day's deepest drawdown logged mid-morning, as NVDA has partially recovered off its intraday low and OMCL has rallied sharply.

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $154.11 | $3.83 | $5.00 | **-$1.17 / -23.5%** | 9.38% | 8.16% |
| VTI | 0.036690 | $370.40 | $354.06 | $12.99 | $13.59 | -$0.60 / -4.4% | 31.86% | 27.72% |
| VXUS | 0.154525 | $84.13 | $77.95 | $12.04 | $13.00 | -$0.96 / -7.3% | 29.56% | 25.70% |
| OMCL | 0.106405 | $46.99 | $34.42 | $3.66 | $5.00 | **-$1.34 / -26.8%** | 8.98% | 7.81% |
| XLE | 0.086775 | $57.62 | $60.61 | $5.26 | $5.00 | +$0.26 / +5.2% | 12.90% | 11.22% |
| GEHC | 0.036393 | $68.69 | $82.22 | $2.99 | $2.50 | +$0.49 / +19.7% | 7.34% | 6.39% |
| **Total equity** | | | | **$40.77** | $44.09 | -$3.32 | 100% | 86.98% |
| Cash (deployable, in pool) | | | | $6.10 | | | — | 13.02% |

**Intraday moves vs. Monday's official close ($165.05 NVDA / $355.27 VTI / $78.25 VXUS / $32.88 OMCL / $59.87 XLE / $81.31 GEHC):** NVDA -6.63% (recovering off -8.58% at 11:38 ET), VTI -0.34%, VXUS -0.39%, **OMCL +4.67%** (now +4.29% above MS's recalibrated $33.0 bear-case floor, extending its multi-session recovery), XLE +1.24%, GEHC +1.12% (a fresh high for the position, 1.11pp from BR's 7.5% drift-trim trigger — unchanged, still the book's closest live mechanical gate). NVDA also sits **-14.4% below the trader's own $180 contingency-plan-v2 line** (widened vs. this morning's -13.2%, continuation of an already-fired-and-resolved disqualifier, not a fresh trigger) and is now trading fractionally **below** MS's $156.3/sh base-case fair value (-1.4%) rather than exactly on it — the round-trip has tipped marginally undervalued again, informational only, no sizing implication per this desk's own mandate.

## Risk heat map summary

| Risk category | Level | Driver |
|---|---|---|
| AI/mega-cap-tech sentiment & sector correlation (NVDA + VTI tech tilt) | 🔴 High | **Today is a live confirmation, not a model:** a sector-wide AI/semis selloff hit NVDA (-6.63%) and VTI's tech tilt (-0.34%) while OMCL/GEHC/XLE were all green — ~36-39% of equity has zero hedge against exactly this scenario |
| Governance/legal tail risk (NVDA) | 🟠 Elevated → now date-certain | Huang's congressional testimony moved from rumor to a scheduled Dec 1 closed-door House appearance (T-7 days); board's own independent investigation remains unconcluded |
| Single-name concentration (NVDA+OMCL combined, % equity) | 🟡 Moderate | 18.36% of equity vs. the 25% hard trigger — 6.64pp buffer; compresses/expands several points purely on price |
| Sector concentration | 🟡 Moderate | VTI (27.72% pool) carries internal mega-cap/tech weight beyond its own label |
| Geographic/currency | 🟢 Low-Moderate | ~74.3% pool US-domiciled; VXUS is the one unhedged direct FX exposure (25.70% pool) |
| Interest rate sensitivity | 🟠 Elevated | NVDA, OMCL, GEHC all high-duration growth exposure; 10Y yield still stuck at 5.051% (last confirmed print 11/19, five days stale — fresh search this run hit the same dateline wall) |
| Recession/drawdown exposure | 🔴 High | Est. -22% to -32% pool-basis drawdown in a garden-variety recession (see stress test below), far worse than today's actual -6.26% |
| Liquidity | 🟢 Low (normalized) | OMCL spread tightened back to ~0.29% ($34.38/$34.48) from this morning's ~2.17% flag; rest of book very liquid |
| OMCL structural/valuation risk | 🟢 Low | Trading +4.29% above MS's $33.0 bear-case floor, extending its recovery; no structural break found |
| Rebalancing urgency | 🟢 Low | No mechanical trigger fired anywhere this run; GEHC's 7.5% drift-trim trigger is the closest live gate at 1.11pp away, unchanged |

## Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation, demonstrated again today in the sell direction.** A sector-wide AI/semis selloff (AMD, ADI, ALAB, SNDK, MU, MRVL all down double digits per the team's own internal findings this morning) is dragging NVDA -6.63% and bleeding into VTI's cap-weighted tech tilt (-0.34%), at much smaller amplitude but the same direction.
- **NVDA/VTI ↔ VXUS: moderate positive correlation**, smaller than NVDA↔VTI (-0.39% today). VXUS's heavier financials/industrials mix continues to dampen, not eliminate, the shared move.
- **XLE: the book's lone genuinely low/negatively-correlated sleeve, true to form again today (+1.24%)** while NVDA sells off — energy's macro drivers remain largely independent of the AI-sector story.
- **GEHC: low correlation to the AI/tech factor, true to form again today** — a fresh high (+1.12%) on the same session NVDA/VTI are red, the clearest single-day evidence yet in this book that a genuine diversifier works.
- **OMCL ↔ everything else: mostly idiosyncratic, and still de-correlated on the way up** — its +4.67% rally today tracks its own post-earnings recovery story, independent of the AI/semis selloff hitting NVDA.

## Sector concentration risk (% of pool)

| Sector / sleeve | % of Pool | Flag |
|---|---|---|
| US total market (VTI, cap-weighted — includes significant internal mega-cap/tech weight) | 27.72% | Largest single sleeve; internal tech tilt adds to AI-sentiment exposure beyond the headline number |
| International developed + EM (VXUS) | 25.70% | Genuine sector/geography diversifier |
| Semiconductors / AI compute (NVDA, pure-play) | 8.16% | Today's sector-wide selloff landed here directly; zero hedge |
| Energy (XLE) | 11.22% | Single-sector bet, but the book's best diversifier — proved it again today |
| Healthcare — distribution tech (OMCL) | 7.81% | Small-cap, thin-liquidity name; today's +4.67% is its best single-session move logged recently |
| Healthcare — large-cap medtech (GEHC) | 6.39% | Best performer; closest live mechanical gate (7.5% trim trigger, 1.11pp away) |
| Cash (deployable) | 13.02% | Still thin relative to the pool's own 14% cash target (-0.98pp under) |

**Flag, repeated because it remains the single most important sector-level fact in this book: combined NVDA+VTI tech-adjacent exposure is ~36-39% of the pool depending on how much of VTI's cap weight is attributed to mega-cap tech.** Today's selloff confirms this is a real, tradeable risk factor, not a theoretical one — and it remains completely uninsured.

## Geographic exposure and currency risk factors

- **~74.3% of pool is US-domiciled** (VTI, NVDA, OMCL, XLE, GEHC, cash); **~25.70% is VXUS's international developed + EM exposure**, the book's only direct non-USD currency exposure.
- VXUS carries unhedged FX risk — a USD rally (plausible if the Fed holds/hikes rather than cuts, per BR's flagged Kalshi signal) would be a direct drag on VXUS's USD-denominated returns independent of local-currency performance.
- No single-country or single-currency concentration identified beyond VXUS's diversified ex-US basket.
- No direct non-USD cash or debt exposure anywhere else in the book.

## Interest rate sensitivity by position

| Position | Duration/rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Growth-stock valuation is explicitly discount-rate-driven in MS's own DCF (WACC 12.90% base case); every point of yield move re-prices fair value materially |
| OMCL | **High** | Small-cap growth/distribution-tech name, most dependent on a lower future discount rate to re-rate off its current deep discount |
| GEHC | **Moderate-High** | Large-cap but still growth-multiple-dependent; MS's own DCF is rate-sensitive |
| VTI | **Moderate** | Diversified, but cap-weighting skews it toward the same mega-cap growth names sensitive to rates |
| VXUS | **Moderate** | More value/financials-tilted historically, somewhat less rate-sensitive, but not immune |
| XLE | **Low** | Commodity/cash-flow-driven, not multiple-driven; oil price and OPEC+ supply matter far more than the discount rate |

The 10Y Treasury's last confirmed print remains **5.051% (11/19 close, Dow Jones/Morningstar)** — a fresh WebSearch this run reproduced the identical chronic dateline wall every desk has logged for weeks (nothing reliably dated past 11/19 found). That sits ~30bp above BR's 4.75% reopening threshold for rule 6a's rate-shock pause on new core adds — unchanged, not reached.

## Recession stress test — estimated drawdown

**Methodology, unchanged from prior cycles:** per-asset haircut assumptions for a garden-variety recession (demand-driven slowdown, not a credit crisis or external shock), applied to today's pool weights. Cash (13.02% of pool) is assumed to hold its value.

| Position | Pool weight | Assumed recession haircut | Contribution |
|---|---|---|---|
| NVDA | 8.16% | -50% (high-beta, cyclical AI-capex exposure, plus a governance overhang that would likely resurface as a risk-off target) | -4.08pp |
| VTI | 27.72% | -30% (typical broad-market recession drawdown) | -8.32pp |
| VXUS | 25.70% | -28% (similar macro beta, plus currency drag) | -7.20pp |
| OMCL | 7.81% | -40% (small-cap, thin liquidity, already structurally pressured) | -3.12pp |
| XLE | 11.22% | -35% (energy typically underperforms in a *demand-driven* recession, unlike a supply-shock scenario where it would be the hedge) | -3.93pp |
| GEHC | 6.39% | -20% (large-cap healthcare is the book's most defensive sleeve) | -1.28pp |
| Cash | 13.02% | 0% | 0.00pp |
| **Total estimated pool-basis drawdown** | | | **≈ -27.9%** |

**Range: -22% to -32%**, essentially unchanged from prior cycles — roughly **4-5x worse than today's actual -6.26%** pool mark. Model estimate, not a backtest; the book has never been stress-tested by an actual recession.

## Liquidity risk rating by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | 🟢 Low risk | Mega-cap, enormous daily volume, tight spread ($154.12/$154.15, ~0.02%) |
| VTI | 🟢 Low risk | Large, highly liquid ETF, tight spread |
| VXUS | 🟢 Low risk | Large, highly liquid ETF, tight spread |
| XLE | 🟢 Low risk | Large sector ETF, tight spread ($60.61/$60.62, ~0.02%) |
| GEHC | 🟢 Low risk | Large-cap, decent volume, tight spread ($82.18/$82.22, ~0.05%) |
| OMCL | 🟢 Low risk (normalized) | Spread tightened to **~0.29%** ($34.38/$34.48) — back to its usual low-moderate range after this morning's ~2.17% flag; worth re-checking if it widens again on a volatile session |

## Single stock risk and position-sizing recommendations

- **NVDA (8.16% pool / 9.38% equity):** Today's sector-wide selloff hit this position hardest in the book, exactly as this desk's standing correlation flag predicts — and the position still has zero downside protection. BR's 10.5%/12% drift-trim trigger (2.34pp away) is the right mechanism; this desk's recommendation is unchanged — **do not let this position re-approach its pre-crisis ~10-12% pool weight on price alone, and do not treat today's sector-wide, non-NVDA-specific selloff as a reason to add on dip either.** No sizing action recommended today.
- **OMCL (7.81% pool / 8.98% equity):** Today's +4.67% rally is a genuine positive, but sizing discipline doesn't change: **the DCA gate stays closed until the pool itself turns net-positive**, regardless of how attractive OMCL's own price action looks in isolation.
- **GEHC (6.39% pool / 7.34% equity):** Approaching its own 7.5% trim trigger (1.11pp away, the book's closest live mechanical gate, unchanged across multiple runs today). No sizing action needed — the trigger exists precisely so this isn't a discretionary call when it fires.
- **Combined single-name concentration (NVDA+OMCL, 18.36% of equity):** 6.64pp of buffer to the 25% hard trigger — comfortable, but this number has moved several points in a single day purely on price and shouldn't be read as more durable than it is.
- **Standing observation, repeated for the record: at a $46.87 trading pool, every position here is a few dollars.** The percentage-based risk framework is the right discipline to practice and will matter if/when this book scales; today's dollar-figure moves are pedagogically meaningful, not financially threatening.

## Tail risk scenarios with probability estimates

| Scenario | Rough probability (next ~30 days) | Estimated impact |
|---|---|---|
| **Huang's Dec 1 congressional testimony produces a market-moving disclosure** | Appearance itself is now ~95% likely (scheduled, closed-door House, T-7 days); a market-moving disclosure from a closed-door session specifically is lower, ~10-15% (format typically muted unless details leak) | If disclosure leaks or is damaging: -10% to -25% single-session on NVDA; muted (-2% to -5%) if genuinely closed-door with no leak |
| NVDA board investigation produces an adverse/confirmed finding (national-security or trade-secret compromise) | ~5-8% (board's own statements have been reassuring to date, probe formally unresolved) | Severe, single-session: -30% to -50% on NVDA alone, likely dragging VTI's tech tilt down 3-6% same-day |
| Broad AI-capex/semis selloff continues or deepens (today's confirmed sector-wide move is already live, not hypothetical) | ~40-50% it extends into tomorrow given the magnitude of today's sector move (AMD/ADI/ALAB/SNDK/MU all down double digits per internal findings); lower that it fully reverses | Continuation: another -3% to -8% on NVDA, -1% to -3% drag on VTI; this book's three diversifiers (OMCL, GEHC, XLE) have no reason to participate on the downside based on today's pattern |
| OMCL structural break (guidance cut, contract loss, margin deterioration) | ~8-10% (no current evidence, position is now recovering, not deteriorating) | Moderate: -15% to -25% single-name, trivial dollar impact at current size |
| 10Y yield breaks materially higher (above ~5.5%, a "higher for longer" re-acceleration) | ~15-20% (BR's flagged Kalshi hold-to-hike signal, unconfirmed, points this direction) | Moderate across the growth-duration sleeve: -10% to -20% combined on NVDA/OMCL/GEHC |
| Renewed Hormuz/Mideast supply-side oil shock | ~10% (de-escalated since summer, not resolved) | Positive for XLE (+10-20%), a genuine case where this book's one real hedge would work as designed |

## Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options)

1. **AI/mega-cap-tech sentiment & sector correlation (NVDA+VTI, ~36-39% of equity moving on one factor) — today is the clearest live evidence yet that this is a real, not theoretical, risk.** Equity-only mitigants: (a) continue routing the next incremental core dollar to VXUS, not pro-rata, per the standing 10/19 policy; (b) when BR's pre-committed GEHC trim fires (1.11pp away, the closest trigger in the book), route proceeds to a genuinely low-beta/defensive equity sleeve rather than cash or back into AI/tech names — this desk has asked for this sleeve to be named and vetted for four-plus cycles, and it remains unbuilt. Today's sector-wide selloff, landing entirely on the uninsured sleeve while the diversifiers were all green, is the single best argument on file yet for building it.
2. **NVDA governance/legal tail risk, now with a hard date attached.** No options means no direct downside protection is available; the closest equity-only mitigant is strict enforcement of the existing drift-trim trigger and continuing to decline any discretionary add. With Dec 1 now seven days out, this desk recommends the team treat that date as a scheduled risk event on the calendar (like an earnings print) rather than a background item — a final risk check immediately ahead of Dec 1 would be prudent, not alarmist.
3. **Recession/broad-drawdown exposure.** The book's only two true diversifiers (XLE, GEHC) are a combined 17.61% of pool — not nearly enough to offset a -28%-ish modeled recession drawdown concentrated in the other ~82%. The single highest-leverage equity-only hedge available remains building out the still-unbuilt third defensive sleeve (staples, utilities, or a low-beta dividend basket) referenced in item 1 — the same gap GS and BR have both flagged, repeated because today supplied the clearest real-world case yet for funding it.

## Rebalancing suggestions (allocation percentages)

No mechanical trigger fired this run — nothing requires action today. For the record, against BR's own targets:

| Sleeve | BR target (% pool) | Actual (% pool) | Gap | Action |
|---|---|---|---|---|
| VTI | 26% | 27.72% | +1.72pp | In-band, no action |
| VXUS | 27% | 25.70% | -1.30pp | In-band; standing recipient of next core dollar |
| NVDA | 7% (12% ceiling / 10.5% trim trigger) | 8.16% | +1.16pp (2.34pp from trigger) | No action; monitor through Dec 1 testimony date |
| XLE | 12% | 11.22% | -0.78pp | In-band, no action |
| GEHC | 4% (9% ceiling / 7.5% trim trigger) | 6.39% | +2.39pp (**1.11pp from trigger, closest live gate**) | No action yet; watch closely |
| OMCL | 10% | 7.81% | -2.19pp (DCA-gated by design) | No action; DCA gate remains closed (pool net-negative) |
| Cash | 14% | 13.02% | -0.98pp | Slightly short of target; no action required |

---
*Past reports: `git log -p -- trading-experiment/analysts/bw-risk-assessment.md`. Internal sources read fresh this run: trading-experiment/state.md (freshest entries through 2026-11-24 ~12:37 ET), analysts/br-portfolio-builder.md (11/23 ~15:13 ET), analysts/ms-dcf-valuation.md (11/24 ~09:45 ET), analysts/gs-stock-screener.md (11/24 ~11:42 ET), analysts/jpm-earnings-analyzer.md (11/24 ~08:20 ET). External: fresh WebSearches this run for NVDA news, AI/semis selloff, and the 10-year Treasury all hit the team's chronic same-day dateline wall (nothing reliably dated to 11/24 found independently); the confirmed sector-wide AI/semis selloff and the Dec 1 testimony date are sourced from the team's own internal extended-search findings logged in state.md's 11:38 ET and 12:37 ET entries, per house rule 4. Live data: Robinhood `get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861, all pulled this run ~13:41 ET.*
