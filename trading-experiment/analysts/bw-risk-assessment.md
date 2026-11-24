# BW Risk Assessment

**Report date: 2026-11-24 (Tuesday), ~09:42 ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session, quote timestamps ~09:41 ET). Persona file re-read fresh this run — unchanged since last cycle. Prior BW read: 2026-11-23 ~13:41 ET.

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**The book has now completed a full volatility round-trip on its largest position — crisis (-27% in four sessions) → euphoria (+31% in one session) → partial give-back (-6.1% this morning) — without placing a single trade in either direction, and without a single hedge anywhere in the book to dampen any leg of that ride.** That discipline is correct per the team's own "no same-minute decisions" framework and this desk isn't second-guessing the no-trade outcome. But the underlying vulnerability that made the ride violent in the first place is unchanged: NVDA's board-investigation and China-sales questions are **both still open** (a fresh WebSearch this run for dated 11/24 coverage hit the same chronic dateline wall the whole team has logged for weeks — nothing past 11/9-11/10 confirmed), the position carries zero downside protection, and its weight still moves 8-9% of pool purely on sentiment with no rule forcing a look until a materially higher trigger line. Layered on top: **this is an equities-only, no-stop-loss, $46.68 trading pool with no genuine hedge instrument available** — XLE and GEHC are diversifiers, not hedges, and neither is sized to meaningfully offset a sharp AI-sentiment reversal in NVDA+VTI's combined ~36% tech-correlated equity weight. **Grade stays D:** nothing structural improved or worsened since yesterday — the governance overhang didn't resolve, it just got a calmer mark-to-market for a day.

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$96.68** = cash $56.10 + equity $40.577. Trading pool (= total − $50 off-limits reserve, per Jash's capital rule) = **$46.68**, a **-$3.32 / -6.65%** accumulated loss against the $50 base — a modest deepening from yesterday's ~13:41 ET read (-6.09%) entirely on NVDA's premarket/open give-back (price-only, no fresh position change).

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $155.00 | $3.85 | $5.00 | **-$1.15 / -23.0%** | 9.49% | 8.24% |
| VTI | 0.036690 | $370.40 | $352.34 | $12.93 | $13.59 | -$0.66 / -4.9% | 31.86% | 27.70% |
| VXUS | 0.154525 | $84.13 | $78.08 | $12.07 | $13.00 | -$0.94 / -7.2% | 29.73% | 25.85% |
| OMCL | 0.106405 | $46.99 | $33.21 | $3.53 | $5.00 | **-$1.47 / -29.3%** | 8.71% | 7.57% |
| XLE | 0.086775 | $57.62 | $60.11 | $5.22 | $5.00 | +$0.22 / +4.3% | 12.86% | 11.17% |
| GEHC | 0.036393 | $68.69 | $81.99 | $2.98 | $2.50 | +$0.48 / +19.4% | 7.35% | 6.39% |
| **Total equity** | | | | **$40.58** | $44.09 | -$3.52 | 100% | 86.93% |
| Cash (deployable, in pool) | | | | $6.10 | | | — | 13.07% |

OMCL remains the book's single worst performer by a wide margin (-29.3% unrealized) despite trading back above MS's $33.0 bear-case floor this morning ($33.21, +1.0% vs. yesterday's sub-floor close). NVDA's loss deepened again on today's give-back (-23.0%, from -18.4% yesterday). GEHC and XLE remain the book's only two winners, and the only two sleeves that are not simultaneously down against both their own entry cost and the broad AI/tech factor.

## Risk heat map summary

| Risk category | Level | Driver |
|---|---|---|
| Single-name concentration (NVDA+OMCL combined, % equity) | 🟡 Moderate | 18.20% of equity vs. the 25% hard trigger — 6.80pp buffer, clean but mechanical, not risk-reducing |
| AI/mega-cap-tech sentiment correlation (NVDA + VTI tech tilt) | 🔴 High | ~36-40% of equity moves on one factor; zero hedge in an equities-only book; just demonstrated a +31%/-6% two-session round trip |
| Governance/legal tail risk (NVDA) | 🟠 Elevated | Reinstatement resolved the CEO-vacancy question; independent board investigation and the China-sales/export-testimony question both still unresolved |
| Sector concentration | 🟡 Moderate | VTI (27.70% pool) carries internal mega-cap/tech weight beyond its own label |
| Geographic/currency | 🟢 Low-Moderate | ~74.15% pool US-domiciled; VXUS is the one unhedged direct FX exposure (25.85% pool) |
| Interest rate sensitivity | 🟠 Elevated | NVDA, OMCL, GEHC all high-duration growth exposure; 10Y yield stuck at an elevated 5.051% (last confirmed print 11/19, five days stale) |
| Recession/drawdown exposure | 🔴 High | Est. -22% to -32% pool-basis drawdown in a garden-variety recession (see stress test below), far worse than today's actual -6.65% |
| Liquidity | 🟡 Moderate (OMCL only) | OMCL spread widened to ~2.17% this morning (bid $32.81/ask $33.53) — a notable jump from recent ~0.15-0.5% reads; rest of book very liquid |
| OMCL structural/valuation risk | 🟢 Low (de-escalated) | Trading back above MS's $33.0 bear-case floor for the first time in several sessions; no structural break found |
| Rebalancing urgency | 🟢 Low | No mechanical trigger fired anywhere this run; GEHC's 7.5% drift-trim trigger is the closest live gate at 1.11pp away |

## Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation, now demonstrated twice in one week in both directions.** VTI's cap-weighted mega-cap/AI-adjacent tech exposure tracked NVDA's Monday pop and is tracking today's give-back in the same direction, just with smaller amplitude.
- **NVDA/VTI ↔ VXUS: moderate positive correlation**, lower than NVDA↔VTI. VXUS's heavier financials/industrials mix and lighter mega-cap-tech weight continues to dampen, not eliminate, the shared move.
- **XLE: the book's lone genuinely low/negatively-correlated sleeve.** XLE is +0.4% today while NVDA gives back 6.1% — energy's macro drivers (oil supply/demand, OPEC+, geopolitical risk premia) remain largely independent of the AI-governance story, exactly the diversification case for holding it.
- **GEHC: low correlation to the AI/tech factor**, moderate correlation to broad-market/recession risk. Up again today (+0.84%) while the AI-sentiment-driven names give back — continues to be the clearest evidence in the book that a genuine diversifier works.
- **OMCL ↔ everything else: mostly idiosyncratic.** Its bounce back above the bear-case floor tracks its own post-earnings/valuation story, not the NVDA/tech narrative — the de-correlation is real, it's just been de-correlated on the way down as often as on the way up.

## Sector concentration risk (% of pool)

| Sector / sleeve | % of Pool | Flag |
|---|---|---|
| US total market (VTI, cap-weighted — includes significant internal mega-cap/tech weight) | 27.70% | Largest single sleeve; internal tech tilt adds to AI-sentiment exposure beyond the headline number |
| International developed + EM (VXUS) | 25.85% | Genuine sector/geography diversifier |
| Semiconductors / AI compute (NVDA, pure-play) | 8.24% | Highest idiosyncratic + governance tail risk in the book; weight now whipsawing on price alone, not drifting one direction |
| Energy (XLE) | 11.17% | Single-sector bet, but the book's best diversifier |
| Healthcare — distribution tech (OMCL) | 7.57% | Small-cap, thin-liquidity, deepest paper loss in the book |
| Healthcare — large-cap medtech (GEHC) | 6.39% | Best performer; closest live mechanical gate (7.5% trim trigger, 1.11pp away) |
| Cash (deployable) | 13.07% | Dry powder is thin relative to the pool's own stated 14% cash target (-0.93pp under) |

**Flag: combined NVDA+VTI tech-adjacent exposure is ~36-39% of the pool depending on how much of VTI's cap weight is attributed to mega-cap tech** — materially larger than any single line item in the table above suggests, and the real number this book should be tracking if it wants an honest sector-concentration read rather than a ticker-level one.

## Geographic exposure and currency risk factors

- **~74.15% of pool is US-domiciled** (VTI, NVDA, OMCL, XLE, GEHC, cash); **~25.85% is VXUS's international developed + EM exposure**, the book's only direct non-USD currency exposure.
- VXUS carries unhedged FX risk — a USD rally (plausible if the Fed holds/hikes rather than cuts, per BR's flagged Kalshi signal) would be a direct drag on VXUS's USD-denominated returns independent of the underlying foreign equities' local-currency performance.
- No emerging-market-specific single-country concentration identified; VXUS is a diversified ex-US basket, not a single-country bet.
- No direct non-USD cash or debt exposure anywhere else in the book.

## Interest rate sensitivity by position

| Position | Duration/rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Growth-stock valuation is explicitly discount-rate-driven in MS's own DCF (WACC 12.90% base case); every point of yield move re-prices fair value materially |
| OMCL | **High** | Small-cap growth/distribution-tech name, thin margins today, most dependent on a lower future discount rate to re-rate off its current deep discount |
| GEHC | **Moderate-High** | Large-cap but still growth-multiple-dependent (medtech trades at a premium to broad healthcare); MS's own DCF is rate-sensitive |
| VTI | **Moderate** | Diversified, but cap-weighting skews it toward the same mega-cap growth names sensitive to rates |
| VXUS | **Moderate** | More value/financials-tilted than VTI historically, somewhat less rate-sensitive, but not immune |
| XLE | **Low** | Commodity/cash-flow-driven, not multiple-driven; oil price and OPEC+ supply matter far more than the discount rate |

The 10Y Treasury's last confirmed print remains **5.051% (11/19 close, Dow Jones/Morningstar)** — a fresh WebSearch this run for anything dated past that hit the same chronic dateline wall every desk has logged for weeks. That yield sits well above the 4.75% level BR has flagged as the threshold for reopening rule 6a's rate-shock pause on new core adds — still not reached, ≈30bp gap, unchanged.

## Recession stress test — estimated drawdown

**Methodology, stated plainly for audit:** per-asset haircut assumptions for a garden-variety recession (demand-driven slowdown, not a 2008-style credit crisis or a 2020-style external shock), applied to today's pool weights. Cash (13.07% of pool) is assumed to hold its value, which caps the blended number below any single position's own haircut.

| Position | Pool weight | Assumed recession haircut | Contribution |
|---|---|---|---|
| NVDA | 8.24% | -50% (high-beta, cyclical AI-capex exposure, plus governance overhang that would likely resurface as a risk-off target) | -4.12pp |
| VTI | 27.70% | -30% (typical broad-market recession drawdown) | -8.31pp |
| VXUS | 25.85% | -28% (similar macro beta, plus currency drag) | -7.24pp |
| OMCL | 7.57% | -40% (small-cap, thin liquidity, already structurally pressured) | -3.03pp |
| XLE | 11.17% | -35% (energy typically underperforms in a *demand-driven* recession, unlike a supply-shock scenario where it would be the hedge) | -3.91pp |
| GEHC | 6.39% | -20% (large-cap healthcare is the book's most defensive sleeve) | -1.28pp |
| Cash | 13.07% | 0% | 0.00pp |
| **Total estimated pool-basis drawdown** | | | **≈ -27.9%** |

**Range: -22% to -32%** depending on how severe the recession is and whether XLE behaves as a hedge (supply-shock-driven, better outcome) or a casualty (demand-driven, worse outcome, the base case used above) — roughly **4-5x worse than today's actual -6.65%** pool mark. The book has never been stress-tested by an actual recession; this is a model estimate, not a backtest.

## Liquidity risk rating by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | 🟢 Low risk | Mega-cap, enormous daily volume, tight spread ($154.99/$155.03, ~0.03%) |
| VTI | 🟢 Low risk | Large, highly liquid ETF, tight spread |
| VXUS | 🟢 Low risk | Large, highly liquid ETF, tight spread |
| XLE | 🟢 Low risk | Large sector ETF, tight spread ($60.10/$60.11, ~0.02%) |
| GEHC | 🟢 Low risk | Large-cap, decent volume, reasonable spread ($81.84/$82.04, ~0.24%) |
| OMCL | 🟡 Moderate risk | Small-cap, spread widened to **~2.17%** this morning ($32.81/$33.53) — a notable jump from the ~0.15-0.5% reads logged on prior runs; at this position's tiny size ($3.53) the dollar impact is trivial, but it's worth naming since a wider spread this persistent would matter a great deal more if this position were ever meaningfully upsized |

## Single stock risk and position-sizing recommendations

- **NVDA (8.24% pool / 9.49% equity):** The single largest idiosyncratic-risk line in the book — governance overhang still open, highest-beta name, and now a demonstrated two-sided whipsaw risk. BR's 10.5%/12% drift-trim trigger (2.26pp away) is the right mechanism; this desk's recommendation is unchanged from every prior cycle — **do not let this position re-approach its pre-crisis ~10-12% pool weight on price alone without the governance questions actually resolving.** No new trim recommended today; the existing trigger is adequate and already tighter than this desk's own prior single-name ask.
- **OMCL (7.57% pool / 8.71% equity):** Smallest-liquidity, worst-performing position. Sizing itself is not the problem — it's already the DCA-gated minimum per rule 18 — but this desk reiterates: **do not add to this position until the accumulated-profit DCA gate genuinely clears (it remains deeply net-negative today), regardless of how attractive the recovered price action looks.**
- **GEHC (6.39% pool / 7.35% equity):** Approaching its own 7.5% trim trigger (1.11pp away, the book's closest live mechanical gate). No sizing action needed today — the trigger exists precisely so this isn't a discretionary call when it fires.
- **Combined single-name concentration (NVDA+OMCL, 18.20% of equity):** 6.80pp of buffer to the 25% hard trigger. Buffer is comfortable in absolute terms but has compressed and expanded by several points in a matter of days purely on NVDA's price action — a reminder that this buffer is not a stable number and shouldn't be read as more durable than it is.
- **General sizing observation this desk has not made as plainly before: at a $46.68 trading pool, every position here is a few dollars. The percentage-based risk framework is the right discipline to practice and will matter if/when this book scales, but nobody should mistake today's dollar-figure drawdowns for materially threatening the account.** Radical transparency cuts both ways — the risk framework is sound, but its stakes today are pedagogical, not financial.

## Tail risk scenarios with probability estimates

| Scenario | Rough probability (next ~30 days) | Estimated impact |
|---|---|---|
| NVDA board investigation produces an adverse/confirmed finding (national-security or trade-secret compromise) | ~5-8% (board's own statements have been reassuring to date, but the probe is formally unresolved) | Severe, single-session: -30% to -50% on NVDA alone, likely dragging VTI's tech tilt down 3-6% same-day |
| Credible confirmation of the unverified Dec 1-3 congressional testimony report (China export dispute) | ~15-20% that some hearing happens in that window; lower (~5-10%) that it produces a market-moving disclosure | Moderate: -5% to -15% on NVDA if testimony surfaces new negative detail; muted if procedural only |
| OMCL structural break (guidance cut, contract loss, margin deterioration) | ~10% (no current evidence, but the position has round-tripped the bear-case floor repeatedly without resolution) | Moderate: -15% to -25% single-name, trivial dollar impact at current size |
| Broad AI-capex sentiment reversal (hyperscaler capex pullback narrative takes hold) | ~15% (tape currently behaves the opposite way per GS's CoreWeave/Dell/SMCI read, but this is a standing macro risk) | Severe for the correlated sleeve: -25% to -40% on NVDA, -10% to -15% drag on VTI |
| 10Y yield breaks materially higher (above ~5.5%, a "higher for longer" re-acceleration) | ~15-20% (BR's flagged Kalshi hold-to-hike signal, unconfirmed, points this direction) | Moderate across the growth-duration sleeve: -10% to -20% combined on NVDA/OMCL/GEHC |
| Renewed Hormuz/Mideast supply-side oil shock | ~10% (de-escalated since summer, not resolved) | Positive for XLE (+10-20%), a genuine case where this book's one real hedge would work as designed |

## Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options)

1. **AI/mega-cap-tech sentiment correlation (NVDA+VTI, ~36-39% of equity moving on one factor).** Equity-only mitigants: (a) continue routing the next incremental core dollar to VXUS, not pro-rata, per the standing 10/19 policy — this is the one lever actively shrinking this correlation over time; (b) when BR's pre-committed GEHC trim fires, route a genuine share of proceeds to a new, explicitly low-beta/defensive equity sleeve (BR's own stated intent) rather than letting it default into cash or back into the AI/tech names; this desk has asked for this sleeve to be named and vetted for three-plus cycles — it remains unbuilt.
2. **NVDA governance/legal tail risk.** No options means no direct downside protection is available; the closest equity-only mitigant is strict enforcement of the existing drift-trim trigger (so a melt-up doesn't let concentration silently re-build) and continuing to decline any discretionary add until both the board probe and the China-sales question actually close — not partially, not on sentiment. This is already the team's policy; this desk's only addition is to flag that "the CEO came back" measurably increases pressure to treat the story as resolved when, by the plan's own written terms, it is not.
3. **Recession/broad-drawdown exposure.** The book's only two true diversifiers (XLE, GEHC) are a combined 17.56% of pool — not nearly enough to offset a -28%-ish modeled recession drawdown concentrated in the other ~73%. The single highest-leverage equity-only hedge available is building out that still-unbuilt third defensive sleeve (staples, utilities, or a low-beta dividend basket) referenced in item 1 — this desk is naming the same gap GS and BR have both flagged, not a new one, but repeating it because it remains the most actionable unaddressed risk-reduction opportunity in the book.

## Rebalancing suggestions (allocation percentages)

No mechanical trigger fired this run — nothing requires action today. For the record, against BR's own targets:

| Sleeve | BR target (% pool) | Actual (% pool) | Gap | Action |
|---|---|---|---|---|
| VTI | 26% | 27.70% | +1.70pp | In-band, no action |
| VXUS | 27% | 25.85% | -1.15pp | In-band; standing recipient of next core dollar |
| NVDA | 7% (12% ceiling / 10.5% trim trigger) | 8.24% | +1.24pp (2.26pp from trigger) | No action; monitor |
| XLE | 12% | 11.17% | -0.83pp | In-band, no action |
| GEHC | 4% (9% ceiling / 7.5% trim trigger) | 6.39% | +2.39pp (**1.11pp from trigger, closest live gate**) | No action yet; watch closely next 1-2 sessions |
| OMCL | 10% | 7.57% | -2.43pp (DCA-gated by design) | No action; DCA gate remains closed (pool net-negative) |
| Cash | 14% | 13.07% | -0.93pp | Slightly short of target; no action required, just noting the buffer is thinner than its own stated goal |

---
*Past reports: `git log -p -- trading-experiment/analysts/bw-risk-assessment.md`. Internal sources read fresh this run: trading-experiment/state.md (freshest entry 2026-11-24 ~09:38 ET), analysts/br-portfolio-builder.md (11/23 ~15:13 ET), analysts/ms-dcf-valuation.md (11/24 ~09:45 ET), analysts/gs-stock-screener.md (11/24 ~08:45 ET), analysts/jpm-earnings-analyzer.md (11/24 ~08:20 ET). External: Morningstar/Dow Jones (10-Year Treasury Yield Falls to 5.051%, dated 11/19, no fresher print located this run), a dedicated NVDA/Huang WebSearch (hit the same chronic dateline wall, nothing past 11/9-11/10 confirmed), a dedicated OMCL WebSearch (nothing dated past early November confirmed). Live data: Robinhood `get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861, all pulled this run ~09:41-09:42 ET.*
