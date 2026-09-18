# BW Risk Assessment — Risk Management Report
**Date: 2026-09-18 (Friday), ~14:44 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report today (first was 10:42 ET).

---

## Overall Portfolio Risk Grade: **D** (held flat vs. this morning)

## Single biggest risk right now
**The Hormuz/Iran conflict crossed a rhetorical threshold today that this desk has not seen before, and it is not yet priced into this book's only hedge.** A second tanker was struck in the strait today (reportedly on the Omani side), and multiple outlets (Al Jazeera live-blog, CNBC) report Trump is now weighing options that reportedly include **"annihilating the Iranian regime"** — a step-change from the "targeted response" and "economic pressure" framing this desk has tracked for weeks. That is a category change in tail-risk language, not just another degree of the same standoff. Brent sits at ~$101.21, down modestly on the day (Saudi Arabia rerouting exports through Hormuz to offset its own pipeline outage) but still firmly in crisis territory. Meanwhile XLE — this book's only structural hedge against exactly this scenario — is flat-to-down on the day and, per MS, sits **-2.1% overvalued** on its own DCF, wider than yesterday. A genuine escalation (direct US strikes on Iran, an actual regime-change campaign) would very plausibly produce a correlated risk-off shock across this entire equities-only book — NVDA, VTI, VXUS, and even XLE itself could all sell off together in a liquidity-driven panic, the one scenario an all-equity portfolio with a thin cash buffer cannot cleanly hedge.

---

## Portfolio snapshot (live, 2026-09-18 ~14:44 ET)

`get_portfolio`: total_value **$99.8406** (cash $56.01 + equity $43.8306). Pool ≈ **$49.8406, a -$0.1594 (-0.32%) accumulated loss** since the $50 base was seeded — essentially flat vs. this morning's 10:42 read. Deployable cash $6.01 (~12.06% of pool), a bare 1.06pp above BR's newly-set 11% reserve floor.

| Position | Qty | Price | Value | % Equity | % Pool | Unrealized |
|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $219.32 | $5.4442 | 12.42% | 10.92% | +8.90% |
| VTI | 0.036690 | $374.905 | $13.7568 | 31.39% | 27.61% | +1.22% |
| VXUS | 0.154525 | $85.735 | $13.2506 | 30.23% | 26.59% | +1.91% |
| OMCL | 0.106405 | $32.42 | $3.4497 | 7.87% | 6.92% | **-31.01%** |
| XLE | 0.086775 | $64.355 | $5.5843 | 12.74% | 11.20% | +11.69% |
| GEHC | 0.036393 | $64.56 | $2.3499 | 5.36% | 4.72% | -6.01% |
| Cash (deployable) | — | — | $6.01 | — | 12.06% | — |

NVDA+OMCL combined ~20.29% of equity — 25% concentration trigger clean, ~4.71pp buffer. NVDA alone ~12.42% — 18-20% trigger clean. OMCL DCA gate (rule 18): still loss-gated, pool needs ~$2.66 of accumulated profit before it can fire.

---

## Correlation analysis between holdings

This book has one real diversifying pair (XLE vs. everything else) and one large correlated bloc:
- **NVDA + VTI + VXUS + GEHC move together in a broad risk-off tape.** VTI's own top holdings are mega-cap tech (overlapping directly with NVDA's thesis); VXUS is more diversified but still correlates ~0.7-0.8 with US equities in a global panic; GEHC is a beta-~1 industrial/healthcare name that has not shown defensive behavior in this book's own drawdowns.
- **XLE is the one position with a plausible negative-to-uncorrelated beta in a supply-shock scenario** (oil spikes while broad equities fall) — but it is *positively* correlated with the rest of the book in a generic liquidity panic (2020-style "everything sells" tape), which is exactly the scenario today's Trump/Iran headline risks pulling toward. That is the correlation break this book cannot currently hedge away with equities alone.
- **OMCL is close to an idiosyncratic outlier** (healthcare tech, deepest single-name drawdown, driven by its own 7/30 guide-down rather than macro) — genuinely uncorrelated with the Hormuz/rate story, which is the one thing keeping its -31% loss from compounding the rest of the book's risk today.

## Sector concentration risk

| Sector/factor (look-through) | Approx. weight | Note |
|---|---|---|
| Tech / AI / semis (NVDA direct + est. tech slice of VTI/VXUS) | **~27.9% of equity** | Flagged for a 5th consecutive report; unchanged in substance since 10:42, still not addressed by BR's headline-only NVDA target cut |
| Energy (XLE) | ~12.7% | Sole hedge sleeve; hedge quality degrading per MS's DCF |
| Healthcare (GEHC + OMCL) | ~13.2% | Split between a modestly undervalued name (GEHC, +10.1% DCF) and a deep-discount, high-drawdown name (OMCL) |
| Broad market / diversified (residual VTI/VXUS) | ~34.3% | Least concentrated sleeve, still USD/global-equity beta |

Tech/AI look-through concentration remains this desk's standing structural flag — nothing moved it materially in either direction since this morning.

## Geographic exposure and currency risk

~69.8% of equity (VTI+NVDA+OMCL+GEHC) is USD/US-domiciled; ~30.2% (VXUS) is unhedged ex-US, direct FX exposure to a weakening non-USD basket if the Fed's hiking cycle continues to support the dollar. No change since this morning's read — still a watch item, not a drift breach; VXUS sits +1.72pp over its 25% target only nominally.

## Interest rate sensitivity per position

- **NVDA**: high — long-duration growth multiple, MS's DCF gap already -6.2% and widening even on a flat day.
- **VTI**: high — mega-cap-tech-heavy index, same duration exposure as NVDA at the aggregate level.
- **VXUS**: moderate — lower average multiple than US, but adds FX/rate-differential sensitivity.
- **OMCL**: high — small-cap, no current earnings cushion at this drawdown level, disproportionately hurt by a higher cost of capital.
- **XLE**: low-moderate — driven primarily by oil price, not discount rate, though financing costs matter for E&P capex.
- **GEHC**: moderate — established cash-flow generator, DCF less rate-sensitive than growth names but not immune.

**Live rate context:** the 10yr touched 5.01% intraday on 9/16 and, per GS's same-day WebSearch this morning, was testing ~5.0% again intraday today — still not a second confirmed settled close above 5% (9/17 settled back below, per MS, resetting the WACC-rebuild clock toward ~9/22). Rule 6a's pause (fired 9/2, threshold 4.75%) remains in continuous effect regardless of which side of 5% today closes on. **This desk flags that the rate story is not resolved, only reset** — a rebound back through 5% on a settled-close basis this week would be the fastest re-fire of rule 6a's underlying concern in this book's history.

## Recession stress test — estimated drawdown

Unchanged methodology from prior reports (equity-value shocks, no rebalancing assumed):
- **Scenario A — garden-variety recession (broad equities -25%, energy -15%, healthcare -10%):** NVDA/VTI/VXUS/GEHC segment (~79.4% of equity) down ~25% ≈ -$8.7; XLE (~12.7%) down ~15% ≈ -$0.84; OMCL (~7.9%) down ~10% from an already-depressed base ≈ -$0.34. **Total equity drawdown ≈ -$9.9 (-22.6% of equity, ~-19.9% of the $49.84 pool).**
- **Scenario B — supply-shock stagflation (oil spike, broad equities -15%, energy +20%):** NVDA/VTI/VXUS/GEHC down ~15% ≈ -$5.2; XLE up ~20% ≈ +$1.12; OMCL flat-to-down ~5% ≈ -$0.17. **Net equity impact ≈ -$4.3 (-9.7% of equity, ~-8.6% of pool)** — the scenario XLE is explicitly held to soften, and it still works on paper.
- **Scenario C — today's live tail case: Hormuz escalation → broad panic (correlation → 1, everything down together including XLE):** if a genuine US-Iran shooting war triggers a liquidity-driven "sell everything" tape rather than a clean stagflation rotation, XLE's hedge property inverts — assume a uniform -20% shock across all six positions. **Total equity drawdown ≈ -$8.8 (-20% of equity, ~-17.6% of pool).** This is the scenario this desk is most worried is underpriced right now, precisely because today's headline risk points toward it more than toward the "clean" Scenario B this book's hedge was actually designed for.

Account-level (including the untouchable ~$50 reserve): all figures above roughly halve, since flat reserve cash dilutes any trading-pool loss across the full ~$100 account.

## Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| VTI, VXUS | 🟢 Very high | Deep, liquid ETFs, no concern at this position size |
| NVDA | 🟢 Very high | Mega-cap, no concern |
| XLE | 🟢 High | Liquid sector ETF |
| GEHC | 🟡 Moderate | Large-cap but lower average daily volume than the above |
| OMCL | 🟡 Moderate | Small-cap, thin volume flagged repeatedly this book — not a forced-exit concern at this position size, but a real slippage risk if ever sized up materially |

No change since this morning. Position sizes remain trivial enough (all sub-$14) that liquidity is not a binding constraint for this book today.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.29%) and NVDA alone (12.42%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -31.01% unrealized loss is this book's largest standing single-name risk**, held without a mechanical stop-loss by design (rule per the 7/21 contingency plan) and now well past BW's own informally-cited ~-15% reference level from months ago. This remains defensible only because the thesis-break test (guidance cut, contract loss, margin/bookings deterioration) still hasn't fired — but it is a genuine, sizable realized-risk-if-wrong position, not a rounding error at ~6.9% of pool.
- **NVDA's DCF gap (-6.2%, wider than yesterday) is drifting further from fair value on price alone**, with no offsetting change in the underlying model. Not yet actionable under any adopted rule, but worth flagging as the gap most likely to widen further if today's rate/geopolitical volatility continues.
- **No position sizing changes recommended this run** — this is a "watch, don't act" report on sizing specifically.

## Tail risk scenarios with probability estimates

1. **Hormuz war escalates to direct US strikes on Iran / regime-change campaign** (today's specific new headline risk): oil spikes toward $120-150+, a correlated multi-day equity selloff (Scenario C above). Estimated probability over the next 30 days: **~15-20%**, up from this desk's prior informal ~5-10% baseline given today's rhetoric shift is a genuine escalation, not noise.
2. **10yr settles decisively above 5% and holds for a full week**, re-firing/extending rule 6a and compressing multiples across the book's highest-duration names (NVDA, VTI, OMCL). Estimated probability: **~30-35%** given the yield is already testing that level intraday twice in three sessions.
3. **OMCL-specific structural thesis break** (guidance cut, lost contract, margin deterioration) ahead of the 10/29 print. Estimated probability: **~10%**, low but would compound an already-severe drawdown.
4. **Generalized correlation-to-1 liquidity panic** (any trigger, not just Hormuz) that takes down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this specific cause: **~20%** — this is the scenario this book's all-equity, no-options, thin-cash-reserve structure is least equipped to survive without simply taking the loss.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the Hormuz-escalation/correlation-to-1 risk (biggest risk, above):** the honest answer is this book has no clean equities-only hedge for a genuine panic — XLE only works in the "clean" stagflation scenario, not the liquidity-panic one. The only real lever available is **cash**. This desk recommends treating the current 12.06%-of-pool deployable cash as a floor to defend, not a surplus to deploy into BR's under-funded XLE top-up trigger (see Rebalancing below) — in a real panic, dry powder to buy a genuine post-shock dislocation is worth more than 1-2pp of extra XLE exposure today.
2. **Against tech/AI look-through concentration (~27.9%):** no new position-level action recommended this run, but if/when the OMCL DCA gate ever opens, this desk's standing recommendation is that any new deployment lean toward GEHC or cash rather than adding to NVDA/VTI/VXUS, to avoid mechanically growing the one factor exposure BR's headline-only target cut still hasn't actually addressed.
3. **Against rate-shock risk:** no equities-only hedge exists in this toolbox beyond favoring lower-duration names (XLE, GEHC) over high-multiple growth (NVDA) for any future capital deployment — a preference already implicit in the DCA-gate/no-add discipline currently governing both OMCL and NVDA.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 10.92% (target 10%, +0.92pp), VTI 27.61% (target 28%, -0.39pp), VXUS 26.59% (target 25%, +1.59pp), XLE 11.20% (target 12%, -0.80pp), OMCL 6.92% (target 10%, -3.08pp), GEHC 4.72% (target 4%, +0.72pp), Cash 12.06% (target 11%, +1.06pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's own 5pp mechanical drift trigger (OMCL's -3.08pp is the largest gap, appropriately loss-gated by rule 18, not a rebalancing signal).
- **Standing flag, now doubly confirmed (this desk this morning, GS independently at 12:42 ET): BR's new XLE top-up trigger has an unresolved funding-math hole.** It authorizes a $2-3 cash-funded add, but deployable cash sits only ~$0.53-0.60 above the 11% reserve floor BR itself set in the same report — firing it as literally written would breach that floor. This desk recommends BR either shrink the trigger's size to what's actually fundable without a floor breach (~$0.50-0.60 today) or explicitly raise the reserve floor's priority over the trigger. This has not fired yet (valuation leg still closed per MS's -2.1% gap), so it remains a paper problem, not a live one — but it should not need a third flag next report.
- **No rebalancing action recommended on GEHC or OMCL** — both governed by existing, appropriately conservative mechanisms.

---

## Heat map summary

| Risk factor | Level | Trend vs. 10:42 ET |
|---|---|---|
| Hormuz/Iran geopolitical tail risk | 🔴 High (escalated) | ↑ worse — "annihilate the regime" rhetoric, second tanker strike today |
| Look-through tech/AI concentration | 🔴 High | → unchanged (5th+ report) |
| XLE hedge — valuation vs. quality | 🟡 Moderate | → unchanged (-2.1% gap, hedge not confirmed working in a panic scenario) |
| XLE top-up trigger funding-math hole | 🟡 Moderate (unresolved) | → unchanged, now doubly flagged, still not fixed |
| Interest rate / duration risk | 🟡 Moderate | → unchanged — testing 5% intraday again, no new settled close |
| OMCL single-position drawdown | 🟡 Moderate | → unchanged (-31.0%) |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [Iran war live: Second tanker reported struck in the Strait of Hormuz, Trump weighs big decision - Al Jazeera, 2026-09-18](https://www.aljazeera.com/news/liveblog/2026/9/18/iran-war-live-trump-weighs-big-decision-on-iran-tanker-hit-in-hormuz)
- [US, Iran engaged in tanker war: Where is the months-long conflict headed? - Al Jazeera, 2026-09-06](https://www.aljazeera.com/news/2026/9/6/us-iran-engaged-in-tanker-war-where-is-the-months-long-conflict-headed)
- [Crude Oil / Brent Crude Oil - Price, Chart, Historical Data - TradingEconomics](https://tradingeconomics.com/commodity/crude-oil)
- [Oil prices: WTI, Brent - U.S.-Iran, Hormuz, Trump - CNBC, 2026-08 series](https://www.cnbc.com/2026/08/10/oil-prices-today-brent-wti-hormuz-trump-iran.html)
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [Federal Reserve Board - H.15 Selected Interest Rates (Daily)](https://www.federalreserve.gov/releases/h15/)
- Internal: trading-experiment/state.md (9/18 14:36 ET), analysts/gs-stock-screener.md (9/18 ~12:42 ET), analysts/ms-dcf-valuation.md (9/18 ~10:1x ET), analysts/br-portfolio-builder.md (9/17 ~16:11 ET), analysts/jpm-earnings-analyzer.md (9/18 ~09:20 ET)
