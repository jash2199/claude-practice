# BW Risk Assessment — Risk Management Report
**Date: 2026-09-24 (Thursday), ~10:41 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report today; prior report 2026-09-23 ~14:41 ET.

---

## Overall Portfolio Risk Grade: **D-** (held flat vs. 9/23 ~14:41 ET)

## Single biggest risk right now
**The rate shock is no longer a one-day anomaly — this is Day 2 of a confirmed close above 5%, the most sustained reading yet — and it has arrived at the exact moment the book's profit cushion has round-tripped to near-zero.** The 10-year Treasury settled at ~5.11-5.13% on 9/23 (highest since July 2007) and is trading ~5.12-5.14% again this morning per fresh WebSearch (TradingEconomics, Vantage Markets, Yahoo Finance) — the first time this cycle a >5% reading has survived into a second confirmed day (the two prior attempts, 9/15-17 and briefly mid-month, both broke down inside 48 hours). MS's WACC-rebuild clock (a full week held above 5% forces a coordinated rebuild of every rate-sensitive model on the book — NVDA, OMCL, XLE, GEHC — mechanically lowering every one of those fair values regardless of current under/overvaluation direction) is now on Day 2, its furthest point of progress all quarter. Simultaneously, this book's accumulated profit has fallen from 9/22's high of +1.19% to +0.08% today (essentially breakeven) as a second consecutive broad-tape red session (S&P -0.51%, Dow -0.32%, Nasdaq -0.78% per TheStreet/Yahoo) erodes gains — the cash/profit cushion that would fund any defensive move is thinner than it has been all week even as the rate threat that most needs one gets closer to firing. Nothing has fired mechanically. But radical transparency demands naming this plainly: the book is being tested by the single risk this desk has flagged longest (rate/duration exposure across NVDA/VTI/OMCL) at the same time its buffer is thinnest — that convergence, not either fact alone, is what earns today's top billing.

---

## Portfolio snapshot (live, 2026-09-24 ~10:41 ET)

`get_portfolio`: total_value **$100.0418** (cash $56.06 + equity $43.9818). Pool ≈ **$50.0418, a +$0.0418 (+0.08%) accumulated profit** — down sharply from 9/22's +1.19% high and from yesterday afternoon's +0.24%, essentially round-tripped to breakeven over two sessions. Deployable cash $6.06 (~12.11% of pool), ~1.11pp above BR's 11% reserve floor — wider only because the equity sleeve shrank, not fresh dry powder.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/23 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $222.46 | $5.523 | 12.56% | 11.04% | +10.46% | **-1.35%** |
| VTI | 0.036690 | $377.29 | $13.844 | 31.48% | 27.66% | +1.86% | -0.25% |
| VXUS | 0.154525 | $85.52 | $13.215 | 30.05% | 26.41% | +1.65% | -0.47% |
| OMCL | 0.106405 | $33.11 | $3.523 | 8.01% | 7.04% | **-29.54%** | +0.36% |
| XLE | 0.086775 | $63.225 | $5.485 | 12.47% | 10.96% | +9.73% | **+1.37%** |
| GEHC | 0.036393 | $65.64 | $2.389 | 5.43% | 4.77% | -4.44% | -0.68% |
| Cash (deployable) | — | — | $6.06 | — | 12.11% | — | — |

NVDA+OMCL combined **~20.57% of equity** — 25% concentration trigger clean, ~4.43pp buffer, marginally wider than yesterday's ~4.35pp as NVDA pulled back. NVDA alone **~12.56% equity / 11.04% pool** (18-20% trigger clean, ~1.04pp over BR's 10% pool target — narrow, essentially unchanged). **OMCL DCA gate (rule 18): pool needs ~$2.46 more accumulated profit to fire** — narrower than this morning's ~$2.52 (MS, 09:37 ET, when the pool briefly ticked negative) but still wider than yesterday afternoon's ~$2.38, tracking the same round-trip described above.

---

## Correlation analysis between holdings

Structurally unchanged, but today is a live illustration of the pattern, not just a repeated warning:
- **NVDA + VTI + VXUS + GEHC remain one correlated risk-on bloc** (~79.52% of equity). All four red again today (NVDA -1.35%, VXUS -0.47%, VTI -0.25%, GEHC -0.68%) on the same rate-shock/inflation-fear driver that hit the tape yesterday — a second straight session of the bloc moving together on a single macro factor, exactly the concentration this metric exists to catch. GEHC is now the bloc's second-worst mover after NVDA (-0.68%), a change from its recent pattern of relative outperformance.
- **XLE is again the lone green holding** (+1.37%, today's best performer) as Brent extended its climb to ~$103-105/bbl (Fortune, TradingEconomics) on continued Hormuz uncertainty — the hedge property working exactly as designed on a red-tape day. But see the Interest rate sensitivity section below: this same oil rally is what MS expects to flip XLE's DCF gap from fair-value into overvalued, meaning the hedge's price behavior and its valuation cheapness are now diverging, not moving together.
- **OMCL remains the one true idiosyncratic outlier** (-29.54% unrealized), green today (+0.36%) against the broad bloc's red — genuine idiosyncratic behavior, not correlated with anything else on the book, consistent with its 7/30 guide-down thesis being a name-specific story.
- **Xi Jinping landed in the US today** (Yahoo Finance) ahead of the reported Trump-Xi meeting — a dated, real catalyst for VXUS's correlation profile specifically; a constructive outcome could decouple VXUS from the broad rate-driven selloff currently correlating it with the rest of the bloc.

## Sector concentration risk

| Sector/factor (look-through) | Approx. weight (% of equity) | Note |
|---|---|---|
| Tech / AI / semis (NVDA direct + est. tech slice of VTI/VXUS) | **~27.9% of equity** | Flagged for a 12th consecutive report; essentially unchanged, marginally lower as NVDA weight compressed |
| Energy (XLE) | ~12.5% | Sole hedge sleeve; today's best performer, but valuation cushion likely closing (see below) |
| Healthcare (GEHC + OMCL) | ~13.4% | Split between a deepening-loss deep-value name (OMCL) and a name now underperforming its recent relative-strength pattern (GEHC) |
| Broad market / diversified (residual VTI/VXUS, ex-tech-slice) | ~46.2% | Largest bucket; still USD/global-equity beta, not independent of the tech factor |

No structural change since yesterday. Standing flag stands: the look-through tech concentration lives mostly inside VTI/VXUS, not the headline NVDA%, and remains this book's largest single sector exposure by a wide margin.

## Geographic exposure and currency risk

~69.95% of equity (VTI+NVDA+OMCL+GEHC) is USD/US-domiciled; ~30.05% (VXUS) is unhedged ex-US, direct FX exposure — essentially unchanged. VXUS was again red today (-0.47%), consistent with dollar strength on a still-elevated, now second-day-confirmed >5% 10yr rather than a VXUS-specific break. **New this run: Xi Jinping landed in the US today ahead of the reported Trump-Xi summit** — the two-sided framing already on file stands and is now closer to resolving: a genuinely constructive meeting is a real, near-term catalyst that could firm non-USD currencies against the dollar and benefit VXUS specifically, while a disappointing or contentious outcome would be a fresh headwind layered on top of the existing rate-driven dollar strength. This is the nearest-dated of this book's standing macro catalysts and should be watched at every run until it resolves.

## Interest rate sensitivity per position

- **NVDA**: high — long-duration growth multiple; MS's DCF gap ≈-7.2% overvalued as of this morning's roll, narrowing on price action even as the rate backdrop that should widen it (not narrow it) intensifies — a reminder that price and fundamentals can diverge short-term.
- **VTI**: high — mega-cap-tech-heavy index, same duration exposure as NVDA in aggregate.
- **VXUS**: moderate — lower average multiple than US, plus FX/rate-differential sensitivity; both a rate-risk name and a currency-risk name simultaneously.
- **OMCL**: high — small-cap, no earnings cushion at this drawdown level, disproportionately hurt by a higher cost of capital; would see the largest proportional fair-value compression if MS's WACC-rebuild clock fires.
- **XLE**: low-moderate — driven primarily by oil price, not discount rate directly, but XLE's own DCF is WACC-based (10.5%) and would also compress in a coordinated rebuild.
- **GEHC**: moderate — established cash-flow generator, less rate-sensitive than growth names; MS's WACC held at 8.5%.

**Live rate context — this is the escalation to log clearly.** Fresh WebSearch this run confirms the 10-year settled at **~5.11-5.13% on 9/23** and is trading **~5.12-5.14% again this morning** (TradingEconomics, Vantage Markets, CNBC, Yahoo Finance) — the first genuinely *second-day* confirmation of a >5% close this cycle. The prior two attempts (9/15-17, and briefly mid-month) both reset inside 48 hours; this is now Day 2, the furthest any attempt has gotten. Per MS's own written criterion, a settled close above 5% held a full week (roughly through ~10/1) forces a coordinated rebuild of every WACC-based model on this book — NVDA, OMCL, XLE, and GEHC all move, and a higher discount rate compresses every one of those fair values regardless of current direction, meaning OMCL's +64% "discount" and GEHC's +7.2% "undervalued" call both shrink too, not just NVDA's overvaluation gap. **This desk's standing process critique from prior weeks is now resolved but replaced by a sharper one: the data gap is closed (multi-source, second-day-confirmed), but the book has no articulated plan for what changes operationally between now and the 10/1 rebuild trigger beyond "watch and wait."** Rule 6a's core-up pause (fired 9/2) remains in effect regardless.

**XLE recompute, this run:** MS's 9/24 ~10:12 ET composite fair value was $62.8/sh vs. that run's price $62.73 (gap ≈+0.11%, essentially fair value). Live price now **$63.225**, up further since that reading as oil extends its climb (Brent ~$103-105/bbl, up from yesterday's ~$101-102) → recomputed gap = (62.8 − 63.225) / 63.225 = **-0.67%, now marginally OVERVALUED** on MS's own model, the first overvalued reading on XLE since the crossover first appeared 9/22. **This is exactly the flip MS's own report predicted this morning ("expects the next session of firm oil to push XLE back into overvalued territory") — it has now happened intraday, same day as the prediction.** Practically: XLE's price-hedge behavior (today's best performer, +1.37%) and its valuation case (now mildly rich, not cheap) have diverged — it still works as a directional offset to Hormuz/oil risk, but the "underpriced protection" framing that supported the top-up trigger's valuation leg no longer holds as of this live read. Flagging for BR/MS to confirm at their next full runs; this desk's read is that the top-up trigger's valuation leg should be treated as closed, not open, pending their formal recompute.

## Recession stress test — estimated drawdown

Unchanged methodology (equity-value shocks, no rebalancing assumed), re-run on today's 10:41 ET live weights:

- **Scenario A — garden-variety recession (broad equities -25%, energy -15%, healthcare/OMCL -10%):** NVDA/VTI/VXUS/GEHC segment (~79.52% of equity, ~$34.97) down ~25% ≈ -$8.74; XLE (~12.47%, ~$5.49) down ~15% ≈ -$0.82; OMCL (~8.01%, ~$3.52) down ~10% from an already-depressed base ≈ -$0.35. **Total equity drawdown ≈ -$9.91 (-22.5% of equity, ~-19.8% of the $50.04 pool).**
- **Scenario B — supply-shock stagflation (oil spike, broad equities -15%, energy +20%):** NVDA/VTI/VXUS/GEHC down ~15% ≈ -$5.25; XLE up ~20% ≈ +$1.10; OMCL flat-to-down ~5% ≈ -$0.18. **Net equity impact ≈ -$4.33 (-9.8% of equity, ~-8.7% of pool)** — still the one scenario this book is actually structured to survive well, and the scenario today's tape most resembles in miniature (oil up, broad equities down, XLE the lone winner).
- **Scenario C — Hormuz escalation → correlation-to-1 broad panic (XLE's hedge property inverts):** uniform -20% shock across all six positions. **Total equity drawdown ≈ -$8.80 (-20.0% of equity, ~-17.6% of pool).** This remains the scenario this book's all-equity, no-options structure was not designed to survive.

Account-level (including the untouchable ~$50 reserve): all figures above roughly halve, since flat reserve cash dilutes any trading-pool loss across the full ~$100 account.

## Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| VTI, VXUS | 🟢 Very high | Deep, liquid ETFs, no concern at this position size |
| NVDA | 🟢 Very high | Mega-cap, no concern |
| XLE | 🟢 High | Liquid sector ETF |
| GEHC | 🟡 Moderate | Large-cap but lower average daily volume than the above; no structural change |
| OMCL | 🟡 Moderate | Small-cap, thin volume flagged repeatedly — not a forced-exit concern at this position size, but a real slippage risk if ever sized up materially, which is precisely the DCA gate's near-term risk (see below) |

No change since yesterday. All positions remain sub-$14; liquidity is not a binding constraint for a book this size.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.57%) and NVDA alone (12.56%/11.04%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -29.54% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design. **The DCA gate sits ~$2.46 away**, tracking the book's two-day profit round-trip described at the top of this report. Repeating explicitly, as this desk has for weeks: **a mechanical pool-profit threshold clearing is not a thesis re-affirmation.** This desk wants a fresh, dedicated read (MS confirms the DCF discount still holds, no guide-down repeat risk into the ~10/29 print, no new structural break) *at the run the gate fires*, not a reflexive first tranche the moment the number crosses $2.50 — and now also wants MS's WACC-rebuild clock outcome (fires ~10/1) checked before any first tranche, since that rebuild would shrink OMCL's discount even though it wouldn't touch the underlying thesis.
- **GEHC sizing risk (carried forward):** MS's mandatory post-close DCF rebuild (9/23) remains clean (+7.2% undervalued as of this morning's roll). GEHC is already at/above BR's 4% target pool weight (4.77%) with no overweight case made by any desk. Today's -0.68% is GEHC's worst single-day move in several reports and its first day underperforming the broad risk-on bloc rather than tracking it or beating it — one data point, not yet a pattern, but worth a dedicated watch given it just posted a fresh Needham $93 target two days ago.
- **XLE valuation risk (new this run):** now mildly overvalued (-0.67%) on MS's own model per the live recompute above, the first overvalued reading since the crossover first appeared. This does not change position sizing (no trim recommended — the hedge role stands regardless of valuation), but it does mean this book currently holds no undervalued position outside GEHC and OMCL — a narrower opportunity set than it had 24-48 hours ago.
- **No position sizing changes recommended this run.**

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates to a fresh, larger direct-strike event** (a new US strike wave, an attempt to fully seal the strait, or Trump's own "annihilate" branch being chosen): oil spikes sharply, correlated multi-day equity selloff (Scenario C). Estimated probability over the next 30 days: **~15-18%, unchanged** — Iran's floated "conditions" for reopening are a marginal, still-unconfirmed step, not a de-escalation this desk is willing to price in yet.
2. **10yr settles decisively above 5% and holds for a full week**, triggering MS's coordinated rebuild and compressing multiples across the book's highest-duration names (NVDA, VTI, OMCL, and now XLE/GEHC too, since all four are WACC-based). Estimated probability: **~40-45%, raised materially from ~25-30% as of yesterday** — this is now Day 2 of a confirmed multi-source close above the threshold, the furthest any attempt has progressed this quarter, and it is the single most-changed number in this report.
3. **OMCL-specific structural thesis break** ahead of the ~10/29 print, compounded by the DCA gate's proximity. Estimated probability of a break: **~10%, unchanged.**
4. **Generalized correlation-to-1 liquidity panic** (any trigger, not just Hormuz) taking down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~20%, unchanged** — still the scenario this all-equity, no-options, thin-cash-reserve book is least equipped to survive.
5. **"Buy the rumor" reversal: talks or a near-term diplomatic setback disappoints relative to what's now priced in.** Estimated probability of a disappointment-driven reversal within the week: **~33-38%, unchanged** — the Xi-Trump meeting now landing adds a second, distinct disappointment vector (a contentious or inconclusive summit) layered on top of the standing Iran one.
6. **GEHC gives back some or all of its post-Needham/close-above-$65 gain** if the market re-rates the stock toward MS's reaffirmed $70.8 base case rather than Needham's $93 target. Estimated probability of a >5% pullback within a week: **~35-40%, nudged up slightly from ~30-35%** given today's underperformance against its own recent pattern.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the rate/WACC-rebuild risk (biggest risk, newly elevated):** there is no clean equities-only hedge for a broad discount-rate repricing — it hits every WACC-based holding on the book simultaneously by construction. The only real levers are (a) rule 6a's standing pause on new high-multiple core-ups, already in effect, and (b) not treating today's XLE strength as dry powder, since XLE itself is one of the four names that would reprice lower in a coordinated rebuild. **This desk's explicit recommendation: use the remaining time before ~10/1 to have MS pre-stage the rebuild math (what each fair value becomes at, say, WACC+50bp) so the team isn't reacting in real time if the clock actually fires** — a preparation step, not a trade.
2. **Against tech/AI look-through concentration (~27.9%):** no new position-level action recommended. Reiterating the standing point: when the OMCL DCA gate opens (~$2.46 away), that capital is earmarked for OMCL by design (rule 18), not a free deployment decision — any *separate* future deployment should still lean away from NVDA/VTI/VXUS.
3. **Against the Hormuz-escalation/hedge-cushion risk:** XLE's price-hedge behavior continues to work day-to-day (best performer again today), but its valuation cushion has now flipped to mildly overvalued per the live recompute above — meaning this hedge is priced fully, not cheaply, at current levels. Cash remains the other lever, at ~12.11% of pool (~1.11pp above BR's 11% floor), though that buffer widened today mechanically from equity losses, not fresh capacity.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.04% (target 10%, +1.04pp), VTI 27.66% (target 28%, -0.34pp), VXUS 26.41% (target 25%, +1.41pp), XLE 10.96% (target 12%, -1.04pp), OMCL 7.04% (target 10%, -2.96pp), GEHC 4.77% (target 4%, +0.77pp), Cash 12.11% (target 11%, +1.11pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -2.96pp gap is the largest, and it is appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **XLE top-up trigger:** funding remains subordinated to the OMCL DCA gate per BR's standing sequencing. This desk now goes further than yesterday: with XLE's valuation leg flipped to mildly overvalued per the live recompute above, this desk recommends BR/MS treat the top-up trigger's valuation leg as **closed, not merely thin**, pending their own formal confirmation — funding it today would mean buying a hedge that is no longer underpriced, on top of already being second in the funding queue.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. 9/23 ~14:41 ET |
|---|---|---|
| Rate/WACC-rebuild risk (10yr >5%, now Day 2) | 🔴 High | ↑ **worse — escalated**, first second-day confirmation this cycle, rebuild-probability estimate raised to ~40-45% |
| Hormuz/Iran binary tail risk | 🔴 High | → unchanged — Iran's floated conditions are a marginal step, not a de-escalation |
| XLE hedge valuation (price-hedge working, cushion now gone) | 🟡 Moderate | ↓ **worse — flipped overvalued** on live recompute, first time since the crossover appeared |
| Look-through tech/AI concentration | 🔴 High | → unchanged (12th+ report) |
| Two-day profit round-trip (+1.19%→+0.08%) | 🟡 Moderate | New line item this run — not a loss, but the fastest cushion erosion in several weeks |
| Trump-Xi summit / VXUS currency risk | 🟡 Moderate | New/sharper — Xi landed in the US today, meeting now imminent rather than "reported" |
| OMCL single-position drawdown + DCA gate | 🟡 Moderate | → roughly flat, gate distance tracking the profit round-trip |
| GEHC sentiment-vs-fundamentals gap | 🟡 Moderate | ↓ slightly worse — first underperformance vs. its recent relative-strength pattern |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [10-Year Treasury Yield Hits 5.13%, a 2007 High: Dates to Watch - Vantage Markets](https://www.vantagemarkets.com/market-news/us-10-year-treasury-yield-2007-high-september-24-2026/)
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [US10Y: U.S. 10 Year Treasury - CNBC](https://www.cnbc.com/quotes/US10Y)
- [Iran says Trump's threats a sign of "strategic desperation," floats conditions for Hormuz reopening - CNBC](https://www.cnbc.com/2026/09/23/us-iran-war-trump-hormuz.html)
- [2026 Strait of Hormuz crisis - Wikipedia](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_crisis)
- [Current price of oil as of September 24, 2026 - Fortune](https://fortune.com/article/price-of-oil-09-24-2026/)
- [Stock market today: Dow, S&P 500, Nasdaq slide as bond sell-off troubles markets, China's Xi Jinping lands in US - Yahoo Finance](https://finance.yahoo.com/markets/live/stock-market-today-thursday-september-24-dow-sp-500-nasdaq-080352893.html)
- [Stock Market Today (Sept. 24, 2026): Nasdaq slides as Treasury yields surge, inflation fears rise - TheStreet](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-sept-24-2026)
- Internal: trading-experiment/state.md (9/24 ~09:37 ET, freshest live snapshot pre-report), analysts/ms-dcf-valuation.md (9/24 ~10:12 ET), analysts/gs-stock-screener.md (9/24 ~09:5x ET), analysts/jpm-earnings-analyzer.md (9/24 ~09:15 ET), analysts/br-portfolio-builder.md (9/23 ~16:13 ET)
