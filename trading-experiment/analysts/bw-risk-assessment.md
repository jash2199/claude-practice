# BW Risk Assessment — Risk Management Report
**Date: 2026-08-25 (~14:41 ET, Tuesday)** — the last trading session before NVDA/CRWD's 8/26 after-market print (T-1). Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. All weights recomputed fresh this run, not carried from BR/MS/GS/JPM. Prior BW report: 2026-08-25 ~10:42 ET (Grade C).

---

## Overall Portfolio Risk Grade: **C** (held, unchanged — but on watch)

## Single biggest risk right now
**NVDA reports tomorrow (8/26) after the close — now literally the next trading session — and this book still has zero hedging capacity for it under the equities-only mandate.** What's new and worth flagging plainly today: the classic pre-print stress pattern showed up for the first time this week. VIX jumped **+4.76% to 15.85** today — the sharpest single-day vol move this desk has logged in weeks — while NVDA itself simultaneously rallied further, live **$212.73, +2.04% vs. Monday's $208.48 close** (on top of yesterday's +1.32%). That combination — the underlying grinding higher while the market's fear gauge rises into the event — is not reassuring; it means more directional risk is now priced into tomorrow's print than was priced in yesterday, on both a "beat gets sold" and a "miss gets crushed" basis. Radical transparency: a rallying position with rising implied fear around it is not a safer setup than a flat one, even though every trigger-buffer number below mechanically looks slightly better today.

Compounding factors, status this run:
1. **NVDA/CRWD report Wednesday 8/26 after the close — T-1.** Per the standing NVDA earnings contingency plan (state.md rule 15), no pre-earnings trim, no pre-earnings add — this desk is not relitigating that call, only restating the exposure it leaves open on its last day live before the event.
2. **VIX genuinely rising into the print, not just "modestly elevated."** 15.85 today (+4.76%) is a real escalation from the flat-to-calm 14.25-15.9 range this desk has logged since 8/17 — the first live signal this week that the options market is pricing more, not less, event risk as the print approaches.
3. **Rule 6a rate-shock trigger: still improving, now two consecutive sessions.** 10yr eased further to **4.66%** intraday (from Monday's 4.704% settled close); 30yr **held steady at 5.23%**, still under the 5.25% line. Both remain comfortably clear of their thresholds — the one risk factor genuinely de-risking into the event. Note: today's reads are live/intraday, not yet settled closes, so the "two consecutive closes" clock for a reversal doesn't reset until the session closes clean.
4. **NVDA/OMCL pool-drift buffer widened again, purely on price — same caveat as this morning.** NVDA now **10.51% of pool** (this desk's tracked ~10% floor), buffer **~0.51pp**, up from this morning's ~0.44pp and Monday's ~0.34-0.38pp — three consecutive readings improving, and all three purely a function of NVDA's price grinding higher, not any deliberate rebalancing. A buffer that only improves because the underlying rallied is not the same as a buffer earned by de-risking.
5. **NVDA CDS spread: now an 8th-consecutive-cycle-old data gap, and today's WebSearch actively surfaced a wrong narrative rather than a fresh number.** No dated print more recent than 8/18's 80.77bps was found. Worse: this run's search returned a Bloomberg-sourced claim that NVDA has fallen "seven straight trading days, marking the stock's longest losing streak since 2022" — flatly contradicted by this desk's own live Robinhood read today (+2.04%) and the prior report's (+1.32% yesterday). Logging this explicitly as a concrete, dated example of exactly the stale/wrong-media-narrative risk rule 4 exists to guard against, one day before a binary event where a bad narrative could otherwise get repeated uncritically.
6. **OMCL's unrealized loss deepened further.** Live $33.45 vs. avg cost $46.99 → **-28.8%**, worse than this morning's -27.2% and continuing a multi-session no-catalyst drift. Still the book's largest single detractor by percentage, and now closer to a fresh drawdown low than at any point this desk has logged.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Binary-event stacking (NVDA/CRWD print, zero hedge capacity) | 🔴 High | T-1; VIX rising into the event for the first time this week is a real, not cosmetic, escalation |
| Pre-print volatility regime | 🔴 High (newly escalated) | VIX 15.85, +4.76% today — sharpest single-day move logged in weeks, right where the earnings contingency plan (rule 15) will actually be tested |
| NVDA pool-drift trigger proximity | 🟡 Medium-High (mechanically easing) | 10.51% actual vs. ~10% floor — ~0.51pp buffer, widened three straight readings, entirely price-driven, not a deliberate de-risking signal |
| Correlation / lack of true diversification | 🔴 High | All five holdings share directional beta to the same handful of macro factors (rates, AI-sentiment, oil); no true ballast position exists in an equities-only, no-bond book |
| Look-through AI/tech concentration | 🔴 High | ~31.4% of equity exposed to AI/semis/mega-cap-tech once VTI's/VXUS's embedded weights are added to NVDA direct (detail below) — still nearly triple the headline NVDA line |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 19.99% of equity combined, ~5.01pp under the 25% combined trigger |
| OMCL unrealized loss | 🟠 Medium-High (deepening further) | -28.8% since cost, no identified structural catalyst, small-cap liquidity adds gap-risk on any real news |
| Interest-rate / duration sensitivity | 🟢 Low-Medium (improving, unsettled) | Both 10yr and 30yr intraday reads sit clear of rule 6a's thresholds for a second straight session, but today's reads aren't settled closes yet |
| Data-quality risk (CDS sourcing + narrative accuracy) | 🟠 Medium-High (worse, not just stale) | 8th+ consecutive cycle with no fresh NVDA CDS print, and today's search actively returned a demonstrably wrong price-direction narrative |
| Liquidity risk (book-wide) | 🟢 Low | Four of five holdings are mega-cap/large-ETF liquid; OMCL is the one exception (see below) |
| Geographic/currency risk | 🟡 Medium | ~30.7% of equity (VXUS) carries direct FX exposure; NVDA/XLE carry indirect global-demand exposure without direct currency translation risk |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-08-25 ~14:41 ET)

Pool ≈ equity $44.2284 + deployable cash $6.00 = **$50.2284** (base $50 + ~$0.23 accumulated profit). Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages below unless marked "% of account."

| Holding | Live price | Chg vs. prior close | Value | % of equity | % of pool |
|---|---|---|---|---|---|
| NVDA | $212.73 | +2.04% | $5.28 | 11.94% | 10.51% |
| VTI | $377.83 | +0.20% | $16.36 | 36.98% | 32.56% |
| VXUS | $88.01 | +0.92% | $13.60 | 30.75% | 27.08% |
| OMCL | $33.45 | -3.49% | $3.56 | 8.05% | 7.09% |
| XLE | $62.60 | -0.81% | $5.43 | 12.28% | 10.82% |
| Cash | — | — | $6.00 | — | 11.95% |

## 2. Correlation analysis between holdings

This book has **no genuine ballast position** — every holding is a positive-beta equity exposed to the same handful of macro drivers, just with different sensitivities:
- **NVDA, VTI, VXUS** move together on broad risk sentiment and AI-multiple sentiment specifically (VTI's own look-through AI weight makes it a partial NVDA proxy, not an independent asset).
- **OMCL** is the book's best true diversifier against the chip/AI factor (healthcare-tech, idiosyncratic drivers) — but it is currently *negatively* correlated with the book's P&L for the wrong reason (a standalone -28.8% drawdown, deepening further today), not because it's hedging anything today.
- **XLE** is the book's best true diversifier against the rate/tech factor (oil-cycle driven) — genuinely uncorrelated on most days; today it's the lone red large holding alongside OMCL while NVDA/VTI/VXUS all rallied, more evidence of a book that rarely sees genuine dispersion.
- **Today is a useful live data point**: NVDA/VTI/VXUS all green together (the AI/broad-market factor), OMCL/XLE both red but for unrelated reasons (idiosyncratic drift vs. oil-cycle softness) — the book's two "diversifiers" aren't even correlated with *each other*, which is good for true diversification but means neither is currently offsetting the other's drag. **Net: 2 of 5 holdings (OMCL, XLE) provide real diversification value; the other 3 (NVDA, VTI, VXUS) are correlated expressions of the same US/AI-equity factor.**

## 3. Sector concentration risk

Face-value sector split (equity basis): AI/semis (NVDA) 11.94% direct; broad-market ETFs (VTI/VXUS) 67.73% (diversified by construction, but see look-through below); healthcare-tech (OMCL) 8.05%; energy (XLE) 12.28%.

**Look-through concentration is the number that matters (rule 8).** Using BR's own cited data point (AI-adjacent names ~36% of the Morningstar US index, the most concentrated since 1932) as a proxy for VTI's embedded AI/mega-cap-tech weight, and a materially lower ~20% estimate for VXUS's ex-US, less-tech-heavy composition:
- NVDA direct: 11.94%
- VTI embedded (~36% of its 36.98% equity weight): ~13.3%
- VXUS embedded (~20% of its 30.75% equity weight): ~6.2%
- **Total look-through AI/mega-cap-tech exposure: ~31.4% of equity** — nearly triple the headline NVDA line, and comfortably the book's single largest true factor bet, concentrated in the one trading session before that factor's binary risk peaks.

## 4. Geographic exposure and currency risk

- **US-domiciled, USD-denominated:** NVDA, OMCL, XLE, and VTI's underlying holdings — no direct FX translation risk, though NVDA and XLE both carry indirect exposure to global demand (China chip demand, global oil demand) without currency pass-through.
- **Direct FX exposure:** VXUS (30.75% of equity) holds developed and emerging-market ex-US equities — a broad basket across EUR, JPY, GBP, and EM currencies. This is a genuine diversifier against a USD-specific shock, but also means ~31% of the book's equity has a currency-translation risk layer the other four holdings don't carry.
- **No dedicated FX hedge exists or is warranted at this size** — the position is small enough (~$13.60) that hedging costs would exceed any realistic benefit; flagged for completeness, not as an action item.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | High | Growth/duration name; MS's own DCF (WACC 11%) shows the fair-value gap moves materially with discount-rate assumptions |
| OMCL | High | Small-cap growth healthcare-tech; MS's DCF (WACC 9%) is similarly duration-sensitive, and thinner liquidity amplifies rate-driven multiple compression |
| VTI | Medium | Broad market with a heavy growth/tech tilt (see look-through above) — more rate-sensitive than a pure value index would be |
| VXUS | Medium-Low | More value/financials-weighted internationally than VTI; historically less duration-sensitive than US mega-cap-tech-heavy indices |
| XLE | Low / near-zero-to-negative | Value/cyclical, driven by oil price and demand expectations, not discount-rate math — this is exactly why it's the book's best rate-shock hedge |

Today's intraday reads (10yr 4.66%, 30yr 5.23%) extend the improving trend for a second straight session, but neither is a settled close yet, and Friday's Jackson Hole speech from Fed Chair Warsh remains the next real test — not a closed question.

## 6. Recession stress test — estimated drawdown

Rough beta-adjusted drawdown estimates under a genuine recession/multiple-compression scenario (not a base case — a stress test):

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -40% to -50% | High-beta AI/semis name already trading at a ~28.9% premium to MS's DCF fair value before any recession discount |
| OMCL | -35% to -45% | Small-cap growth healthcare-tech; thin liquidity amplifies drawdowns; already -28.8% from cost with no recession priced in yet |
| VTI | -25% to -35% | Broad US market, historical bear-market range, modestly worse than average given its elevated tech/AI look-through weight |
| VXUS | -25% to -35% | Similar broad-market range; partial offset possible if a US-specific shock drives capital rotation abroad, partial worsening from FX drag if the shock is global |
| XLE | -30% to -40% | Energy demand destruction in a genuine recession is severe historically, though a supply-shock-driven recession (e.g., a Hormuz escalation) could see XLE outperform the book even as the broader market falls — scenario-dependent, not a clean hedge in every recession type |

**Weighted portfolio estimate: roughly -30% to -35% on the $44.23 equity book (~-$13 to -$15) in a genuine recession scenario**, before the ~$6 deployable cash and untouched ~$50 reserve are considered. The reserve structurally caps the experiment's total downside regardless of any single stress scenario — worth restating plainly since it's easy to lose sight of amid position-level percentages.

## 7. Liquidity risk rating by holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | Very high (Low risk) | One of the largest, most liquid ETFs in existence |
| VXUS | Very high (Low risk) | Large, liquid international ETF |
| XLE | High (Low risk) | Large, liquid sector SPDR |
| NVDA | High (Low risk) | Mega-cap, extremely high daily volume — though tomorrow's post-print session will see materially wider effective spreads intraday, a real if temporary liquidity-cost consideration |
| OMCL | Medium (Medium risk) | Small/mid-cap healthcare-tech — wider spreads, more gap risk on news/earnings than the book's other four holdings; the one name where a bad-news gap could meaningfully exceed the options-free execution price the trader would actually get |

## 8. Single stock risk and position sizing

NVDA and OMCL are this book's only two single-name idiosyncratic risks. **NVDA is well inside every standing trigger** (10.51% of pool vs. the ~10% floor this desk tracks, ~0.51pp buffer; 11.94% of equity vs. the 18-20% overweight cap; 19.99% combined with OMCL vs. the 25% cap) — sizing discipline here has held, though today's improving buffers are entirely price-driven, not the product of any deliberate de-risking, and a single adverse post-print session could reverse three sessions of buffer-widening in one move. **OMCL is small in dollar terms (~$3.56, 8.05% of equity) but carries the highest risk-per-dollar in the book**: -28.8% underwater and deepening, no structural catalyst identified, next print not until 11/4 (71 days out, outside near-term binary risk), small-cap liquidity. No sizing change recommended today — position is already half-size by original design and the OMCL earnings contingency plan's structural-break-only standard still applies with no break identified — but this desk will keep stating plainly that OMCL is the book's clearest "small position, large idiosyncratic risk" line item, now at a fresh drawdown low.

## 9. Tail risk scenarios with probability estimates

1. **NVDA post-print move exceeds 2x the options-implied ~5.3-5.6% move (i.e., >~11%), either direction.** Rough tail-probability estimate based on typical post-earnings distribution shapes for high-implied-move mega-caps: **~10-15%.** Zero hedge capacity either direction under the equities-only mandate — this is pure, unmanaged binary exposure on ~$5.28 of the book, now one session away.
2. **Rule 6a rate-shock trigger fires within the next 2 weeks** (two consecutive closes above 4.75%/5.25%), catalyzed by a hawkish Jackson Hole surprise from a new Fed chair trying to establish credibility. **~15-20%**, ticked down slightly from this morning given a second straight session of readings clear of both thresholds, but Warsh's speech (8/28, 2 days after tomorrow's print) remains a real, dated re-test.
3. **A genuine, dated NVDA CDS re-widening toward/above the 82bps 7/27 record, confirmed by a real print rather than recycled or contradictory reporting.** Given today's sourcing actively surfaced a demonstrably wrong narrative (the "seven-day losing streak" claim), **probability is genuinely unknown** — and that unknowability, one session before a binary earnings event, is itself worth flagging as a distinct risk from the CDS level itself.
4. **A fresh Hormuz/Red Sea escalation** reversing the recent partial de-escalation, hitting broad risk sentiment while XLE's own directional response is ambiguous (could rally on oil-supply-shock fears or fall on broad risk-off, depending on which effect dominates). **~15-20%** over the next month, roughly unchanged from prior reads — status quo, still unsigned.
5. **An OMCL-specific negative catalyst** (contract loss, guidance cut, insider-sale pattern turning discretionary) before the 11/4 print. **~5-10%**, low probability but the position is now -28.8% underwater at a fresh drawdown low, so any real catalyst would land on an already-impaired cost basis.

## 10. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **NVDA/CRWD earnings binary risk (tomorrow AH, now T-1).** No direct equities-only hedge exists for a single-stock binary print without simply reducing the position — already considered and explicitly declined under rule 15's cost-benefit (small absolute size, JPM's WAIT call, BR's underweight flag). The only remaining equities-only lever is holding the ~$6 cash buffer intact through the print rather than deploying it into anything else today, which the book is already doing by default (rule 1 — no fresh catalyst for a new buy, and rule 2 would independently veto any new entry into a market with VIX actively rising).
2. **Look-through AI/tech concentration (~31.4% of equity).** The only equities-only hedge is continued, deliberate diversification into genuinely uncorrelated satellites rather than adding to VTI or NVDA at current levels — XLE and OMCL already serve this role; GEHC (healthcare, price-gated, pending) would extend it further if it ever fires. No new action recommended today, but this is the standing rationale for not adding to the core sleeve while it already sits over its BR targets (VTI +2.56pp, VXUS +2.08pp).
3. **Rate/duration sensitivity.** XLE is the book's natural, already-held rate hedge (low/negative duration sensitivity per §5) — no incremental action needed while today's rate data continued to improve, but this desk would flag XLE's role explicitly if rule 6a's trigger were to fire post-Jackson-Hole, rather than treating XLE purely as an energy/oil-cycle satellite.

## 11. Rebalancing suggestions

**No rebalancing recommended today** — rule 1 (no fresh catalyst) applies, and trading into the final session before a binary-event day is exactly the kind of reactive, pressure-driven decision the book's own contingency-plan discipline (rule 15) exists to avoid; a rising VIX into the print is, if anything, a reason for more caution about any discretionary move today, not less. For the record, current vs. BR's own pool targets: VTI 32.56% (target 30%, +2.56pp, inside band), VXUS 27.08% (target 25%, +2.08pp, inside band), NVDA 10.51% (target 15%, under formal review, deferred to 8/27), OMCL 7.09% (target 10%, -2.91pp under), XLE 10.82% (target 10%, +0.82pp, on target), cash 11.95% (10% floor, +1.95pp buffer). Nothing here crosses a hard trigger; the NVDA policy-target question stays deferred to the first post-print run per BR's own 8/27 timeline, and this desk will re-read the whole book fresh at that run rather than pre-judge it now.

---

*BW Risk Assessment — radical transparency, no softened warnings. Filed 2026-08-25 ~14:41 ET.*
