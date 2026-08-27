# BW Risk Assessment — Risk Management Report
**Date: 2026-08-27 (~10:41 ET, Thursday)** — First run of the day after last night's NVDA/CRWD after-market print. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Prior BW report: 2026-08-26 ~14:50 ET (Grade C). Radical transparency starts with saying plainly what changed and what didn't: the binary event this book spent two weeks preparing for has now resolved, cleanly, in the trader's favor — and that is exactly the moment complacency is cheapest and most dangerous. This report does not let a good print buy a better grade than the structure underneath it earns.

---

## Overall Portfolio Risk Grade: **C** (held, unchanged)

## Single biggest risk right now
**With the earnings binary resolved, the book's oldest and least-discussed risk reclaims the top spot: ~32% of equity is a single correlated AI/mega-cap-tech factor bet, in an equities-only book with zero bonds and zero hedge capacity.** NVDA beat and raised last night, is up +6.9% again today on top of yesterday's after-hours pop (now $224.15 vs Wednesday's $209.66 close, +11.3% above the $201.40 average cost), and every mechanical concentration trigger still has buffer. None of that changes the structural fact: NVDA direct + VTI's/VXUS's embedded AI-adjacent weight is now ~31.9% of equity, the single largest factor exposure in the book, sitting in a portfolio that cannot buy a put, cannot short, and cannot hold a bond to offset it. A clean beat-and-pop is the good outcome of a binary event, not proof the underlying concentration was ever safe.

**A second, genuinely new item this report is flagging plainly rather than letting the rally paper over it: the credit market did not celebrate last night's print the way the equity market did.** NVDA's 5-year CDS spread was last confirmed at 80.77bps (8/18), just below the 82bps 7/27 record, and has been treated as a data gap for multiple consecutive runs since — this desk has not been able to source a fresh, dated post-print reading this run either. That itself is the finding: credit-market risk pricing for this name has been sitting near an all-time-high level for weeks on AI-financing-circularity concerns ($750B+ in aggregate NVIDIA-linked infrastructure commitments, per multiple sources), and a strong equity print does not automatically resolve a credit-market thesis about counterparty and financing risk. Equity holders cheering the print while CDS spreads sit unmoved near record wides is a divergence worth taking seriously, not a contradiction to explain away.

Compounding factors, status this run (deltas vs. the 8/26 ~14:50 ET report):
1. **NVDA/CRWD earnings binary: RESOLVED.** NVDA beat on revenue (+4.5%) and EPS (+6.3%), Data Center accelerated to +117% YoY, guided FY28 revenue growth ~70%. First clean beat-and-pop in the last five prints (state.md rule 15 confirms no structural-break trigger fired). This is a genuine risk reduction — the single-name binary-event risk this desk flagged as the #1 item across every report since 8/12 no longer exists in its pre-print form.
2. **VIX at a 2026 low.** ~15.8-15.85 per FRED/CNBC, down from the 8/25 spike to 15.85 and well off the earlier-August range — the market-wide vol backdrop is calm, not just this book's own idiosyncratic risk.
3. **Rate-shock trigger (rule 6a): live-pulled this run after a two-run gap.** 10yr eased to 4.65% (from the 8/21 high of 4.75%), 30yr ~5.18% — both clear of the 4.75%/5.25% thresholds. **But Fed Chair Warsh speaks at Jackson Hole tomorrow, Friday 8/28** — explicitly flagged as not expected to pre-commit to a September decision, which itself raises event-risk (an ambiguous or hawkish-leaning speech can move long yields sharply on a single headline). This is now a T-1 event, the same discipline this book applied to NVDA's own print should apply here: don't get complacent 24 hours out just because the pre-event read is calm.
4. **NVDA pool-drift trigger: FRAMEWORK CHANGED, not just numbers.** BR revised the NVDA pool target from 15% down to 11% this morning (documentation-only, no trade — see state.md). NVDA's live pool weight is now ~11.03% — meaning a trigger this desk tracked with a tightening buffer for weeks (10.43% vs. a ~10% floor as of yesterday) has been resolved by a policy change, not by price action. Flagging this plainly: the "NVDA underweight drift" story that has appeared in every BW report since early August is now closed. NVDA sits essentially *at* its (new, lower) target, not below it.
5. **NVDA+OMCL combined trigger: buffer narrowed slightly, not widened, despite both triggers still holding.** 20.48% of equity vs. the 25% cap (~4.52pp buffer) — tighter than yesterday's ~4.9-5.1pp reads, because NVDA's rally has outpaced OMCL's continued weakness. Still clean, but worth correcting an assumption from earlier in the week: a post-pop widening of every buffer was not guaranteed and did not happen uniformly.
6. **OMCL: unchanged, still the book's largest unrealized loss.** -29.2% from the $46.99 average cost, no structural catalyst identified, next print not until 11/4 — outside near-term binary risk but still the single worst-performing position by percentage.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Look-through AI/tech concentration | 🔴 High | ~31.9% of equity (NVDA direct + VTI/VXUS embedded) — now the book's #1 standing risk with the earnings binary resolved |
| Correlation / lack of true diversification | 🔴 High | Same structural read every run — no bond ballast, only OMCL and XLE provide genuine diversification |
| NVDA credit-equity divergence (CDS) | 🟠 Medium-High (new flag) | CDS last confirmed 80.77bps, near the 82bps record, unresolved by last night's strong print; fresh post-print reading still unavailable |
| Jackson Hole rate event (Warsh, 8/28) | 🟠 Medium-High (T-1) | Rates currently clear of rule 6a thresholds, but tomorrow's speech is an explicit, dated single-headline risk with zero equities-only hedge |
| NVDA/CRWD earnings binary | 🟢 Resolved | Beat-and-raise, no structural break, rule 15 closed cleanly — down from 🔴 High every prior report this week |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.48% of equity combined, ~4.52pp under the 25% trigger — buffer narrowed vs. yesterday, still clean |
| NVDA pool-drift vs. policy target | 🟢 Low (resolved) | BR's target revision (15%→11%) plus the price pop closed a multi-week underweight gap in one morning — no longer a live drift risk |
| OMCL unrealized loss | 🟠 Medium-High | -29.2%, unchanged, no identified catalyst before the 11/4 print |
| Liquidity risk (book-wide) | 🟢 Low | Four of five holdings mega-cap/large-ETF liquid; OMCL remains the exception |
| Geographic/currency risk | 🟡 Medium | ~30.5% of equity (VXUS) carries direct FX exposure — unchanged |
| Market-wide volatility regime | 🟢 Low | VIX ~15.8, a 2026 low — calm backdrop, though calm-into-a-dated-event is its own caution flag (see Jackson Hole above) |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-08-27 ~10:41 ET)

Pool ≈ equity $44.464 + deployable cash ~$6.00 = **$50.464** (base $50 + ~$0.46 accumulated profit). Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages below unless marked "% of account."

| Holding | Live price | Chg vs. prior close | Unrealized P&L vs. cost | Value | % of equity | % of pool |
|---|---|---|---|---|---|---|
| NVDA | $224.15 | +6.91% | +11.30% | $5.565 | 12.52% | 11.03% |
| VTI | $379.795 | +0.41% | +2.44% | $16.443 | 36.99% | 32.58% |
| VXUS | $87.725 | -0.11% | +4.27% | $13.557 | 30.49% | 26.87% |
| OMCL | $33.25 | -0.60% | -29.24% | $3.539 | 7.96% | 7.01% |
| XLE | $61.805 | -1.00% | +7.26% | $5.362 | 12.06% | 10.63% |
| Cash | — | — | — | $6.00 | — | 11.89% |

## 2. Correlation analysis between holdings

Unchanged structural read: **no genuine ballast position exists in this book**. NVDA/VTI/VXUS remain the correlated AI/broad-market-sentiment cluster — visible again today in VTI's and NVDA's shared green move on the same overnight news, even though VTI's own +0.41% is a fraction of NVDA's +6.91%. OMCL and XLE remain the two real diversifiers, both moving independently of the NVDA print (OMCL -0.60%, XLE -1.00%) and of each other. **Net: 2 of 5 holdings (OMCL, XLE) provide genuine diversification value; the other 3 (NVDA, VTI, VXUS) are correlated expressions of the same US/AI-equity factor**, and that factor just had its most positive catalyst in months, which mechanically increases its dollar-weight in the book without any purchase — exactly the kind of "risk grows quietly through appreciation, not decisions" pattern this desk has flagged for NVDA specifically since 7/22.

## 3. Sector concentration risk

Face-value: AI/semis (NVDA) 12.52% direct; broad-market ETFs (VTI/VXUS) 67.48%; healthcare-tech (OMCL) 7.96%; energy (XLE) 12.06%.

**Look-through concentration, same methodology as every prior run** (BR's ~36% AI-adjacent estimate for VTI's embedded weight; ~20% for VXUS):
- NVDA direct: 12.52%
- VTI embedded (~36% of 36.99%): ~13.32%
- VXUS embedded (~20% of 30.49%): ~6.10%
- **Total look-through AI/mega-cap-tech exposure: ~31.9% of equity** — up modestly from 8/26's ~31.3%, driven entirely by NVDA's post-print rally lifting both its direct weight and its dollar contribution to the cluster. This is the book's single largest true factor bet and it just got larger on good news, which is precisely when concentration risk is easiest to ignore.

## 4. Geographic exposure and currency risk

Unchanged. US-domiciled/USD-denominated: NVDA, OMCL, XLE, VTI's underlying holdings. Direct FX exposure: VXUS (30.49% of equity) across developed and EM ex-US currencies. No dedicated FX hedge exists or is warranted at this size (~$13.56) — flagged for completeness, not as an action item.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Basis |
|---|---|---|
| NVDA | Low-Medium, elevated near-term | Growth-multiple name, more duration-sensitive than value, though last night's print was fundamentals-driven, not rate-driven |
| VTI | Medium | Broad market, moderate aggregate duration exposure via growth/tech tilt |
| VXUS | Low-Medium | Value/financials-weighted internationally, historically less duration-sensitive |
| OMCL | Medium | Small-cap growth names carry above-average discount-rate sensitivity |
| XLE | Low / near-zero-to-negative | Oil-price and demand-driven, not discount-rate math — the book's best natural rate-shock hedge |

Rates were **re-pulled live this run** after a two-run gap: 10yr 4.65% (down from the 8/21 high of 4.75%), 30yr ~5.18% — both clear of rule 6a's 4.75%/5.25% thresholds. The read is calm, but **Fed Chair Warsh's Jackson Hole speech is tomorrow, 8/28** — the specific dated catalyst this framework exists to watch for, not a hypothetical one. A calm pre-event reading is not the same thing as a resolved risk.

## 6. Recession stress test — estimated drawdown

Unchanged ranges — no new information moves these estimates, though every position's starting cushion (or lack of one) has shifted with today's prices:

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -40% to -50% | High-beta AI/semis name, MS's DCF gap ~32% overvalued at base case and widening further post-pop — the print was fundamentally strong but the stock re-rated on top of an already-stretched multiple |
| OMCL | -35% to -45% | Small-cap growth healthcare-tech; thin liquidity amplifies drawdowns; already -29.2% from cost with no recession priced in |
| VTI | -25% to -35% | Broad US market, modestly worse than average given elevated tech/AI look-through weight |
| VXUS | -25% to -35% | Similar broad-market range; partial FX-driven offset or worsening depending on shock origin |
| XLE | -30% to -40% | Demand-destruction risk in a genuine recession, though a supply-shock-driven recession could see XLE outperform — scenario-dependent |

**Weighted portfolio estimate: roughly -30% to -35% on the $44.46 equity book (~-$13 to -$16)** before the ~$6 deployable cash and untouched ~$50 reserve are considered. NVDA's improved cushion (+11.3% above cost vs. essentially flat a week ago) means a -40% to -50% shock from today's price would still land it roughly -33% to -44% below the original average cost — a meaningfully better starting point than before the print, but the magnitude of the estimated shock itself is unchanged.

## 7. Liquidity risk rating by holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | Very high (Low risk) | One of the largest, most liquid ETFs in existence |
| VXUS | Very high (Low risk) | Large, liquid international ETF |
| XLE | High (Low risk) | Large, liquid sector SPDR |
| NVDA | High (Low risk) | Mega-cap, extremely high daily volume — today's post-print volume is elevated, effective spreads should be normal-to-tight given the size of the move |
| OMCL | Medium (Medium risk) | Small/mid-cap healthcare-tech — wider spreads, more gap risk than the book's other four holdings |

## 8. Single stock risk and position sizing

NVDA remains **well inside every standing trigger**, though two of the three read differently than 24 hours ago: single-name weight is 12.52% of equity (18-20% cap, ample buffer, actually narrower in absolute terms than yesterday only because equity's total base grew too); combined NVDA+OMCL is 20.48% of equity (25% cap, ~4.52pp buffer, **narrower than yesterday's ~4.9-5.1pp** because NVDA's rally outpaced OMCL); and the pool-drift/underweight framework is **resolved**, not just wider, per BR's target revision above. **No sizing change recommended.** OMCL remains small in dollar terms (~$3.54, 7.96% of equity) but carries the highest risk-per-dollar in the book: -29.2% underwater, no structural catalyst identified, next print not until 11/4. This desk's one live recommendation, unchanged from prior reports: if NVDA's rally continues into and through tomorrow's Jackson Hole event, re-check the combined 25% trigger specifically at the next run rather than assuming yesterday's wider buffer still holds — it already didn't, once.

## 9. Tail risk scenarios with probability estimates

1. **A hawkish or ambiguous Jackson Hole surprise from Warsh tomorrow (8/28) moves long yields sharply, tripping rule 6a.** **~15-20%**, elevated to a dated, T-1 event from a standing background risk — this is the most actionable, nearest-dated tail risk on the book right now, and the one with genuinely zero equities-only hedge.
2. **NVDA's post-print rally reverses sharply** (a "sell the good news" move materializing a day or two late, as has happened with other prints this cycle). **~15-20%** — the print itself de-risked the fundamental case, but a multiple that widened further on top of an already-stretched DCF gap (~32% overvalued) is not immune to a reversal on no new information.
3. **NVDA CDS confirms a fresh move toward/through the 82bps 7/27 record**, formalizing the credit-equity divergence flagged above. **Probability genuinely unknown** — this is a persistent, multi-run data-sourcing gap, not a resolved-low-probability call, and that unknowability itself is the finding worth repeating rather than glossing over.
4. **A fresh Hormuz/Red Sea escalation.** **~10-15%**, modestly lower than the prior 15-20% — Iran and Oman have moved from "discussing a framework" to actively negotiating a temporary shipping corridor (with a mine-clearing component), a genuine if partial de-escalation. Still unsigned, still not a full reopening, rule-3 OXY veto unchanged.
5. **An OMCL-specific negative catalyst** before the 11/4 print. **~5-10%**, unchanged, low probability but landing on an already-impaired -29.2% cost basis if it occurs.

## 10. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **Look-through AI/tech concentration (~31.9% of equity).** The only equities-only hedge available is continued diversification into OMCL/XLE-type names rather than adding to VTI, VXUS, or NVDA at current levels — this book has not added to any of the three correlated-cluster positions since inception, which is itself the passive hedge in place. No incremental action recommended today, but flagging that this lever gets weaker every time NVDA's own appreciation (not a purchase) pushes the cluster's weight up further, as it did again today.
2. **Jackson Hole rate event (8/28).** XLE remains the book's best natural rate hedge (near-zero/negative duration sensitivity), already held at 12.06% of equity. No incremental action available or warranted at this size before a single dated speech — noting the exposure exists, not proposing to trade around a 24-hour window.
3. **NVDA credit-equity divergence / CDS near record wides.** No direct equities-only hedge exists for credit risk in a single name without reducing the position itself, which the trader has already and repeatedly declined (rule 15, most recently reaffirmed 8/27). The honest statement: this risk is currently unhedgeable under the account's mandate, and the correct response is awareness, not false comfort that a strong print resolved it.

## 11. Rebalancing suggestions

**No rebalancing recommended today.** Current vs. BR's pool targets (NVDA target revised 15%→11% this morning): VTI 32.58% (target 30%, +2.58pp), VXUS 26.87% (target 25%, +1.87pp), NVDA 11.03% (target 11%, essentially at target for the first time in weeks), OMCL 7.01% (target 10%, -2.99pp under), XLE 10.63% (target 10%, +0.63pp), cash 11.89% (10% floor, +1.89pp buffer). Nothing crosses a hard trigger. Worth stating plainly: NVDA landing "at target" today is the product of a policy change and a price rally arriving on the same morning, not evidence that the position was ever being actively sized toward that number — the same discipline should apply to reading it as a validation. OMCL remains the furthest position from its target, in the wrong direction (underweight, not overweight), consistent with its status as the book's only real value opportunity if a fresh catalyst ever clears rule 6.

---

*BW Risk Assessment — radical transparency, no softened warnings. Filed 2026-08-27 ~10:41 ET.*
