# BW Risk Assessment — Risk Management Report
**Date: 2026-09-04 (Friday), ~14:41 ET** — Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Prior BW report: 2026-09-04 ~10:42 ET (Grade C-).

---

## Overall Portfolio Risk Grade: **C-** (held)

No structural change since this morning's read, and nothing in either direction clears the bar for a grade move. NVDA has given back about half of this morning's rally (+2.36% at 10:42 → +0.76% now vs. yesterday's close), which mechanically eases look-through AI/tech concentration by about a tenth of a point — not a de-risking, just noise reverting the way I flagged it would this morning. GEHC's cushion has thinned further intraday (now only +0.17% vs. entry cost, down from +0.60% this morning) even as MS's freshest DCF (14:20 ET) flipped it to mildly undervalued — a valuation positive that hasn't yet shown up as a price positive. The 10-year close conflict I escalated this morning is now a fourth distinct reading (4.76% via TradingEconomics for 9/3, joining 4.78%/4.74%/4.79% already on file) — genuinely unresolved, not resolving in either direction. Hormuz is unchanged: still a live, unresolved standoff four days into the tanker-strike exchange, with CNN's own framing today ("the US wants to manage the stalemate... Iran wants to break it") reading as neither escalation nor de-escalation. A grade built on structural exposures (concentration, an active geopolitical shock, a still-fired rate trigger) doesn't move on an afternoon of two-way noise.

## Single biggest risk right now
**Unchanged: look-through AI/mega-cap-tech concentration (~29.9% of equity) sitting on top of a live, unresolved Hormuz standoff and a rate-shock trigger that is still formally fired with its own underlying data source still in genuine dispute.** None of the book's three biggest structural risk factors improved or worsened materially today — they simply continued. That itself is worth saying plainly: three separate live risk factors, all pointing the same direction (equities-only, still fired/live/unresolved), have now persisted unchanged across multiple consecutive reports. Persistence is not the same as safety.

Status of the standing watch items, checked fresh this run:
1. **Hormuz — unchanged, still a live standoff.** Fresh WebSearch (CNN, 9/4) frames the situation as a stalemate each side wants to break, not resolve — no new strikes found since 9/2's tanker exchange, but no de-escalation either. Strait traffic remains severely depressed. Treating this exactly as this morning: escalated, not de-escalating, XLE remains the correct equities-only hedge, OXY stays vetoed.
2. **Rule 6a rate-shock trigger — still formally fired; the underlying-figure conflict has gotten messier, not clearer.** This morning I flagged a 4.78% (state.md-confirmed) vs. 4.74% (WebSearch) split for the 9/3 close. A fresh pull this run returns a *third* figure — 4.76% (TradingEconomics) — while CNBC's quotes page still separately shows readings in the high-4.7s. Per rule 4, I'm not overriding the desk's already-locked figure on the strength of yet another WebSearch pull that disagrees with itself across sources. Practically this changes nothing: every reading on the table this week (4.74%-4.79%) sits close enough to the 4.75% threshold that the pause's own logic ("don't lift on an ambiguous read") holds regardless of which one is technically correct. Recommending, a third time now, that BR/the trader pull FRED's DGS10 directly at the next run — it is the one source in this dispute that is unambiguous, even if it lags a day.
3. **GEHC — cushion thinning again, worth flagging plainly rather than softening.** Live $68.81, -1.31% vs. yesterday's close, now only **+0.17% vs. the $68.69 entry cost** — down from +0.60% this morning, the smallest the cushion has been since the trade. This is happening the same run MS's DCF flipped to mildly undervalued (~$70.2 base case, +2.0% implied upside at today's price) — i.e., the valuation case just got *marginally better* while the price cushion got thinner, which is exactly the kind of divergence a risk desk should name rather than average away. Four sessions of live trading, still zero structural margin of safety beyond the DCF read itself. Not a trim signal (rule 1 — no catalyst, no structural break), but the position remains this book's thinnest-margined name after NVDA.
4. **NVDA+OMCL combined concentration — 20.83% of equity, buffer ~4.17pp to the 25% cap.** Essentially flat vs. this morning's ~21.0%; today's give-back in NVDA (+0.76% vs. +2.36% this morning) is doing the easing, not any change in OMCL.
5. **NVDA CDS — still unresolved via WebSearch, now an eleventh-plus consecutive cycle.** Fresh search this run surfaced nothing newer than the already-known record (82bps intraday, 7/27; 80.77bps mid-August). No evidence of further widening, no evidence of a retrace. This remains genuinely stale, not resolved — the credit market's read on NVDA's exposure to circular AI-financing commitments (OpenAI/SK Group, $750B+ in commitments per the same search) is a real, currently unquantifiable tail-risk input this desk cannot verify in either direction this week or last.
6. **OMCL unrealized loss — -26.8% vs. cost, essentially unchanged.** Live $34.38, -1.26% vs. yesterday. Still the book's largest single detractor in dollar terms of unrealized loss, still the desk's largest single *upside* mispricing per MS (widened again today, ~56.8%+ per MS's 9/4 read at the earlier price, wider still now that OMCL has pulled back further). The DCA gate remains the correct, pre-committed timing mechanism — this desk is not recommending harvesting the loss (see Strategy rule 3 in state.md's tax-efficiency framing) or adding outside the plan.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Geopolitical/oil shock (Hormuz) | 🔴 High | Live standoff, no de-escalation since 9/2's strike exchange; XLE (held) remains the correct hedge; OXY correctly vetoed |
| Look-through AI/tech concentration | 🔴 High | ~29.9% of equity; eased ~0.1pp intraday on NVDA's partial pullback, not a structural change |
| Rule 6a rate-shock trigger / data conflict | 🟠 Medium-High | Pause remains fired; underlying 9/3 close now has a *third* conflicting WebSearch reading (4.76%, joining 4.78%/4.74%) — needs FRED DGS10, not another search pull |
| GEHC entry-cushion risk | 🟠 Medium-High | Cushion thinned to +0.17% vs. entry (from +0.60% this morning) even as MS's DCF flipped mildly undervalued — a valuation/price divergence worth watching |
| OMCL unrealized loss / volatility | 🟠 Medium-High | -26.8% vs. cost; largest single detractor; DCA gate remains the correct timing mechanism, not a harvest candidate |
| Correlation / lack of true diversification | 🟠 Medium-High | NVDA/VTI/VXUS/XLE all traded within a narrow ±1.3% band today — a genuinely low-dispersion session, the opposite of yesterday's brief decoupling, and a reminder the block-move pattern is the norm, not the exception |
| NVDA credit-equity divergence (CDS) | 🟡 Medium | Unresolved via WebSearch for an 11th+ consecutive cycle; last confirmed data point is the 7/27 82bps record |
| Single-stock concentration (NVDA+OMCL combined) | 🟡 Medium | 20.83% of equity, ~4.17pp under the 25% trigger |
| Geographic/currency risk | 🟡 Medium | VXUS ~30.3% of equity carries direct FX exposure — unchanged |
| NVDA idiosyncratic catalyst risk | 🟢 Low | Hugging Face deal now signed/closed/immaterial; nothing new found this run |
| Liquidity risk (book-wide) | 🟢 Low | Five of six holdings mega-cap/large-ETF liquid; OMCL and GEHC remain the moderate-liquidity names to watch |
| Cash floor buffer | 🟢 Low | Deployable cash $6.00, ~11.8% of pool vs. the 10% floor — defended cleanly |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-09-04 ~14:41 ET)

Equity $44.996 + deployable cash $6.00 (cash $56.00 less the $50 untouchable reserve per Jash's 7/10 clarification) = **pool ≈ $50.996** (base $50 + ~$0.996 accumulated profit — essentially break-even on cumulative profit right now). Total account value per `get_portfolio`: **$100.996**.

| Holding | Qty | Live price | Chg vs. 9/3 close | Avg cost | Unrealized P&L | Value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $230.19 | +0.76% | $201.40 | +14.30% | $5.715 | 12.70% | 11.21% |
| VTI | 0.036690 | $379.54 | -0.36% | $370.40 | +2.47% | $13.925 | 30.95% | 27.31% |
| VXUS | 0.154525 | $88.230 | +0.30% | $84.13 | +4.87% | $13.634 | 30.30% | 26.74% |
| OMCL | 0.106405 | $34.38 | -1.26% | $46.99 | -26.83% | $3.658 | 8.13% | 7.17% |
| XLE | 0.086775 | $64.07 | -0.85% | $57.62 | +11.20% | $5.560 | 12.36% | 10.90% |
| GEHC | 0.036393 | $68.81 | -1.31% vs. 9/3 close, **+0.17% vs. $68.69 entry** | $68.69 | +0.17% | $2.504 | 5.57% | 4.91% |
| Cash (deployable) | — | — | — | — | — | $6.00 | — | 11.77% |

## 2. Correlation analysis between holdings

Today is the mirror image of yesterday's brief decoupling: NVDA (+0.76%), VTI (-0.36%), VXUS (+0.30%), OMCL (-1.26%), XLE (-0.85%), and GEHC (-1.31%) all traded inside a narrow band with no clear leader — a genuinely low-dispersion session across the whole book. That is worth naming precisely because yesterday's report flagged a rare decoupling day as "not evidence the correlation structure has changed" — today confirms that read: the NVDA/VTI/VXUS block reverted to moving together (all small-magnitude, same general order as the broader tape), and OMCL/GEHC continue to be the two names not moving in lockstep with anything else, still doing the diversification job they were bought for. **The structural point stands: on a genuine trend day (up or down), NVDA/VTI/VXUS's combined ~68.9% of equity will move as one factor, not three independent ones** — today's quiet session doesn't test that, it just doesn't contradict it either.

## 3. Sector concentration risk

Face-value: AI/semis (NVDA) 12.70% direct; broad-market ETFs (VTI/VXUS) 61.25%; healthcare-tech combined (OMCL 8.13% + GEHC 5.57%) 13.70%; energy (XLE) 12.36%.

**Look-through concentration (BR's standing ~36% AI-adjacent estimate for VTI, ~20% for VXUS):**
- NVDA direct: 12.70%
- VTI embedded (~36% of 30.95%): ~11.14%
- VXUS embedded (~20% of 30.30%): ~6.06%
- **Total look-through AI/mega-cap-tech exposure: ~29.90% of equity** — down ~0.1pp vs. this morning's ~30.02%, entirely a function of NVDA's partial pullback today, not a new position or an allocation change. Still, by a wide margin, the book's single largest structural risk factor, and it has now spent multiple consecutive reports oscillating in a tight band right around the 30% line rather than clearly breaking either direction.

Healthcare-tech (OMCL+GEHC, 13.70% combined) remains the second-largest sector concentration; the two continue behaving as genuinely distinct bets (OMCL -1.26%, GEHC -1.31% — actually converged today, a coincidence worth noting but not enough of a pattern to revise the "distinct factor" read on one session).

## 4. Geographic exposure and currency risk

Unchanged. VXUS (30.30% of equity, ~$13.63) remains the book's only direct FX exposure — a diversified developed+EM basket, not a single-currency bet. No dedicated currency hedge exists or is warranted at this account size; the equities-only toolbox has nothing cheaper or more precise than simply sizing VXUS to its policy target, which BR already does.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Basis |
|---|---|---|
| NVDA | High | Long-duration growth cash flows; CDS-spread and multiple-compression risk both amplify in a sustained higher-rate regime; price sits within ~1% of MS's own bull case, leaving little room to absorb a rate-driven multiple reset |
| VTI | Medium | Broad market blend of durations; large-cap tech weighting (the same ~36% AI-adjacent estimate driving look-through concentration) skews it more rate-sensitive than a pure value index would be |
| VXUS | Medium | Ex-US blend, generally lower-duration/lower-multiple than US large-cap growth, but not immune — a global rate shock (not just a US-specific one) would hit it too |
| OMCL | High | Small/mid-cap growth healthcare-tech; MS's own DCF WACC (9%) is meaningfully sensitive to the discount-rate input — a sustained higher-rate regime would compress the ~56.8% upside gap materially even absent any change in the underlying business |
| XLE | Low | Energy/commodity-driven, not multiple-driven; the live risk factor is oil price and Hormuz, not the discount rate — this is the book's best rate-shock diversifier by construction, not just by accident |
| GEHC | Medium-High | ~$8.0B net debt (BW's own 10-Q-sourced figure from the 8/20 risk read) makes debt-service cost genuinely rate-sensitive on top of the standard equity-duration effect; MS's WACC (8.5%) is the lowest of the growth-name builds on this book but still a real sensitivity |
| Cash (deployable) | N/A (benefits from higher rates) | The one holding that improves, not worsens, in the exact regime rule 6a is watching for — the standing case for treating the cash floor as a genuine shock absorber, not idle capital |

## 6. Recession stress test — estimated drawdown

| Scenario | Est. peak-to-trough on the ~$51 trading pool | Est. account-level drawdown (reserve intact) | Driver |
|---|---|---|---|
| Ordinary equity bear market | **-22% to -28%** (~$11-14) | **-11% to -14%** | Broad multiple compression; VTI/VXUS still carry ~54% of the book even after today's mechanical mix-shift toward slightly-below-target VTI |
| Severe recession / AI-capex unwind | **-32% to -40%** | **-16% to -20%** | NVDA's cushion (+14.3% unrealized) is real but thin relative to the size of an AI-unwind move; GEHC now carries essentially zero cushion of its own (+0.17% vs. cost) — a second uncushioned name alongside NVDA, the same structural point BR flagged 9/3 |
| Tail — rate shock (sustained >5% 10yr) + growth scare, compounding a still-live Hormuz shock | **-42% to -50%+** | **-21% to -25%+** | The three live/fired risk factors on this book's own heat map (concentration, geopolitical, rate) would not be independent in this scenario — they'd compound. XLE would be the one partial offset (oil likely spikes further on any Hormuz escalation), but not nearly enough to cover a simultaneous NVDA/OMCL/GEHC multiple reset |

**The untouchable ~$50 reserve remains the book's single best risk control, and it is structural, not a market call — it roughly halves every drawdown figure above at the account level.** That said, it does nothing to protect the trading pool itself, which is where every trigger, DCF, and sizing decision in this book actually lives. Radical transparency here: a -40%+ pool year is a live, non-trivial possibility given three simultaneously-live risk factors, not a tail case dismissible as unlikely.

## 7. Liquidity risk rating per holding

| Holding | Liquidity rating | Basis |
|---|---|---|
| NVDA | 🟢 Low risk | Mega-cap, among the most liquid single names on US markets; fractional-share exit at this position size is instantaneous at any market hour |
| VTI | 🟢 Low risk | One of the largest US-listed ETFs by AUM; effectively unlimited liquidity at this position size |
| VXUS | 🟢 Low risk | Same — large, liquid Vanguard ETF; no liquidity concern at any size this book could reach |
| XLE | 🟢 Low risk | Large, liquid sector SPDR; no concern |
| OMCL | 🟡 Medium risk | Small/mid-cap ($3.4B-ish market cap range); thinner average daily volume than the mega-caps/ETFs above — not a concern at this book's fractional-share position size, but the name to watch first if this book's capital ever scales meaningfully |
| GEHC | 🟡 Low-Medium risk | Large-cap ($40B+ market cap) but a relatively recent spin-off (2023) with a shorter liquidity track record than the other five names; ADV is healthy, no observed concern in four sessions of holding it, but flagged as the second name (after OMCL) to monitor if position sizes grow |

**Book-wide: Low.** Nothing here is a binding constraint at current position sizes — this rating exists to be re-checked, not because it's currently binding.

## 8. Single stock risk and position sizing recommendations

- **NVDA (12.70% of equity, 11.21% of pool):** Inside every standing cap (18-20% single-name, 25% combined with OMCL) with real buffer to each. Price sits within ~1% of MS's own bull-case DCF for the first time — this desk is not calling for a trim (no structural break, per rule 1), but flags that the *cushion to further chase* is now genuinely thin: a further ~1% rally would put NVDA above even this book's most generous credible fair-value scenario. No sizing action recommended; watch, don't act.
- **OMCL (8.13% of equity, 7.17% of pool):** Well under its 10% pool target and under every risk trigger. This is the book's cheapest name on a DCF basis (~56.8%+ upside) and the position is currently *undersized* relative to that conviction, purely by design (the DCA gate, not a risk cap, is what's holding it back). No risk-based objection to the standing DCA plan adding here in tranches once the profit threshold clears.
- **GEHC (5.57% of equity, 4.91% of pool):** At its quarter-size target, no add recommended. This desk's original sizing call (§2 of the 8/20 entry-trigger writeup: quarter-size specifically because it was priced at a premium to fair value, not a discount) is being validated in real time — this is now the name with the thinnest price cushion in the book (+0.17%), exactly the outcome a smaller allocation was meant to make tolerable. **This is the sizing framework working as intended, not a red flag on the position itself.**
- **XLE (12.36% of equity, 10.90% of pool):** Slightly over its 10% pool target, immaterial. Function here is hedge, not conviction — MS's own DCF says overvalued, and this desk agrees the position should be held anyway for its correlation-breaking role against the Hormuz/rate-shock factors, not trimmed to a valuation-optimal size.
- **VTI/VXUS (30.95%/30.30% of equity):** Core sleeve, currently a combined ~61.25% of equity. No single-stock risk framework applies directly (diversified baskets), but their combined look-through AI/tech contribution (~17.2pp of the total 29.9% concentration figure) means they are not risk-free diversifiers against this book's #1 flagged risk — a distinction worth restating since it's easy to treat "core ETF" as synonymous with "risk-reducing," which is only partially true here.

**No new single-stock risk-based sizing action recommended this run.** Every trigger reads clean with real buffer; the only two names worth a second look (NVDA's thinning upside room, GEHC's thin cushion) are both watch items, not action items, under rule 1.

## 9. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 1-3 months) | Estimated impact on this book |
|---|---|---|
| Hormuz conflict escalates to a sustained shipping closure or a wider regional strike campaign | ~12-18% | Sharp oil spike (XLE +, partial offset), but broad equity risk-off would likely dominate — net negative for the ~68% of the book in NVDA/VTI/VXUS despite the hedge |
| Sustained rate shock (10yr closes durably >5%, not just brushing the 4.75-4.8% zone this week) | ~15-20%, elevated by Friday's hot jobs print (162K vs. 55K est., ~58% hike-odds repricing per GS's 9/4 report) | Compounding multiple compression across NVDA, OMCL, and GEHC simultaneously — the single scenario this book's own heat map has the least real protection against, cash floor aside |
| NVDA-specific credit/AI-financing event (a confirmed CDS breakout well past the 82bps record, tied to the OpenAI/SK Group $750B+ commitment structure) | ~5-8% | Would hit NVDA directly and the ~17pp of look-through exposure embedded in VTI/VXUS simultaneously — the scenario this desk has repeatedly flagged as unquantifiable via WebSearch, not unquantifiable in principle |
| OMCL structural thesis break (guidance cut, contract loss, margin deterioration — the specific triggers in the standing contingency plan) | ~8-10% before the 11/4 estimated next print | Contingency plan already governs the response (structural-break-only, no same-minute reaction); risk is well-managed by design, not eliminated |
| GEHC structural break (net-debt deterioration beyond the ~$8.0B sourced figure, backlog/book-to-bill reversal) | ~5-8% | No pre-written contingency plan exists yet for GEHC the way OMCL and NVDA have one — this desk recommends closing that gap before the next scheduled catalyst (Wells Fargo Health Conference, 9/9) rather than improvising a reaction in the moment |

## 10. Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options)

1. **Look-through AI/mega-cap-tech concentration (~29.9% of equity).** This is the hardest of the three to hedge with equities alone, because it's embedded inside the core sleeve itself, not just the NVDA satellite. The practical toolbox: (a) hold the line on the existing 18-20%/25% caps rather than let them drift wider — they are the only direct lever; (b) continue favoring non-AI-correlated satellite diversifiers (OMCL, GEHC, XLE already serve this role) for any future incremental dollar over adding to VTI/VXUS while rule 6a's pause is active anyway; (c) accept explicitly that this exposure cannot be fully hedged without either abandoning the core-ETF structure (not recommended — it's still the book's main long-run compounding engine) or introducing a true short/inverse instrument, which is outside both the mandate and this account's risk tolerance. **Recommendation: manage via caps and satellite mix, not eliminate.**
2. **Hormuz/geopolitical oil shock.** XLE remains the correct, and only, equities-only hedge available — an energy-sector ETF benefits directly from the same event (a Hormuz disruption spiking oil) that would hurt the rest of the book. **Recommendation: hold XLE through the current do-not-add valuation call specifically because of its hedge function, not despite it** — MS's overvaluation read is a reason not to add, not a reason to trim a position doing its job.
3. **Rate-shock / growth-multiple compression.** No direct equities-only rate hedge exists (no TLT-short equivalent in this mandate, no options). The available levers are: (a) the cash floor itself — cash is the one holding that doesn't lose value in this exact scenario, and defending the 10% floor (currently 11.77%, healthy) is this book's real rate hedge; (b) continuing rule 6a's pause on new NVDA/VTI/VXUS core-ups for the duration of the fired trigger, which this desk fully endorses; (c) recognizing XLE does double duty here too — low duration by construction, it's a partial rate hedge as well as a geopolitical one. **Recommendation: cash floor + rule 6a discipline are this book's actual rate hedge; there is no equities-only instrument that does it more directly.**

## 11. Rebalancing suggestions with allocation percentages

This desk's risk-based view, weighed against and largely consistent with BR's policy targets:

- **No rebalancing action recommended this run.** Every position sits inside its risk-based band; nothing has crossed a trigger.
- **If forced to rank where incremental capital should NOT go while rule 6a's pause holds:** further NVDA, VTI, or VXUS additions — all three sit at or above their targets/caps already, and all three sit inside the concentration factor this desk has flagged as the book's #1 risk for multiple consecutive reports.
- **If forced to rank where incremental capital SHOULD go once available (DCA gate permitting):** OMCL first (7.17% of pool vs. 10% target, widest DCF discount, lowest correlation to the book's dominant risk factor) — fully consistent with the standing DCA plan, no disagreement with BR here.
- **One process recommendation for the desk itself, not a trade:** write a GEHC structural-break contingency plan (mirroring OMCL's and NVDA's) before the 9/9 Wells Fargo Health Conference, so a reaction to any news from that event is pre-committed rather than improvised — this closes a real gap this report identified in §9 above.

---

## Stance note
Radical transparency, as mandated: this book is not currently mismanaging risk — every hard trigger reads clean, sizing has been disciplined (GEHC's deliberately smaller allocation is the clearest recent example of the framework working), and the cash floor is genuinely defended. But three structural risk factors (concentration, Hormuz, the rate trigger) have now sat live and essentially unchanged across several consecutive reports without resolving in either direction, and this desk is not going to dress that up as improving just because nothing got worse today. Persistence of risk is not the same as absence of risk, and a C- grade reflects that plainly rather than drifting toward complacency on a quiet afternoon.
