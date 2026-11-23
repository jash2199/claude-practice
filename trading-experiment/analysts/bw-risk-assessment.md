# BW Risk Assessment

**Report date: 2026-11-23 (Monday), ~13:41 ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session). Persona file re-read fresh this run — unchanged since last cycle. Prior BW read: today ~09:45 ET.

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**NVDA has now extended its post-reinstatement rally to +30.9% vs. Friday's close ($125.53 → $164.33), and the book still has not traded a single share against either open uncertainty underneath that move.** Jensen Huang's reinstatement as CEO is a confirmed corporate action (per teammates' primary-source SEC 8-K/press-release reverification this morning), and it genuinely resolves the "who's running the company" question. But the two adjacent risks this desk flagged at 09:45 ET are still exactly where they were: **the board's independent-directors committee is still actively investigating the foreign-intelligence-targeting matter (no findings released, no date set for a further update), and Bessent's "did Nvidia know their client" China-sales question remains unanswered.** A fresh WebSearch this run for the Huang/board story hit the same chronic dateline wall every desk has logged all month — it surfaced only pre-resignation coverage from Nov 8-9 (the original investigation announcement), nothing dated past that — which is a tooling gap, not new information, and does not reopen or resolve either open item. The position has now round-tripped from "crisis" to "+31% euphoria" in under two weeks without the underlying governance and revenue-integrity questions moving at all, and NVDA's pool weight has crept up to 8.69% (from 8.4% this morning, 8.4% Friday) purely on price appreciation — a mechanical drift that will keep happening every time this stock gaps up, with no rule currently forcing a look at it until a much higher trigger line. **Grade stays D:** the structural vulnerability (concentrated, single-direction bet on AI/mega-cap-tech sentiment, zero hedge, two live unresolved tail risks) is unchanged; only the mark-to-market moved, and marks move both ways.

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$96.954** = cash $56.10 + equity $40.854. Trading pool (= total − $50 off-limits reserve, per Jash's capital rule) = **$46.954**, a **-$3.046 / -6.09%** accumulated loss against the $50 base — a slight deepening from the last logged pool read (-5.94% at 13:37 ET per state.md) on a few minutes of sideways intraday chop, not a new development.

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $164.33 | $4.08 | $5.00 | **-$0.92 / -18.4%** | 9.98% | 8.69% |
| VTI | 0.036690 | $370.40 | $355.08 | $13.03 | $13.59 | -$0.56 / -4.1% | 31.90% | 27.76% |
| VXUS | 0.154525 | $84.13 | $78.30 | $12.10 | $13.00 | -$0.90 / -6.9% | 29.62% | 25.77% |
| OMCL | 0.106405 | $46.99 | $32.68 | $3.48 | $5.00 | **-$1.52 / -30.4%** | 8.51% | 7.41% |
| XLE | 0.086775 | $57.62 | $60.25 | $5.23 | $5.00 | +$0.23 / +4.6% | 12.80% | 11.14% |
| GEHC | 0.036393 | $68.69 | $80.81 | $2.94 | $2.50 | +$0.44 / +17.6% | 7.20% | 6.26% |
| **Total equity** | | | | **$40.85** | $44.09 | -$3.24 | 100% | 87.01% |
| Cash (deployable, in pool) | | | | $6.10 | | | — | 12.99% |

OMCL remains the book's single worst performer by a wide margin (-30.4% unrealized, now its deepest paper loss on record); NVDA's loss narrowed further on the rally but is still the second-worst. GEHC and XLE remain the book's only two winners.

## Risk heat map summary

| Risk category | Level | Driver |
|---|---|---|
| Single-name concentration (NVDA+OMCL combined, % equity) | 🟡 Moderate | 18.49% of equity vs. the 25% hard trigger — clean, but NVDA's slice is rising on price alone |
| AI/mega-cap-tech sentiment correlation (NVDA + VTI tech tilt) | 🔴 High | ~20-24% of equity moves on one factor; zero hedge in an equities-only book |
| Governance/legal tail risk (NVDA) | 🟠 Elevated | Reinstatement resolved CEO question; independent investigation + China-sales question both still open |
| Sector concentration | 🟡 Moderate | VTI (27.8% pool) carries internal tech weight beyond its own label |
| Geographic/currency | 🟢 Low-Moderate | ~74% pool US-domiciled; VXUS is the one unhedged direct FX exposure (25.8% pool) |
| Interest rate sensitivity | 🟠 Elevated | NVDA + OMCL both high-duration; ~10Y yield context elevated (last confirmed print 5.05% on 11/19, fourth straight daily rise) |
| Recession/drawdown exposure | 🔴 High | Est. -36% pool-basis drawdown in a garden-variety recession, ~6x worse than today's actual -6.1% |
| Liquidity | 🟡 Moderate (OMCL only) | OMCL spread ~0.15%, 10-25x wider than every other holding; rest of book very liquid |
| OMCL structural/valuation risk | 🟠 Elevated | Trading ~0.97% below MS's rebuilt $33.0 bear-case floor; sub-floor streak continues |
| Rebalancing urgency | 🟢 Low | No mechanical trigger fired anywhere this run |

## Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation.** VTI is cap-weighted and carries substantial mega-cap/AI-adjacent tech exposure on its own; NVDA's headline-driven double-digit single-day swings have moved in the same direction as VTI's tech-heavy days essentially every time this month, including today's shared bounce.
- **NVDA/VTI ↔ VXUS: moderate positive correlation**, lower than NVDA↔VTI. VXUS's different sector mix (more financials/industrials, less mega-cap tech) dampens but does not eliminate the correlated move on both risk-off and risk-on days.
- **XLE: the book's lone genuinely low/negatively-correlated sleeve.** Energy's macro drivers (oil supply/demand, OPEC+, geopolitical risk premia) remain largely independent of AI-capex sentiment — XLE did not participate meaningfully in today's NVDA-driven pop, which is exactly the point of holding it.
- **GEHC: low correlation to the AI/tech factor**, moderate correlation to broad-market/recession risk. Its steady, independent outperformance continues to be the clearest real-world evidence the book has that a genuine diversifier works.
- **OMCL ↔ everything else: mostly idiosyncratic.** Its slide tracks its own post-earnings guidance reaction and bear-case-floor re-pricing, not the NVDA/tech story — useful de-correlation in theory, undermined by the fact it's the book's worst-performing position in its own right.

## Sector concentration risk (% of pool)

| Sector / sleeve | % of Pool | Flag |
|---|---|---|
| US total market (VTI, cap-weighted — includes significant internal mega-cap/tech weight) | 27.76% | Largest single sleeve; internal tech tilt adds to AI-sentiment exposure beyond the headline number |
| International developed + EM (VXUS) | 25.77% | Genuine sector/geography diversifier |
| Semiconductors / AI compute (NVDA, pure-play) | 8.69% | Highest idiosyncratic + governance tail risk in the book; weight rising on price alone |
| Energy (XLE) | 11.14% | Single-sector bet, but the book's best diversifier |
| Healthcare IT (OMCL) | 7.41% | Worst performer; trading below MS's rebuilt bear-case floor |
| Healthcare equipment (GEHC) | 6.26% | Best performer; ~1.24pp below BR's 7.5% drift-trim trigger |
| Cash (pool only, excl. $50 reserve) | 12.99% | Dry powder |

**Estimated combined "AI/mega-cap-tech-sentiment" exposure** (NVDA direct + an estimated tech slice of VTI + a smaller tech slice of VXUS; rough, not a precise look-through): roughly **20-24% of equity / ~18-21% of pool** — a judgment-call estimate, consistently larger than the headline 8.69% NVDA number alone.

## Geographic exposure and currency risk

- **~74% of pool is in US-domiciled names/funds** (NVDA, VTI, OMCL, XLE, GEHC) — low direct FX risk, though NVDA and GEHC both derive significant revenue internationally (FX translation risk embedded in fundamentals, not in the ticker's currency).
- **VXUS (25.77% of pool) is the book's one direct, unhedged currency exposure.** EUR/JPY/GBP/EM-currency moves versus USD pass through to returns independent of local equity performance. A broad USD-strength scenario (plausible on a higher-for-longer Fed path, or a risk-off dollar-safe-haven move) would be a second, independent drag on VXUS on top of any local equity weakness.
- No deliberate currency hedge exists anywhere in the book; the equities-only toolbox makes this hard to address directly, so this remains a risk to monitor, not one with a clean mitigant.

## Interest rate sensitivity (qualitative, per position)

| Symbol | Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's own DCF moves meaningfully on single-digit-bp Treasury changes |
| OMCL | **High** | Small-cap growth name; financing-cost-sensitive balance sheet; hospital-customer capex cycles are rate-sensitive |
| VTI | Moderate-High | Cap-weighted index with a heavy growth/tech tilt drags its aggregate duration up vs. a value benchmark |
| VXUS | Moderate | More value/cyclical tilt (banks, industrials) lowers duration vs. VTI; EM slice adds rate-differential/FX-linked sensitivity |
| GEHC | Moderate | Large-cap, steadier cash flows; some hospital-capex rate sensitivity, less acute than OMCL's |
| XLE | **Low** | Cash flows price more to the commodity/oil cycle than to the discount rate; closest thing the book has to a natural rate hedge |

A fresh WebSearch this run for the 10Y Treasury could not independently confirm today's live print (conflicting dated sources, most recent reliable print 5.05% on 11/19 per MS's own report) — rates context remains elevated, consistent with the "High" ratings above; this is a sourcing gap, not a change in stance.

## Recession stress test

Applying standard-ish historical drawdown assumptions per asset type (estimates, not a model output — flagged as judgment calls per this desk's mandate):

| Symbol | Assumed drawdown | $ loss on current MV |
|---|---|---|
| NVDA | -50% | -$2.04 |
| VTI | -35% | -$4.56 |
| VXUS | -38% | -$4.60 |
| OMCL | -40% | -$1.39 |
| XLE | -35% | -$1.83 |
| GEHC | -22% | -$0.65 |
| **Total equity loss** | | **-$15.07** |

Equity value would fall from $40.85 to ~$25.78 (**-36.9%**); with cash unchanged, total account would fall to ~$81.88 and the trading pool to ~$31.88 — a pool-basis loss of **-36.2% from the $50 base**, versus today's actual -6.1%. A garden-variety recession scenario remains roughly **6x worse than the book's current worst-ever drawdown**, and the book has no position expected to gain in that scenario — XLE's diversification benefit is not a recession hedge, since energy demand falls in a recession too.

## Liquidity risk rating (per holding, from live bid/ask)

| Symbol | Bid/Ask spread (live) | Rating | Note |
|---|---|---|---|
| NVDA | 0.006% | **Very High liquidity** | Mega-cap, massive ADV |
| VXUS | 0.013% | **Very High liquidity** | Massive-AUM ETF |
| XLE | 0.017% | **Very High liquidity** | Large sector ETF |
| VTI | 0.017% | **Very High liquidity** | Massive-AUM ETF |
| GEHC | 0.025% | **High liquidity** | Large-cap, wider than mega-caps but still deep |
| OMCL | **0.15%** | **Moderate liquidity** | Smallest-cap name in the book; spread ~6-25x wider than the others — tighter than this morning's 0.21% but still the one name where a forced exit would see real slippage |

## Single stock risk and position sizing recommendations

- **OMCL carries the highest single-name risk in the book**, not because of its size (7.41% of pool, below both BR's and this desk's own triggers) but because of the combination of worst unrealized loss (-30.4%, a new deepest-ever mark), widest spread, and a bear-case valuation anchor that's trading *below its own just-rebuilt floor* ($32.68 vs. MS's $33.0). **Recommendation unchanged: no new OMCL buys** — the standing DCA gate already enforces this.
- **NVDA is still appropriately small by weight (8.69% pool, well under the single-name trigger range)**, but its weight has now risen on price alone three cycles running (8.4% Friday → 8.4% this morning → 8.69% now) while two governance/revenue-integrity questions remain open. **Recommendation: do not add to NVDA on this strength — and if this drift continues unchecked, the next cycle should explicitly ask BR whether a discretionary trim belongs on the table, not just "hold."** This desk flags the option without unilaterally recommending a trim size, consistent with rule 19 (allocation-owner sign-off) — but flags it more pointedly this run given the weight has now moved three consecutive reads in the same direction.
- **GEHC sits ~1.24pp below BR's 7.5% drift-trim trigger (6.26% vs 7.5%)** — essentially unchanged from the last several reads. This gap narrows and widens mechanically with every book-wide price move, not just GEHC's own; it is the single closest live trigger in the book and worth a standing watch, not a new call to action.
- **VTI/VXUS remain the largest, most diversified sleeve (53.53% of pool combined)** — no sizing concerns.

## Tail risk scenarios (probability estimates — subjective judgment calls, not statistical outputs)

1. **NVDA governance tail risk reopens** — the independent-directors' investigation surfaces a new adverse finding. Est. probability over the next 1-3 months: **~15-20%** (unchanged). Impact: could retrace some or all of the +31% bounce without the clean "reinstated" story to catch it a second time.
2. **China sales/revenue-recognition scrutiny escalates** — Bessent's open question turns into a formal inquiry or disclosure issue. Est. probability next two quarters: **~10%** (unchanged). Impact: hits NVDA hardest but is correlated, not idiosyncratic — pressures VTI's mega-cap tech tilt simultaneously.
3. **Broad AI-capex sentiment reversal, unrelated to NVDA's own governance story.** Est. probability over 6 months: **~25-30%** (unchanged), given sector-wide elevated multiples. Impact: hits NVDA and VTI's growth tilt together — the single biggest structural vulnerability this desk has named for weeks.
4. **OMCL's valuation re-read finally confirms a real structural break**, coinciding with MS's floor rebuild and the current sub-floor print. Est. probability next quarter: **~10-15%** (unchanged). Impact: could meaningfully extend the book's already-worst drawdown.
5. **Upside tail — the NVDA story fully and cleanly resolves** (investigation clears Huang/the company, China sales confirmed properly booked). Est. probability: **~20%** (unchanged). A genuine two-sided bet, not a one-way risk — underscoring that hedging it away entirely (vs. simply not adding on strength) would also cap real upside.

## Hedging strategies — equities-only toolbox, top 3 risks

No options available, so every hedge below is a sizing/allocation lever, not a derivatives one.

1. **Unhedged AI/mega-cap-tech-sentiment correlation (NVDA + VTI's tech tilt):** lean further into the book's one proven genuine diversifier — nudge new cash toward XLE rather than toward VTI or NVDA, to dial down net growth-factor beta without touching the NVDA position directly. This desk's prior nudge-XLE-up suggestion has not yet been acted on.
2. **NVDA governance/legal tail risk:** the cleanest equities-only hedge remains disciplined position-size caps — the action today is still **not to add to NVDA on this rally**, and to keep the triggers mechanical rather than discretionary even as the weight drifts up on price.
3. **OMCL structural/floor-re-rating + liquidity risk:** direct any fresh capital earmarked for "opportunistic adds" toward GEHC or XLE instead of OMCL until the name trades back above MS's rebuilt floor — substituting a cleaner, more liquid, currently-working position for one whose own valuation anchor it is currently trading under.

## Rebalancing suggestions (pool-basis allocation %)

No mechanical trigger has fired, so none of this is urgent — directional suggestions only:

| Symbol | Current % of pool | Suggested direction |
|---|---|---|
| NVDA | 8.69% | Hold — do not chase the rally; watch the drift |
| VTI | 27.76% | Hold |
| VXUS | 25.77% | Hold |
| OMCL | 7.41% | Hold — no new buys, trading below MS's rebuilt floor |
| XLE | 11.14% | **Nudge up ~2-3pp** (to ~13-14%) funded from idle cash — unchanged recommendation, not yet acted on |
| GEHC | 6.26% | Hold — let BR's own 7.5% drift-trigger govern |
| Cash | 12.99% | Hold as dry powder — multiple open contingency lines argue for flexibility over forced deployment today |

---

*Past reports: `git log -p -- trading-experiment/analysts/bw-risk-assessment.md`. Sources this run: live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` (account 424593861, this run). WebSearch (standard mode): Nvidia/Huang board-investigation query returned only pre-resignation coverage dated 11/8-9 (keengamer.com, letsdatascience.com, cryptobriefing.com, fourweekmba.com, tech-insider.org, insiderfinance.io, magica.com, ibtimes.com.au, siliconreport.com, aichatdaily.com) — the same chronic dateline wall logged by every desk this month, not a new finding, and does not contradict teammates' already-corroborated primary-source reinstatement; 10-Year Treasury yield query returned conflicting dated figures (morningstar.com 4.982%/11/10, tradingeconomics.com readings from October ranging ~5.26%, nerdwallet.com undated) and could not independently confirm today's live print; Omnicell query (benzinga.com, morningstar.com/business-wire, quiverquant.com, panabee.com, stockstory.org, simplywall.st, weissratings.com, trefis.com, finviz.com) surfaced nothing dated past the already-known Q3 2026 results (10/29) and 10-Q filing (11/4), consistent with the chronic coverage gap already on file. Internal: trading-experiment/state.md (positions/balance history, freshest 13:37 ET entry), analysts/br-portfolio-builder.md (11/20, ~47h stale), analysts/gs-stock-screener.md (11/23 ~11:45 ET), analysts/ms-dcf-valuation.md (11/23 ~09:13 ET), analysts/jpm-earnings-analyzer.md (11/23 ~08:13 ET) — all read fresh this run for teammate context.*
