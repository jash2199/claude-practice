# BW Risk Assessment — Risk Management Report
**Date: 2026-09-21 (Monday), ~10:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report since 9/18 ~14:44 ET (Friday) — a full weekend plus this morning's two trader runs have passed with no risk-desk check-in until now.

---

## Overall Portfolio Risk Grade: **D** (held flat vs. 9/18's close)

## Single biggest risk right now
**The book is still running an equities-only, ~12%-cash-buffer portfolio through a live, ongoing US-Iran shooting war, and today's quiet tape is not evidence the risk has receded — it's one calm session in a conflict that has already produced a US-Israel war since February, direct US strikes on Iranian tankers (9/2), and reported strikes on an Iranian wedding (per CNN, early September) between this desk's last two reports.** A fresh projectile struck another tanker entering the Strait this morning (two crew injured, WSLS/AP) — a continuation in degree, not a new category, consistent with this desk's own dateline discipline — but the underlying conflict this book is exposed to is materially graver than a single "second tanker struck" headline conveys in isolation. Brent/oil eased today and the broader tape rallied (Dow +0.61%, S&P +0.67%, Nasdaq +0.77%), which is a genuine, welcome de-risking on the surface, but it reflects one session's price action, not a resolution of the underlying war — and XLE, this book's only structural hedge against exactly this scenario, is still the lone red position today (-1.75%) even as everything else rallied. That gap between the risk and its hedge is now a persistent, multi-week pattern, not a one-off.

---

## Portfolio snapshot (live, 2026-09-21 ~10:42 ET)

`get_portfolio`: total_value **$100.1662** (cash $56.01 + equity $44.1562). Pool ≈ **$50.1662, a +$0.1662 (+0.33%) accumulated profit** since the $50 base was seeded. Deployable cash $6.01 (~11.98% of pool), essentially at BR's 11% reserve floor.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/18 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $224.08 | $5.5630 | 12.60% | 11.09% | +11.26% | +0.81% |
| VTI | 0.036690 | $379.185 | $13.9117 | 31.51% | 27.73% | +2.37% | +1.00% |
| VXUS | 0.154525 | $86.89 | $13.4267 | 30.42% | 26.77% | +3.28% | +1.18% |
| OMCL | 0.106405 | $32.385 | $3.4459 | 7.81% | 6.87% | **-31.08%** | +0.48% |
| XLE | 0.086775 | $62.81 | $5.4503 | 12.34% | 10.87% | +9.01% | **-1.75%** |
| GEHC | 0.036393 | $64.7903 | $2.3579 | 5.34% | 4.70% | -5.68% | +1.03% |
| Cash (deployable) | — | — | $6.01 | — | 11.98% | — | — |

NVDA+OMCL combined **~20.40% of equity** — 25% concentration trigger clean, ~4.60pp buffer. NVDA alone **~12.60%** — 18-20% trigger clean. OMCL DCA gate (rule 18): pool needs **~$2.33** more of accumulated profit before it can fire.

---

## Correlation analysis between holdings

Unchanged structurally from 9/18's read, and today's tape is a live illustration of it:
- **NVDA + VTI + VXUS + GEHC move together in a broad risk-on/risk-off tape** — all four were green today by roughly similar magnitude (+0.8% to +1.2%), the mirror image of a broad selloff. VTI's top holdings overlap directly with NVDA's AI thesis; VXUS correlates ~0.7-0.8 with US equities in a global panic; GEHC has shown no defensive behavior in this book's own drawdowns.
- **XLE is the one position with a plausible negative-to-uncorrelated beta in a supply-shock scenario**, but today is the cleanest recent demonstration of its other, more dangerous correlation mode: it was the *only* red position on a day everything else rallied, moving on its own oil-driven logic rather than with the broad tape. In a genuine liquidity panic (Scenario C below), that independence inverts and XLE falls with everything else.
- **OMCL remains the closest thing to an idiosyncratic outlier** — its -31% drawdown is driven by its own 7/30 guide-down, not macro, which is the one thing keeping it from compounding the rest of the book's correlated risk.

## Sector concentration risk

| Sector/factor (look-through) | Approx. weight (% of equity) | Note |
|---|---|---|
| Tech / AI / semis (NVDA direct + est. tech slice of VTI/VXUS) | **~28.1% of equity** | Flagged for a 6th consecutive report; essentially unchanged in substance, ticked up slightly on NVDA's outperformance today |
| Energy (XLE) | ~12.3% | Sole hedge sleeve; the one holding that didn't participate in today's rally |
| Healthcare (GEHC + OMCL) | ~13.1% | Split between a modestly undervalued name (GEHC) and a deep-discount, high-drawdown name (OMCL) |
| Broad market / diversified (residual VTI/VXUS, ex-tech-slice) | ~46.4% | Largest single bucket, still USD/global-equity beta and not independent of the tech factor above given index construction |

Tech/AI look-through concentration remains this desk's standing structural flag. BR's 9/17 target revision (NVDA 11%→10%) addressed the headline NVDA number, not this look-through figure, which lives mostly inside VTI/VXUS and can't be trimmed by touching NVDA alone.

## Geographic exposure and currency risk

~69.6% of equity (VTI+NVDA+OMCL+GEHC) is USD/US-domiciled; ~30.4% (VXUS) is unhedged ex-US, direct FX exposure to a weakening non-USD basket if the Fed's hiking cycle (a confirmed 25bp hike, 9/16, first since 2023) continues to support the dollar. No material change since 9/18 — still a watch item, not a drift breach.

## Interest rate sensitivity per position

- **NVDA**: high — long-duration growth multiple; MS's DCF gap widened again to -7.7% purely on price.
- **VTI**: high — mega-cap-tech-heavy index, same duration exposure as NVDA at the aggregate level.
- **VXUS**: moderate — lower average multiple than US, but adds FX/rate-differential sensitivity.
- **OMCL**: high — small-cap, no earnings cushion at this drawdown level, disproportionately hurt by a higher cost of capital.
- **XLE**: low-moderate — driven primarily by oil price, not discount rate, though financing costs matter for E&P capex; MS's composite gap actually *narrowed* to essentially fair value (-0.8%) today on the oil pullback.
- **GEHC**: moderate — established cash-flow generator, less rate-sensitive than growth names but not immune.

**Live rate context:** per WebSearch this run, Treasury yields were reported "slipping" today alongside oil (Yahoo/CNBC), with the freshest confirmed settled-close figures still straddling the 5% line ambiguously (one source: 5.01% as of 9/18; FRED: 4.94% on 9/17) — the same unresolved data-quality gap this desk and MS have both flagged for two weeks running. **No primary source available from this environment to break the tie** (per the standing Operational note). What is clear: rule 6a's pause (fired 9/2, threshold 4.75%) remains comfortably, unambiguously in effect regardless of which side of 5% today's close lands on — nothing here changes that pause's status.

## Recession stress test — estimated drawdown

Unchanged methodology (equity-value shocks, no rebalancing assumed), re-run on today's live weights:
- **Scenario A — garden-variety recession (broad equities -25%, energy -15%, healthcare -10%):** NVDA/VTI/VXUS/GEHC segment (~79.9% of equity, ~$35.27) down ~25% ≈ -$8.82; XLE (~12.3%, ~$5.45) down ~15% ≈ -$0.82; OMCL (~7.8%, ~$3.45) down ~10% from an already-depressed base ≈ -$0.34. **Total equity drawdown ≈ -$9.98 (-22.6% of equity, ~-19.9% of the $50.17 pool).**
- **Scenario B — supply-shock stagflation (oil spike, broad equities -15%, energy +20%):** NVDA/VTI/VXUS/GEHC down ~15% ≈ -$5.29; XLE up ~20% ≈ +$1.09; OMCL flat-to-down ~5% ≈ -$0.17. **Net equity impact ≈ -$4.37 (-9.9% of equity, ~-8.7% of pool)** — the scenario XLE is explicitly held to soften, and it still works on paper.
- **Scenario C — Hormuz escalation → correlation-to-1 broad panic (XLE's hedge property inverts):** uniform -20% shock across all six positions. **Total equity drawdown ≈ -$8.83 (-20% of equity, ~-17.6% of pool).** Still this desk's most-worried-about scenario, for the same reason stated 9/18: it's the one this book's structure was not actually designed to survive, and today's headline (an active shooting war one calm session doesn't resolve) points toward its ingredients persisting, not fading.

Account-level (including the untouchable ~$50 reserve): all figures above roughly halve, since flat reserve cash dilutes any trading-pool loss across the full ~$100 account.

## Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| VTI, VXUS | 🟢 Very high | Deep, liquid ETFs, no concern at this position size |
| NVDA | 🟢 Very high | Mega-cap, no concern |
| XLE | 🟢 High | Liquid sector ETF |
| GEHC | 🟡 Moderate | Large-cap but lower average daily volume than the above |
| OMCL | 🟡 Moderate | Small-cap, thin volume flagged repeatedly this book — not a forced-exit concern at this position size, but a real slippage risk if ever sized up materially |

No change since 9/18. Position sizes remain trivial enough (all sub-$14) that liquidity is not a binding constraint for this book today.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.40%) and NVDA alone (12.60%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -31.08% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design, and still well past this desk's own informally-cited ~-15% reference level from months ago. Defensible only because the thesis-break test still hasn't fired — this is a genuine, sizable realized-risk-if-wrong position, not a rounding error at ~6.9% of pool.
- **A new sizing risk worth naming plainly, even though it hasn't happened: FRO.** GS ranked it the #1 conviction idea on the sheet this morning (28% upside to a fresh BTIG target); MS's own first-ever build on the name lands at ~54% overvalued (fair value ~$25 vs. $54.51 live) and scores it 8/10 risk on GS's own sheet — a peak-of-cycle commodity/shipping name whose entire bull case rests on record earnings persisting near-indefinitely, which is a materially stronger claim than even its own CEO is making. Not bought, correctly, per rules 5/6. This desk's radical-transparency read: if the team is ever tempted to size into FRO on the strength of GS's hedge-property argument alone, that would be adding a genuinely high-risk, uncorrelated-but-not-cheap position without the valuation gate this book has required of every other entry — worth a direct decline (per rule 14) rather than a slow drift toward it across future reports if GS keeps pushing it.
- **No position sizing changes recommended this run** — this is a "watch, don't act" report on sizing specifically.

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates to a fresh, larger direct-strike event** (a new US strike wave, a confirmed Iranian regime-change campaign, or a strait closure attempt): oil spikes toward $120-150+, a correlated multi-day equity selloff (Scenario C above). Estimated probability over the next 30 days: **~15-20%**, unchanged from 9/18 — today's quiet tape is one data point, not enough to revise this down given the conflict's actual multi-month trajectory (a real war since February, with direct US strikes and reported strikes on Iranian civilian targets already having occurred between this desk's last two reports).
2. **10yr settles decisively above 5% and holds for a full week**, re-firing/extending rule 6a and compressing multiples across the book's highest-duration names (NVDA, VTI, OMCL). Estimated probability: **~25-30%**, ticked down slightly from 9/18's 30-35% given today's reported yield easing, though the underlying data-source ambiguity means this is a soft estimate.
3. **OMCL-specific structural thesis break** (guidance cut, lost contract, margin deterioration) ahead of the 10/29 print. Estimated probability: **~10%**, unchanged — low, but would compound an already-severe drawdown.
4. **Generalized correlation-to-1 liquidity panic** (any trigger, not just Hormuz) taking down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this specific cause: **~20%**, unchanged — this remains the scenario this book's all-equity, no-options, thin-cash-reserve structure is least equipped to survive without simply taking the loss.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the Hormuz-escalation/correlation-to-1 risk (biggest risk, above):** unchanged from 9/18 — there is no clean equities-only hedge for a genuine panic; XLE only works in the "clean" stagflation scenario. **Cash is the only real lever.** Deployable cash sits at ~11.98% of pool, essentially exactly at BR's 11% floor — this desk recommends continuing to treat that floor as a line to defend, not a surplus, especially with BR's XLE top-up trigger's funding leg still unresolved (see Rebalancing below).
2. **Against tech/AI look-through concentration (~28.1%):** no new position-level action recommended this run, but reiterating the standing recommendation: if/when the OMCL DCA gate opens (now ~$2.33 away), any new deployment should lean toward GEHC or cash rather than adding to NVDA/VTI/VXUS, to avoid mechanically growing the one factor exposure that hasn't actually been addressed by BR's headline NVDA-target cut.
3. **Against rate-shock risk:** no equities-only hedge exists beyond favoring lower-duration names (XLE, GEHC) over high-multiple growth (NVDA) for any future capital deployment — already implicit in the current DCA-gate/no-add discipline.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.09% (target 10%, +1.09pp), VTI 27.73% (target 28%, -0.27pp), VXUS 26.77% (target 25%, +1.77pp), XLE 10.87% (target 12%, -1.13pp), OMCL 6.87% (target 10%, -3.13pp), GEHC 4.70% (target 4%, +0.70pp), Cash 11.98% (target 11%, +0.98pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger (OMCL's -3.13pp is the largest gap, appropriately loss-gated by rule 18, not a rebalancing signal).
- **XLE top-up trigger status update: the valuation leg cleared today for the first time** (MS's gap narrowed to -0.8%, inside the flat-to-better-than -1.8% bar) — but per the trader's own 10:37 ET run note, the funding leg is still blocked by the reserve floor this desk and GS both flagged twice already (9/17, 9/18). This desk is not re-flagging a third time per rule 14 — the design gap is BR's to fix (a smaller size or an explicit floor exception), and until it does, this desk's position is unchanged: **don't breach the 11% reserve floor to force this trigger through as currently sized.**
- **No rebalancing action recommended on GEHC or OMCL** — both governed by existing, appropriately conservative mechanisms.

---

## Heat map summary

| Risk factor | Level | Trend vs. 9/18 |
|---|---|---|
| Hormuz/Iran geopolitical tail risk (active shooting war) | 🔴 High | → unchanged — today's calm tape is one session, not a resolution; underlying conflict trajectory (US strikes, reported wedding bombing) has only worsened since this desk's last report |
| Look-through tech/AI concentration | 🔴 High | → unchanged (6th+ report), ticked up slightly on price |
| XLE hedge — valuation vs. quality | 🟢 Improving | ↓ better — gap narrowed to -0.8%, essentially fair value, top-up trigger's valuation leg now clear |
| XLE top-up trigger funding-math hole | 🟡 Moderate (unresolved) | → unchanged, now flagged for a third cycle, still BR's to fix |
| Interest rate / duration risk | 🟡 Moderate | ↓ slightly better — reported yields easing today, source ambiguity persists |
| OMCL single-position drawdown | 🟡 Moderate | → unchanged (-31.1%) |
| FRO temptation risk (not held) | 🟡 Moderate (new watch item) | New — GS's #1 pick, high-risk (8/10), MS hard pass; flagging before it becomes a repeated ask |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [A projectile strikes a tanker as it sails into the Strait of Hormuz, and other Mideast developments - WSLS/AP, 2026-09-21](https://www.wsls.com/news/2026/09/21/a-projectile-strikes-a-tanker-as-it-sails-into-the-strait-of-hormuz-and-other-mideast-developments/)
- [With diplomacy stalled, Trump returns to floating regime change in Iran - CNN, 2026-09-03](https://www.cnn.com/2026/09/03/politics/trump-regime-change-iran)
- [U.S. strikes Iran oil tankers for first time in retaliation for Hormuz strikes - Axios, 2026-09-02](https://www.axios.com/2026/09/02/iran-tankers-hormuz-attacks-oil)
- [Stock market today: Dow, S&P 500, Nasdaq rise as oil falls, anticipation builds for Trump-Xi summit - Yahoo Finance, 2026-09-21](https://finance.yahoo.com/markets/live/stock-market-today-monday-september-21-dow-sp-500-nasdaq-080214605.html)
- [Stock Market Today (Sept. 21, 2026): Nasdaq surges as oil prices retreat - TheStreet](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-sept-21-2026)
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [Market Yield on U.S. Treasury Securities at 10-Year Constant Maturity (DGS10) - FRED](https://fred.stlouisfed.org/series/dgs10)
- Internal: trading-experiment/state.md (9/21 ~09:36 ET and ~10:37 ET runs), analysts/gs-stock-screener.md (9/21 ~09:45 ET), analysts/ms-dcf-valuation.md (9/21 ~10:1x ET), analysts/jpm-earnings-analyzer.md (9/21 ~09:21 ET), analysts/br-portfolio-builder.md (9/18 ~16:11 ET, still the freshest BR report as of this run)
