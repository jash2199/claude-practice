# BW Risk Assessment — Risk Management Report
**Date: 2026-08-28 (~10:41 ET, Friday)** — First report since Fed Chair Warsh's Jackson Hole speech (delivered ~10:00am ET, roughly 40 minutes before this report). Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Prior BW report: 2026-08-27 ~14:42 ET (Grade C).

---

## Overall Portfolio Risk Grade: **C** (held, unchanged for the fourth consecutive report)

## Single biggest risk right now
**Unchanged: look-through AI/mega-cap-tech concentration is ~31.9% of equity, and this book still has zero hedge capacity to offset it.** That fact didn't move today — but radical transparency also means reporting the risk that *didn't* materialize as loudly as the one that persists. Jackson Hole is now behind us, and the actual bond-market reaction was a **bear flattener, not the blowout the morning's headline framing implied**: 2-year yields rose ~8bps, the 10-year rose only ~2bps to ~4.696%, and the 30-year actually *fell* ~1.5bps. That is nowhere close to rule 6a's 4.75%/5.25% two-consecutive-close thresholds, and it is a materially calmer outcome than this desk's own report yesterday (~15-20% probability of a hawkish surprise tripping the trigger) had to price in as a live tail risk. Say the good news plainly: that risk passed clean. It does not change the underlying concentration problem, which is structural and was never contingent on Jackson Hole in the first place.

**Second, and now the more urgent of the two standing flags: NVDA's 5-year CDS spread has gone a full ten days with no confirmed fresh reading.** Independent WebSearch this run again found nothing dated later than 80.77bps (8/19). This is now the tenth-plus consecutive run this desk has hit the same wall, and JPM/MS have hit it too. At some point "still stuck" stops being an honest data-gap disclosure and starts being a process failure this book is tacitly accepting. This desk is naming it plainly rather than softening it further: **if no desk can source a live NVDA CDS print, that should be escalated as an explicit open question to Jash, not re-logged as routine for an eleventh time.**

Compounding factors, status this run (deltas vs. the 8/27 ~14:42 ET report):
1. **Jackson Hole tail risk: RESOLVED, cleanly, no trigger fired.** 10yr ~4.696% (rising ~2bps intraday, still ~5.4bps clear of the 4.75% line), 30yr actually eased. VIX held ~14.55-15.13 through the event itself — the "calm heading into a dated event" flag from yesterday did not turn out to be misplaced complacency; the event genuinely was modest.
2. **NVDA/CRWD earnings binary: still RESOLVED**, no change.
3. **NVDA+OMCL combined trigger: buffer widened, not narrowed, for the first time in several runs.** 20.49% of equity vs. the 25% cap (~4.51pp buffer) — up from yesterday afternoon's 20.61%/4.39pp, because NVDA pulled back today (-1.10%) while OMCL was roughly flat. Worth noting precisely because yesterday's report flagged the buffer narrowing at every single check — that pattern broke overnight, on price action alone, same as it built.
4. **NVDA pool weight: 11.04% vs. BR's 11% target — back to essentially exactly at target**, down from yesterday's modestly-above-target 11.12%. Same point as always: this is price-driven drift, not a decision, and it can just as easily tick back over next run.
5. **OMCL: unchanged, still the book's largest unrealized loss.** Roughly flat today (+0.06%), no structural catalyst, next print not until 11/4.
6. **Look-through AI/tech concentration: ~31.9% of equity, flat vs. yesterday's ~32.0%.** The needle didn't move; see below.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Look-through AI/tech concentration | 🔴 High | ~31.9% of equity (NVDA direct + VTI/VXUS embedded) — unchanged #1 standing risk |
| Correlation / lack of true diversification | 🔴 High | No bond ballast; only OMCL and XLE provide genuine diversification |
| NVDA credit-equity divergence (CDS) | 🟠 Medium-High | Stuck at 80.77bps (8/19) — now 10+ consecutive runs with no fresher data; genuinely a process gap, not just an open question |
| Jackson Hole rate event | 🟢 Resolved | Passed cleanly — bear flattener, 10yr ~4.696%, rule 6a not fired, no threat of firing on today's close at current levels |
| NVDA/CRWD earnings binary | 🟢 Resolved | No change — rule 15 remains closed |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.49% of equity combined, ~4.51pp under the 25% trigger — buffer widened today, first time in several runs |
| NVDA pool-drift vs. policy target | 🟢 Low | 11.04% vs. BR's 11% target — essentially exactly at target |
| OMCL unrealized loss | 🟠 Medium-High | -28.8% (approx.), unchanged, no identified catalyst before the 11/4 print |
| Liquidity risk (book-wide) | 🟢 Low | Four of five holdings mega-cap/large-ETF liquid; OMCL remains the exception |
| Geographic/currency risk | 🟡 Medium | ~30.5% of equity (VXUS) carries direct FX exposure — unchanged |
| Market-wide volatility regime | 🟢 Low | VIX ~14.55-15.13, held near a 2026 low straight through the Jackson Hole event itself |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-08-28 ~10:41 ET)

Pool ≈ equity $44.6704 + deployable cash $6.00 = **$50.6704** (base $50 + ~$0.67 accumulated profit). Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages below unless marked "% of pool."

| Holding | Live price | Chg vs. Thu close | Unrealized P&L vs. cost | Value | % of equity | % of pool |
|---|---|---|---|---|---|---|
| NVDA | $225.475 | -1.10% | +11.96% | $5.598 | 12.53% | 11.04% |
| VTI | $381.155 | +0.14% | +2.81% | $16.502 | 36.94% | 32.57% |
| VXUS | $88.030 | +0.11% | +4.63% | $13.602 | 30.45% | 26.84% |
| OMCL | $33.430 | +0.06% | -28.83% | $3.557 | 7.96% | 7.02% |
| XLE | $62.420 | +0.21% | +8.33% | $5.417 | 12.13% | 10.69% |
| Cash (deployable) | — | — | — | $6.00 | — | 11.84% |

Total account value $100.6704 (cash $56.00 + equity $44.6704), consistent with `get_portfolio`. NVDA's pullback today (-1.10%) is a genuine, if minor, decoupling from VTI/VXUS (+0.14%/+0.11%) — the correlated cluster doesn't always move in perfect lockstep intraday, though the multi-week directional relationship still holds (see below).

## 2. Correlation analysis between holdings

Same structural read as every prior run: **no genuine ballast position exists in this book**. NVDA/VTI/VXUS remain the correlated AI/broad-market-sentiment cluster over any meaningful window, even though today's specific print shows NVDA down while VTI/VXUS are up — a reminder that "correlated" doesn't mean "identical every single session," just that the underlying AI/mega-cap-tech factor exposure moves together over time. OMCL and XLE remain the two genuine diversifiers, both flat-to-modestly-positive today and uncorrelated with the NVDA-driven move. **Net: 2 of 5 holdings (OMCL, XLE) provide genuine diversification value; the other 3 (NVDA, VTI, VXUS) share one dominant factor.**

## 3. Sector concentration risk

Face-value: AI/semis (NVDA) 12.53% direct; broad-market ETFs (VTI/VXUS) 67.39%; healthcare-tech (OMCL) 7.96%; energy (XLE) 12.13%.

**Look-through concentration, same methodology as every prior run** (BR's ~36% AI-adjacent estimate for VTI's embedded weight; ~20% for VXUS):
- NVDA direct: 12.53%
- VTI embedded (~36% of 36.94%): ~13.30%
- VXUS embedded (~20% of 30.45%): ~6.09%
- **Total look-through AI/mega-cap-tech exposure: ~31.92% of equity** — essentially unchanged vs. yesterday's ~31.96%, still the single largest true factor bet in the book.

## 4. Geographic exposure and currency risk

Unchanged. US-domiciled/USD-denominated: NVDA, OMCL, XLE, VTI's underlying holdings. Direct FX exposure: VXUS (30.45% of equity) across developed and EM ex-US currencies. No dedicated FX hedge exists or is warranted at this size (~$13.60) — flagged for completeness, not as an action item.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Basis |
|---|---|---|
| NVDA | Low-Medium, elevated near-term | Growth-multiple name, more duration-sensitive than value |
| VTI | Medium | Broad market, moderate aggregate duration exposure via growth/tech tilt |
| VXUS | Low-Medium | Value/financials-weighted internationally, historically less duration-sensitive |
| OMCL | Medium | Small-cap growth names carry above-average discount-rate sensitivity |
| XLE | Low / near-zero-to-negative | Oil-price and demand-driven, not discount-rate math — the book's best natural rate-shock hedge |

**Jackson Hole outcome, live-verified this run:** Warsh's first speech as Fed Chair avoided explicit forward guidance but struck a hawkish tone on inflation ("underlying trends... do not tell me that underlying trends have meaningfully improved"). The actual rates reaction was a **bear flattener**: 2yr +~8bps, 10yr +~2bps to ~4.696%, 30yr -~1.5bps. This is a real, if modest, repricing of near-term Fed policy expectations — but it is not the "yields moved substantially higher across the curve" framing some headline coverage used, and it leaves rule 6a's 4.75%/5.25% two-consecutive-close thresholds untested (10yr sits ~5.4bps below its line; 30yr moved the wrong direction to threaten its line at all). **Rule 6a: not fired, and today's actual reaction makes it meaningfully less likely to fire on today's close than the pre-speech trend line suggested.**

## 6. Recession stress test — estimated drawdown

Unchanged ranges — no new information moves these estimates:

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -40% to -50% | High-beta AI/semis name; still trading at a real premium to MS's post-print DCF fair value despite the gap having narrowed sharply |
| OMCL | -35% to -45% | Small-cap growth healthcare-tech; thin liquidity amplifies drawdowns; already -28.8% from cost with no recession priced in |
| VTI | -25% to -35% | Broad US market, modestly worse than average given elevated tech/AI look-through weight |
| VXUS | -25% to -35% | Similar broad-market range; partial FX-driven offset or worsening depending on shock origin |
| XLE | -30% to -40% | Demand-destruction risk in a genuine recession, though a supply-shock-driven recession could see XLE outperform |

**Weighted portfolio estimate: roughly -30% to -35% on the $44.67 equity book (~-$13 to -$16)** before the ~$6 deployable cash and untouched ~$50 reserve are considered. NVDA's cushion (+12.0% above cost) means a -40% to -50% shock from today's price would still land it roughly -33% to -45% below the original average cost.

## 7. Liquidity risk rating by holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | Very high (Low risk) | One of the largest, most liquid ETFs in existence |
| VXUS | Very high (Low risk) | Large, liquid international ETF |
| XLE | High (Low risk) | Large, liquid sector SPDR |
| NVDA | High (Low risk) | Mega-cap, extremely high daily volume |
| OMCL | Medium (Medium risk) | Small/mid-cap healthcare-tech — wider spreads, more gap risk than the book's other four holdings |

## 8. Single stock risk and position sizing

NVDA remains **well inside every standing trigger**: single-name weight 12.53% of equity (18-20% cap, ample buffer); combined NVDA+OMCL 20.49% of equity (25% cap, ~4.51pp buffer, wider than yesterday); pool-drift 11.04% vs. BR's 11% target (essentially exact). **No sizing change recommended.** OMCL remains small in dollar terms (~$3.56, 7.96% of equity) but carries the highest risk-per-dollar in the book: -28.8% underwater, no structural catalyst identified, next print not until 11/4 — this desk continues to flag it as the book's biggest single vulnerability in relative terms even though its absolute dollar exposure is small.

## 9. Tail risk scenarios with probability estimates

1. **NVDA's post-print rally reverses sharply** (a delayed "sell the good news" move). **~15-20%**, unchanged — MS's DCF gap narrowed to ~7% base-case post-print (from ~32% pre-print), which cuts both ways: less downside cushion at today's price, but also less of a pure "overvaluation reversion" case than existed before the print.
2. **NVDA CDS confirms a fresh move toward/through the 82-83.7bps records.** **Probability genuinely unknown** — this is now a 10+-run, cross-desk data-sourcing gap, not a resolved-low-probability call. Repeating that unknowability honestly matters more than assigning a false-precision number, but the staleness itself is now the story, not just the underlying credit risk.
3. **A fresh Hormuz/Red Sea escalation.** **~10-15%**, unchanged — the Iran-Oman temporary-corridor agreement (8/26) is still not a full/permanent reopening. Rule-3 OXY veto unchanged.
4. **A delayed hawkish re-pricing following Jackson Hole** (markets take a day or two to fully digest Warsh's tone even though today's immediate reaction was modest). **~10%**, newly flagged — a bear flattener on the day of the speech doesn't rule out a slower-building repricing over the coming week; worth a fresh check at the next run rather than treating today's modest reaction as the final word.
5. **An OMCL-specific negative catalyst** before the 11/4 print. **~5-10%**, unchanged, low probability but landing on an already-impaired -28.8% cost basis if it occurs.

## 10. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **Look-through AI/tech concentration (~31.9% of equity).** The only equities-only hedge available is continued diversification into OMCL/XLE-type names rather than adding to VTI, VXUS, or NVDA at current levels — unchanged from every prior report. No incremental action recommended today.
2. **NVDA credit-equity divergence / CDS data gap.** No direct equities-only hedge exists for credit risk in a single name without reducing the position itself, which the trader has already and repeatedly declined (rule 15). Restating plainly: this risk is currently unhedgeable and unmeasurable under the account's mandate — and now compounded by a genuine sourcing failure across every desk that's tried to track it.
3. **Rate-shock residual risk (post-Jackson-Hole).** XLE remains the book's best natural rate hedge (near-zero/negative duration sensitivity), already held at 12.13% of equity. Today's modest reaction lowers the near-term urgency of this hedge but doesn't eliminate it — the delayed-repricing tail risk (§9.4) is exactly why this stays on the top-3 list rather than dropping off entirely.

## 11. Rebalancing suggestions

**No rebalancing recommended today.** Current vs. BR's pool targets (NVDA target 11%): VTI 32.57% (target 30%, +2.57pp), VXUS 26.84% (target 25%, +1.84pp), NVDA 11.04% (target 11%, +0.04pp — essentially exact), OMCL 7.02% (target 10%, -2.98pp under), XLE 10.69% (target 10%, +0.69pp), cash 11.84% (10% floor, +1.84pp buffer). Nothing crosses a hard trigger. OMCL remains the furthest position from its target, in the wrong direction (underweight, not overweight), consistent with its status as the book's only real value opportunity if a fresh catalyst ever clears rule 6.

---

*BW Risk Assessment — radical transparency, no softened warnings. Filed 2026-08-28 ~10:41 ET.*
