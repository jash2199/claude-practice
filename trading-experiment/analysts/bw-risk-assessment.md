# BW Risk Assessment

**Report date: 2026-11-23 (Monday), ~09:45 ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session). Persona file re-read fresh this run — unchanged since last cycle. First BW read since Friday 2026-11-20 ~13:48 ET (no BW run over the weekend).

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**NVDA's CEO crisis is over as a headline — but the thing underneath it isn't, and the book still has zero hedge against either.** A dedicated fresh WebSearch this run (going past the dateline wall every desk has hit all week) confirms what state.md and this morning's GS/JPM/MS reads only had half of: **Nvidia's board unanimously voted to reinstate Jensen Huang as CEO, effective 2026-11-22, per the company's own SEC 8-K filed today (2026-11-23)** — not the "contested political story" or GS's "Bessent wants an outsider, not Huang back" framing from this morning, both now superseded by a formal corporate action. That resolves the leadership-vacancy uncertainty and explains today's **+26.2% NVDA pop (Friday's $125.53 close → $158.38 live)**, one of the largest single-session moves this book has ever carried. **But the company's own release states a committee of independent directors is still actively investigating "a foreign intelligence effort that targeted Huang" — that investigation has not concluded, and Treasury Secretary Bessent's separate, still-unanswered question ("did Nvidia know their client?") about whether China sales were properly represented remains open too.** This book just round-tripped +26% on the resolution of one risk (who's CEO) while two adjacent, unresolved risks (a live counterintelligence probe into that same CEO; a live question about revenue integrity) are still sitting there with no mechanism in this portfolio to hedge against either outcome. Layer on top of that the structural gap this desk has flagged for a month and that has not moved one inch regardless of price action: **no hedge against AI/mega-cap-tech sentiment, which drives NVDA directly and a meaningful slice of VTI's cap-weighted tech tilt.** Today's bounce is genuinely good news, but it was priced off the easiest part of the story to resolve. Grade stays D rather than moving to C: the portfolio's structural vulnerability (concentration + zero hedge) is identical to Friday's; only the mark-to-market moved, and it can move just as fast the other way if the investigation or the China-sales question resolves badly instead of quietly.

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$96.74** = cash $56.10 + equity $40.64. Trading pool (= total − $50 off-limits reserve, per Jash's 2026-07-10 capital rule) = **$46.74**, a **-$3.26 / -6.52%** accumulated loss against the $50 base — an improvement from Friday's -8.75% (13:48 ET) / -9.58% (Friday's intraday low), driven almost entirely by NVDA's rally.

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $158.38 | $3.93 | $5.00 | **-$1.07 / -21.4%** | 9.68% | 8.42% |
| VTI | 0.036690 | $370.40 | $351.62 | $12.90 | $13.59 | -$0.69 / -5.1% | 31.75% | 27.61% |
| VXUS | 0.154525 | $84.13 | $78.22 | $12.09 | $13.00 | -$0.91 / -7.0% | 29.74% | 25.86% |
| OMCL | 0.106405 | $46.99 | $32.95 | $3.51 | $5.00 | **-$1.49 / -29.9%** | 8.63% | 7.50% |
| XLE | 0.086775 | $57.62 | $60.68 | $5.27 | $5.00 | +$0.27 / +5.3% | 12.96% | 11.27% |
| GEHC | 0.036393 | $68.69 | $80.87 | $2.94 | $2.50 | +$0.44 / +17.7% | 7.24% | 6.30% |
| **Total equity** | | | | **$40.64** | $44.09 | -$3.45 | 100% | 87.0% |
| Cash (in pool) | | | | $6.10 | | | — | 13.0% |

OMCL remains the book's single worst performer by a wide margin (-29.9% unrealized); NVDA's deep paper loss narrowed sharply today but is still the second-worst. GEHC and XLE are the book's only two winners.

## Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation.** VTI is cap-weighted and carries substantial mega-cap/AI-adjacent tech exposure on its own; NVDA's headline-driven ±8-30% single-day swings this month have moved in the same direction as VTI's tech-heavy days essentially every time. This is the book's core, still-unaddressed correlation risk — two positions that look diversified on paper (one single stock, one "total market" fund) but move together on the same underlying factor (AI/mega-cap tech sentiment).
- **NVDA/VTI ↔ VXUS: moderate positive correlation**, lower than NVDA↔VTI. VXUS is ex-US and carries a different sector mix (more financials/industrials, less mega-cap tech), so it dampens but does not eliminate the correlated hit on global risk-off days — confirmed again this week, when VXUS sold off alongside NVDA/VTI on Friday's broad de-risking before mostly participating in today's broad bounce too.
- **XLE: the book's lone genuinely low/negatively-correlated sleeve.** Energy's macro drivers (oil supply/demand, OPEC+ decisions, geopolitical risk premia) are largely independent of AI-capex sentiment; XLE was the only green name through most of last week's NVDA/OMCL rout and has been the most reliable diversifier in practice, not just in theory.
- **GEHC: low correlation to the AI/tech factor**, moderate correlation to broad-market/recession risk (healthcare equipment demand is more defensive but not acyclical). GEHC's steady outperformance this month is the clearest real-world evidence the book has that a genuine diversifier works.
- **OMCL ↔ everything else: mostly idiosyncratic.** Its slide has tracked its own post-earnings guidance reaction and bear-case-floor re-pricing, not the NVDA/tech story — a useful de-correlation in theory, undermined by the fact that it's currently the book's worst-performing position in its own right.

## Sector concentration risk (% of pool)

| Sector / sleeve | % of Pool | Flag |
|---|---|---|
| US total market (VTI, cap-weighted — includes significant internal mega-cap/tech weight) | 27.6% | Largest single sleeve; internal tech tilt adds to AI-sentiment exposure beyond the headline number |
| International developed + EM (VXUS) | 25.9% | Genuine sector/geography diversifier |
| Semiconductors / AI compute (NVDA, pure-play) | 8.4% | Highest idiosyncratic + governance tail risk in the book |
| Energy (XLE) | 11.3% | Single-sector bet, but the book's best diversifier |
| Healthcare IT (OMCL) | 7.5% | Worst performer; floor under active re-rating |
| Healthcare equipment (GEHC) | 6.3% | Best performer; narrowly below BR's 7.5% drift-trim trigger |
| Cash (pool only, excl. $50 reserve) | 13.0% | Dry powder |

**Estimated combined "AI/mega-cap-tech-sentiment" exposure** (NVDA direct + an estimated tech slice of VTI + a smaller tech slice of VXUS; rough, not a precise look-through): roughly **20-24% of equity / ~18-21% of pool** — this is a judgment-call estimate, not a verified look-through decomposition, but it is consistently larger than the headline 8.4% NVDA number alone, which is the point this desk keeps making.

## Geographic exposure and currency risk

- **~74% of pool is in US-domiciled names/funds** (NVDA, VTI, OMCL, XLE, GEHC) — low direct FX risk, though NVDA and GEHC both derive significant revenue internationally (FX translation risk embedded in fundamentals, not in the ticker's currency).
- **VXUS (25.9% of pool) is the book's one direct, unhedged currency exposure** — standard VXUS is not currency-hedged, so EUR/JPY/GBP/EM-currency moves versus USD pass through to returns independent of local equity performance. A broad USD-strength scenario (plausible if the Fed holds rates higher for longer, or in a risk-off dollar-safe-haven move) would be a second, independent drag on VXUS on top of any local equity weakness.
- No deliberate currency hedge exists anywhere in the book; equities-only toolbox makes this difficult to address directly (no FX forwards/options available), so this is a risk to monitor, not one with a clean mitigant.

## Interest rate sensitivity (qualitative, per position)

| Symbol | Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's own DCF shows the valuation moving meaningfully on single-digit-bp Treasury changes |
| OMCL | **High** | Small-cap growth name; financing-cost-sensitive balance sheet; hospital-customer capex cycles are rate-sensitive |
| VTI | Moderate-High | Cap-weighted index with a heavy growth/tech tilt drags its aggregate duration up vs. a value benchmark |
| VXUS | Moderate | More value/cyclical tilt (banks, industrials) lowers duration vs. VTI; EM slice adds rate-differential/FX-linked sensitivity |
| GEHC | Moderate | Large-cap, steadier cash flows; some hospital-capex rate sensitivity, less acute than OMCL's |
| XLE | **Low** | Cash flows price more to the commodity/oil cycle than to the discount rate; closest thing the book has to a natural rate hedge |

## Recession stress test

Applying standard-ish historical drawdown assumptions per asset type (estimates, not a model output — flagged as judgment calls per this desk's mandate):

| Symbol | Assumed drawdown | $ loss on current MV |
|---|---|---|
| NVDA | -50% | -$1.97 |
| VTI | -35% | -$4.52 |
| VXUS | -38% | -$4.59 |
| OMCL | -40% | -$1.40 |
| XLE | -35% | -$1.84 |
| GEHC | -22% | -$0.65 |
| **Total equity loss** | | **-$14.97** |

Equity value would fall from $40.64 to ~$25.67 (**-36.8%**); with cash unchanged, total account would fall to ~$81.77 and the trading pool to ~$31.77 — a pool-basis loss of **-36.5% from the $50 base**, versus today's actual -6.5%. In other words, a garden-variety recession scenario is roughly **5-6x worse than the book's current worst-ever drawdown**, and the book has no position that would be expected to gain in that scenario (XLE's apparent defensiveness is a diversification benefit, not a recession hedge — energy demand falls in a recession too).

## Liquidity risk rating (per holding, from live bid/ask)

| Symbol | Bid/Ask spread (live) | Rating | Note |
|---|---|---|---|
| NVDA | 0.013% | **Very High liquidity** | Mega-cap, massive ADV |
| VTI | 0.060% | **Very High liquidity** | Massive-AUM ETF |
| VXUS | 0.013% | **Very High liquidity** | Massive-AUM ETF |
| XLE | 0.016% | **Very High liquidity** | Large sector ETF |
| GEHC | 0.21% | **High liquidity** | Large-cap, wider than mega-caps but still deep |
| OMCL | **0.79%** | **Moderate liquidity** | Smallest-cap name in the book; spread ~15-60x wider than the others — consistent with this desk's repeated prior flag that OMCL is the one name where a forced exit would see real slippage |

## Single stock risk and position sizing recommendations

- **OMCL carries the highest single-name risk in the book**, not because of its size (7.5% of pool, below both BR's and this desk's own triggers) but because of the combination of worst unrealized loss (-29.9%), widest spread, and an actively-being-rebuilt bear-case valuation anchor (MS revising the $35.24 floor down after a fourth consecutive sub-floor close). **Recommendation: no new OMCL buys until MS publishes the rebuilt floor** — consistent with the standing DCA gate, not a new restriction.
- **NVDA is appropriately small by weight (8.4% pool, well under the 18-20% single-name trigger)**, but today is exactly the kind of day sizing discipline exists for: a confirmed, favorable resolution (Huang reinstated) just delivered a 26% pop into a position that still carries an open governance investigation and an open revenue-integrity question. **Recommendation: do not add to NVDA on this strength.** If anything, a trader with a wider risk tolerance might trim into today's rally specifically because the two open uncertainties are two-sided, not resolved — this desk flags the option without unilaterally recommending a trim size, consistent with rule 19 (allocation-owner sign-off).
- **GEHC sits ~1.2pp below BR's 7.5% drift-trim trigger (6.3% vs 7.5%)**, narrower than most recent reads would suggest given today's book-wide moves — worth noting this gap closes (and reopens) from *either* direction: GEHC rising, or the rest of the book falling. Today it reopened because NVDA rallied, diluting GEHC's weight — a reminder that this is a mechanical artifact of total-pool moves as much as a GEHC-specific signal.
- **VTI/VXUS are appropriately the largest, most diversified sleeve (53.5% of pool combined)** — no sizing concerns.

## Tail risk scenarios (probability estimates — subjective judgment calls, not statistical outputs)

1. **NVDA governance tail risk reopens** — the independent-directors' investigation into the "foreign intelligence effort" targeting Huang surfaces a new adverse finding. Est. probability over the next 1-3 months: **~15-20%**. Impact: could retrace some or all of today's +26% bounce without the clean "reinstated" story to catch it this time.
2. **China sales/revenue-recognition scrutiny escalates** — Bessent's open "did Nvidia know their client" question turns into a formal regulatory inquiry or a disclosure/restatement issue. Est. probability next two quarters: **~10%**. Impact: would hit NVDA hardest but is correlated, not idiosyncratic — it would also pressure VTI's mega-cap tech tilt and broader AI-capex sentiment simultaneously, which is exactly the unhedged correlation flagged above.
3. **Broad AI-capex sentiment reversal, unrelated to NVDA's own governance story** (e.g., a hyperscaler capex guide-down). Est. probability over 6 months: **~25-30%**, given sector-wide elevated multiples. Impact: hits NVDA and VTI's growth tilt together — the single biggest structural vulnerability this desk has named for weeks.
4. **OMCL's sixth re-read finally finds a real structural break** (vs. five consecutive "no structural break" resolutions on file), coinciding with MS's floor rebuild. Est. probability next quarter: **~10-15%**. Impact: could meaningfully extend the book's already-worst drawdown.
5. **Upside tail — the NVDA story fully and cleanly resolves** (investigation clears Huang/the company, China sales confirmed properly booked). Est. probability: **~20%**. This is a genuine two-sided bet, not a one-way risk — underscoring that hedging it away entirely (vs. simply not adding on strength) would also cap real upside.

## Hedging strategies — equities-only toolbox, top 3 risks

No options available, so every hedge below is a sizing/allocation lever, not a derivatives one.

1. **Unhedged AI/mega-cap-tech-sentiment correlation (NVDA + VTI's tech tilt):** lean further into the book's one proven genuine diversifier — nudge new cash toward XLE (or a similarly low-correlation equity sleeve) rather than toward VTI or NVDA, to dial down net growth-factor beta without touching the NVDA position directly.
2. **NVDA governance/legal tail risk:** the cleanest equities-only hedge is disciplined position-size caps, already in place (18-20% single-name, 25% combined NVDA+OMCL triggers) — the action today is not to add a new hedge but to **not let today's rally become a reason to add to NVDA**, and to keep these triggers mechanical rather than discretionary.
3. **OMCL structural/floor-re-rating + liquidity risk:** direct any fresh capital earmarked for "opportunistic adds" toward GEHC or XLE instead of OMCL until MS's rebuilt floor is published — effectively substituting a cleaner, more liquid, currently-working position for a name whose own valuation anchor the team is mid-rebuild on.

## Rebalancing suggestions (pool-basis allocation %)

No mechanical trigger has fired, so none of this is urgent — directional suggestions only:

| Symbol | Current % of pool | Suggested direction |
|---|---|---|
| NVDA | 8.4% | Hold — do not chase today's rally |
| VTI | 27.6% | Hold |
| VXUS | 25.9% | Hold |
| OMCL | 7.5% | Hold — no new buys pending MS's floor rebuild |
| XLE | 11.3% | **Nudge up ~2-3pp** (to ~13-14%) funded from idle cash — the book's one genuine diversifier, and the cheapest equities-only answer to risk #1 above |
| GEHC | 6.3% | Hold — let BR's own 7.5% drift-trigger govern |
| Cash | 13.0% | Hold as dry powder — multiple open contingency lines (OMCL floor rebuild, GEHC drift trigger) argue for flexibility over forced deployment today |
