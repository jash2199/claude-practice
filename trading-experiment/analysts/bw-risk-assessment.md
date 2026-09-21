# BW Risk Assessment — Risk Management Report
**Date: 2026-09-21 (Monday), ~14:41 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Fourth BW report today (prior: ~10:42 ET); this run's job is to check whether anything in the afternoon session — five trader checkpoints since this desk last posted — actually changes the picture, not to restate it.

---

## Overall Portfolio Risk Grade: **D-** (downgraded from flat-D since 10:42 ET)

## Single biggest risk right now
**A hard data point surfaced this run that this desk has never had a number for before, and it's worse than the qualitative "active shooting war" framing this book has been running on for weeks: IMF PortWatch recorded just 8 tanker transits through the Strait of Hormuz on 2026-09-13, against a pre-crisis baseline of ~85/day — a ~90.6% collapse in physical shipping flow.** That is not a headline about a single tanker strike; it is a measurement of the underlying supply channel this book's only hedge (XLE) exists to protect against, and it is far more severe than anything priced into today's tape. Yet Brent fell another ~3%+ this afternoon (now ~$100-102, a fourth straight down session) on *diplomatic optimism* — "Hormuz talks progress" headlines and Thursday's Trump-Xi summit — even as Iran's own parliament speaker said today the strait **remains closed until conditions are met**, and IRGC's spokesperson said today it is ready for a "counteroffensive" if the US attacks. That is a genuine divergence: the market is pricing hope, the flow data and Iranian officials are not confirming it, and XLE — the one position this book holds specifically to hedge this scenario — is going *down* on the same optimism that would need to be real for the hedge to no longer be needed. If the diplomacy doesn't materialize by Thursday and oil snaps back, this book will have watched its hedge cheapen into the exact week the risk it protects against didn't actually resolve. That combination (flow data confirming severe, unresolved disruption + hardening rhetoric + a hedge trading down on unconfirmed optimism) is why this desk is downgrading to D- rather than holding flat.

---

## Portfolio snapshot (live, 2026-09-21 ~14:41 ET)

`get_portfolio`: total_value **$100.3721** (cash $56.01 + equity $44.3621). Pool ≈ **$50.3721, a +$0.3721 (+0.74%) accumulated profit** — the best reading of the day so far, up from 10:42's +0.33%, on a broad afternoon rally. Deployable cash $6.01 (~11.93% of pool), ~0.93pp above BR's 11% reserve floor.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/18 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $227.495 | $5.6478 | 12.73% | 11.21% | +12.96% | +2.35% |
| VTI | 0.036690 | $381.290 | $13.9895 | 31.54% | 27.77% | +2.94% | +1.56% |
| VXUS | 0.154525 | $87.125 | $13.4630 | 30.35% | 26.73% | +3.56% | +1.45% |
| OMCL | 0.106405 | $32.350 | $3.4422 | 7.76% | 6.83% | **-31.16%** | +0.37% |
| XLE | 0.086775 | $62.949 | $5.4624 | 12.31% | 10.85% | +9.25% | **-1.53%** |
| GEHC | 0.036393 | $64.800 | $2.3583 | 5.32% | 4.68% | -5.66% | +1.04% |
| Cash (deployable) | — | — | $6.01 | — | 11.93% | — | — |

NVDA+OMCL combined **~20.49% of equity** — 25% concentration trigger clean, ~4.51pp buffer. NVDA alone **~12.73% equity / 11.21% pool** (18-20% trigger clean, ~1.21pp over BR's 10% pool target — narrow, unchanged). OMCL DCA gate (rule 18): pool now needs only **~$2.13** more accumulated profit to fire — narrowing steadily as the rally continues, worth flagging since a gate this close can flip mid-session.

---

## Correlation analysis between holdings

Unchanged structurally, and today's afternoon session is the cleanest version of the pattern yet:
- **NVDA + VTI + VXUS + GEHC are one correlated risk-on bloc.** All four are up 1.0-2.4% today, tracking a single afternoon chip-led rally (Intel +13%, AMD +9% per GS) rather than four independent theses. This book holds six tickers but effectively two return drivers on a day like today: "risk-on tech tape" (four names) and "oil" (XLE, moving the opposite direction).
- **XLE is once again the only red position, now more negatively than at 10:42 ET (-1.53% vs -1.75% then, i.e. it recovered slightly but is still the sole laggard all day).** That is XLE doing its job as an uncorrelated diversifier in a *garden-variety* rally — but it is the same structural fact that inverts and becomes a liability in the correlation-to-1 panic scenario below: right now XLE's independence is a diversification benefit; in a genuine Hormuz-driven equity selloff, that same independence flips to XLE falling *with* everything else while also not having risen enough beforehand to cushion the blow, because it has spent this entire month moving on oil-price sentiment rather than war-risk premium.
- **OMCL remains the one true idiosyncratic outlier** (-31.16%, moving on its own 7/30 guide-down thesis, not macro) — the one name keeping this book's realized correlation from being even higher than it already is.

## Sector concentration risk

| Sector/factor (look-through) | Approx. weight (% of equity) | Note |
|---|---|---|
| Tech / AI / semis (NVDA direct + est. tech slice of VTI/VXUS) | **~28.2% of equity** | Flagged for a 7th consecutive report; ticked up again on today's chip-led rally |
| Energy (XLE) | ~12.3% | Sole hedge sleeve; lone laggard again today |
| Healthcare (GEHC + OMCL) | ~13.1% | Split between a modest-discount name (GEHC) and a deep-drawdown name (OMCL) |
| Broad market / diversified (residual VTI/VXUS, ex-tech-slice) | ~46.4% | Largest bucket; still USD/global-equity beta, not independent of the tech factor given index construction |

No structural change since 10:42 ET beyond price drift. This desk's standing flag stands: BR's 10% NVDA pool-target cut addressed the headline number, not this look-through concentration, which lives mostly inside VTI/VXUS and can't be trimmed by touching NVDA alone.

## Geographic exposure and currency risk

~69.7% of equity (VTI+NVDA+OMCL+GEHC) is USD/US-domiciled; ~30.3% (VXUS) is unhedged ex-US, direct FX exposure to a non-USD basket. No material change since 10:42 ET or 9/18 — still a watch item, not a drift breach. Worth noting for completeness: a genuinely successful Trump-Xi summit Thursday would be a China/global-growth-positive surprise that could firm non-USD currencies against the dollar (helping VXUS's FX leg specifically) — logged as a two-sided catalyst this week, not a one-way risk.

## Interest rate sensitivity per position

- **NVDA**: high — long-duration growth multiple; MS's DCF gap remains -7.7% overvalued (unchanged since this morning, price-driven).
- **VTI**: high — mega-cap-tech-heavy index, same duration exposure as NVDA in aggregate.
- **VXUS**: moderate — lower average multiple than US, plus FX/rate-differential sensitivity.
- **OMCL**: high — small-cap, no earnings cushion at this drawdown level, disproportionately hurt by a higher cost of capital.
- **XLE**: low-moderate — driven primarily by oil price, not discount rate; MS's composite DCF gap sits near fair value (-0.8% as of this morning's read).
- **GEHC**: moderate — established cash-flow generator, less rate-sensitive than growth names but not immune.

**Live rate context, unresolved for a third week running:** fresh WebSearch this run still cannot pin a settled 9/19-9/21 close — the most recent figures available (TradingEconomics/CNBC-sourced) still show ~5.00-5.01% as of 9/18, with no fresher settled print surfaced. **This desk is naming this plainly rather than re-flagging softly a third time: the team has no reliable primary source for this number, and rule 6a's pause (fired 9/2, threshold 4.75%) is being carried on stale data by necessity, not by choice.** It doesn't change the pause's status — every candidate figure is comfortably above 4.75% — but a risk desk operating for weeks without a clean read on the single input that gates all core-add decisions is itself a process risk worth naming, not just a data nuisance.

## Recession stress test — estimated drawdown

Unchanged methodology (equity-value shocks, no rebalancing assumed), re-run on today's 14:41 ET live weights:

- **Scenario A — garden-variety recession (broad equities -25%, energy -15%, healthcare -10%):** NVDA/VTI/VXUS/GEHC segment (~79.9% of equity, ~$35.46) down ~25% ≈ -$8.87; XLE (~12.3%, ~$5.46) down ~15% ≈ -$0.82; OMCL (~7.8%, ~$3.44) down ~10% from an already-depressed base ≈ -$0.34. **Total equity drawdown ≈ -$10.03 (-22.6% of equity, ~-19.9% of the $50.37 pool).**
- **Scenario B — supply-shock stagflation (oil spike, broad equities -15%, energy +20%):** NVDA/VTI/VXUS/GEHC down ~15% ≈ -$5.32; XLE up ~20% ≈ +$1.09; OMCL flat-to-down ~5% ≈ -$0.17. **Net equity impact ≈ -$4.40 (-9.9% of equity, ~-8.7% of pool)** — still works on paper, and is the single scenario this book is actually structured to survive well.
- **Scenario C — Hormuz escalation → correlation-to-1 broad panic (XLE's hedge property inverts):** uniform -20% shock across all six positions. **Total equity drawdown ≈ -$8.87 (-20% of equity, ~-17.6% of pool).** This remains the scenario this book's structure was not designed to survive, and today's new PortWatch data (8 vs. 85 daily transits) is evidence the underlying conditions for Scenario C — a strait that is functionally, not just rhetorically, disrupted — have not actually improved even as the price of oil has fallen on hope alone.

Account-level (including the untouchable ~$50 reserve): all figures above roughly halve, since flat reserve cash dilutes any trading-pool loss across the full ~$100 account.

## Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| VTI, VXUS | 🟢 Very high | Deep, liquid ETFs, no concern at this position size |
| NVDA | 🟢 Very high | Mega-cap, no concern |
| XLE | 🟢 High | Liquid sector ETF |
| GEHC | 🟡 Moderate | Large-cap but lower average daily volume than the above |
| OMCL | 🟡 Moderate | Small-cap, thin volume flagged repeatedly — not a forced-exit concern at this position size, but a real slippage risk if ever sized up materially |

No change since 9/18. All positions remain sub-$14; liquidity is not a binding constraint for a book this size.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.49%) and NVDA alone (12.73%/11.21%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -31.16% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design, still well past this desk's own informal ~-15% reference level from months ago. Defensible only because the thesis-break test hasn't fired — this is a genuine, sizable realized-risk-if-wrong position at ~6.8% of pool, not a rounding error, and the DCA gate opening soon (~$2.13 away) means this book may be about to *add* to a position already down a third, purely because a mechanical pool-profit threshold clears. **This desk will want to see an explicit re-affirmation of the thesis, not just a gate-open notification, before any DCA dollar actually goes into OMCL** — a mechanical trigger clearing is not the same as the thesis being sound.
- **FRO temptation risk, unchanged from 10:42 ET**: GS's #1 conviction pick, MS's hard pass (~54% overvalued, 8/10 risk). Not bought, correctly. No new developments this run beyond GS's own ex-dividend-date correction (mechanical, doesn't change the risk read).
- **No position sizing changes recommended this run.**

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates to a fresh, larger direct-strike event** (a new US strike wave, a confirmed regime-change campaign, or an attempt to fully seal the strait rather than merely disrupt it): oil spikes sharply, correlated multi-day equity selloff (Scenario C). Estimated probability over the next 30 days: **~15-20%, unchanged** — but this desk is now weighting it with more conviction given the PortWatch data: an 8-vs-85 daily-transit collapse means the "closed until conditions are met" rhetoric from Iran's parliament speaker today is consistent with reality on the water, not just posturing.
2. **10yr settles decisively above 5% and holds for a full week**, extending rule 6a and compressing multiples across the book's highest-duration names (NVDA, VTI, OMCL). Estimated probability: **~25-30%, unchanged** — soft estimate given the persistent data gap above.
3. **OMCL-specific structural thesis break** ahead of the ~11/4 print, compounded by the DCA gate about to open. Estimated probability of a break: **~10%, unchanged**; but the *conditional* risk (a DCA buy lands right before a break) is newly relevant given how close the gate is.
4. **Generalized correlation-to-1 liquidity panic** (any trigger, not just Hormuz) taking down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~20%, unchanged** — still the scenario this all-equity, no-options, thin-cash-reserve book is least equipped to survive.
5. **NEW — a "buy the rumor" reversal: the Trump-Xi summit (Thursday) or Hormuz diplomacy disappoints relative to today's priced-in optimism**, and oil snaps back toward or above the pre-selloff level within days. This wouldn't be a new geopolitical event, just today's hopeful pricing proving premature — but it would hit XLE (already the laggard on the way down) and could reverse a chunk of today's broad-tape gains simultaneously. Estimated probability of a disappointment-driven reversal by end of week: **~25-30%** — summits scheduled under active hard-power tension have a mixed track record of matching pre-summit market optimism.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the Hormuz-escalation/correlation-to-1 risk (biggest risk):** unchanged — there is no clean equities-only hedge for a genuine panic; XLE only reliably works in the "clean" stagflation scenario (B), not scenario C. **Cash is the only real lever**, and at ~11.93% of pool it sits barely above BR's 11% floor. This desk repeats its standing view: treat that floor as a line to defend, not a surplus, especially with the OMCL DCA gate about to want a draw from the same pool and BR's XLE top-up trigger's funding leg still unresolved.
2. **Against the "buy the rumor" reversal risk (new #5 above):** the cleanest equities-only response, if this desk were asked to act, would be to *not* chase XLE lower on today's dip as if it were purely a valuation entry — MS's -0.8% gap reading was built on today's already-hopeful oil price, so an entry here is implicitly betting the diplomacy holds. This isn't a trade recommendation (rule 6/BR's funding-leg block already prevents action), just a risk-framing point: today's "cheap" price and the summit's outcome are the same bet, not two independent facts.
3. **Against tech/AI look-through concentration (~28.2%):** no new position-level action recommended, but reiterating: when the OMCL DCA gate opens (~$2.13 away), any *new* deployment should still lean toward GEHC or cash rather than adding to NVDA/VTI/VXUS — though note the DCA gate's own design point (rule 18) directs that money at OMCL specifically, not free capital, so this recommendation applies only if the team is weighing a separate, non-DCA deployment.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.21% (target 10%, +1.21pp), VTI 27.77% (target 28%, -0.23pp), VXUS 26.73% (target 25%, +1.73pp), XLE 10.85% (target 12%, -1.15pp), OMCL 6.83% (target 10%, -3.17pp), GEHC 4.68% (target 4%, +0.68pp), Cash 11.93% (target 11%, +0.93pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -3.17pp gap is the largest, and it is appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **XLE top-up trigger: unchanged deadlock.** Valuation leg reads near-fair (per this morning's MS read, itself now arguably resting on optimistic oil pricing per the tail-risk note above); funding leg still blocked by the reserve floor. This desk is not re-flagging a fourth time per rule 14 — it's BR's design gap to resolve.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. 10:42 ET |
|---|---|---|
| Hormuz/Iran geopolitical tail risk (active shooting war) | 🔴 High | ↓ worse in substance — new PortWatch flow data (8 vs. 85 daily transits) confirms severe disruption even as price optimism builds; rhetoric (Iran parliament speaker, IRGC) hardened, not softened, today |
| Oil-price/diplomacy divergence ("buy the rumor" reversal risk) | 🟡 Moderate (new) | New this run — today's rally and XLE's dip both rest on an unconfirmed Thursday summit outcome |
| Look-through tech/AI concentration | 🔴 High | → unchanged (7th+ report), ticked up on today's chip rally |
| OMCL single-position drawdown + approaching DCA gate | 🟡 Moderate | ↓ slightly worse — gate now only ~$2.13 away, raising the odds of a mechanical add to a thesis this desk hasn't freshly re-affirmed |
| XLE top-up trigger funding-math hole | 🟡 Moderate (unresolved) | → unchanged, still BR's to fix |
| Interest rate / duration risk | 🟡 Moderate | → unchanged, data gap persists into a third week |
| FRO temptation risk (not held) | 🟡 Moderate | → unchanged |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [A projectile hits a tanker as it enters the Strait of Hormuz, and other Mideast developments - News4Jax/AP, 2026-09-21](https://www.news4jax.com/news/2026/09/21/a-projectile-strikes-a-tanker-as-it-sails-into-the-strait-of-hormuz-and-other-mideast-developments/)
- [Two injured after 'unknown projectile' strikes tanker in Strait of Hormuz: Maritime agency - Al Arabiya, 2026-09-21](https://english.alarabiya.net/News/middle-east/2026/09/21/tanker-struck-by-projectile-in-strait-of-hormuz-two-crew-injured-ukmto-says)
- [Iran live updates: IRGC ready for 'counteroffensive' if US attacks - ABC News, 2026-09-21](https://abcnews.com/International/live-updates/iran-live-updates-irgc-ready-counteroffensive-us-attacks/?id=136611503)
- [Strait of Hormuz Status: September 21, 2026 - Straits Daily Brief](https://straits.live/briefs/2026-09-21)
- [Brent Crude: Oil Falls 3rd Day as Hormuz Talks Progress - Vantage Markets, 2026-09-21](https://www.vantagemarkets.com/market-news/oil-falls-third-day-hormuz-diplomacy-september-21-2026/)
- [Market Quick Take - Oil extends its slide before the Trump-Xi summit - Saxo, 2026-09-21](https://www.home.saxo/content/articles/macro/market-quick-take---oil-extends-its-slide-before-the-trump-xi-summit---21092026)
- [US Futures Climb as Oil Prices Drop and Investors Await Expected Trump-Xi Meeting - US News, 2026-09-21](https://www.usnews.com/news/business/articles/2026-09-21/stocks-advance-after-bessent-says-talks-with-china-were-successful-before-trump-xi-meeting)
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- Internal: trading-experiment/state.md (9/21 ~14:37 ET run, freshest live snapshot), analysts/gs-stock-screener.md (9/21 ~12:45 ET), analysts/ms-dcf-valuation.md (9/21 ~10:1x ET), analysts/jpm-earnings-analyzer.md (9/21 ~09:21 ET), analysts/br-portfolio-builder.md (9/18 ~16:11 ET, still the freshest BR report as of this run)
