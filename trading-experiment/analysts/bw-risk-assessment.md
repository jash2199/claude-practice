# BW Risk Assessment — Risk Management Report
**Date: 2026-09-25 (Friday), ~10:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report today; prior report 2026-09-24 ~14:41 ET.

---

## Overall Portfolio Risk Grade: **D-** (down from yesterday's D-, held at the floor — a genuinely new tail-risk event has entered the book, not just a continuation)

## Single biggest risk right now
**XLE — this book's only designated hedge — just failed its live test, and that is a bigger deal than any single number in this report.** Overnight, Houthi forces struck Saudi Aramco's Yanbu export terminal (East-West Pipeline, ~7M bbl/day capacity) and a target near Riyadh — a genuine, multi-source-confirmed kinetic attack on physical oil infrastructure, not a rumor. Brent spiked as high as $108 and is still trading $105-106, one of the sharpest oil moves of this entire conflict. This is exactly the scenario XLE was added to this book to hedge. **And XLE is down -0.86% today** (live $62.06 vs. yesterday's $62.60 close), because a competing headline — Iran offering to reopen Hormuz within 7 days in exchange for sanctions relief, per talks underway in New York — is pulling energy-equity sentiment the other way even as the physical supply shock is real and ongoing. Radical transparency: a hedge whose price decouples from its own thesis precisely when the thesis fires is not doing its job, and this book has no lever (no options, no short exposure) to correct for that. Layered on top: the 10yr remains pinned near 5.12-5.17%, MS's WACC-rebuild clock is now inside its final week (~9/30, three trading days out), and the pool itself is back to barely-positive (+0.08%) after two rough sessions. None of these individually is new, but today is the first day all three — a failed hedge, a maturing rate-shock clock, and a fresh unresolved war escalation — are live at once.

---

## Portfolio snapshot (live, 2026-09-25 ~10:42 ET)

`get_portfolio`: total_value **$100.0409** (cash $56.06 + equity $43.9809). Pool ≈ **$50.0409, a +$0.0409 (+0.08%) accumulated profit** — essentially flat, down from 9/22's +1.19% high and roughly where the book sat at yesterday's 10:41 ET check. Deployable cash $6.06 (~12.11% of pool), ~1.11pp above BR's 11% reserve floor.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/24 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $223.83 | $5.557 | 12.63% | 11.10% | +11.14% | -0.33% |
| VTI | 0.036690 | $378.29 | $13.879 | 31.56% | 27.73% | +2.13% | +0.06% |
| VXUS | 0.154525 | $85.835 | $13.264 | 30.16% | 26.50% | +2.03% | +0.29% |
| OMCL | 0.106405 | $32.80 | $3.490 | 7.94% | 6.98% | **-30.20%** | -0.70% |
| XLE | 0.086775 | $62.06 | $5.385 | 12.24% | 10.76% | +7.70% | **-0.86%** |
| GEHC | 0.036393 | $66.155 | $2.408 | 5.47% | 4.81% | -3.69% | -0.34% |
| Cash (deployable) | — | — | $6.06 | — | 12.11% | — | — |

NVDA+OMCL combined **~20.57% of equity** — 25% concentration trigger clean, ~4.43pp buffer. NVDA alone **~12.63% equity / 11.10% pool** (18-20% trigger clean, ~1.10pp over BR's 10% pool target). **OMCL DCA gate (rule 18): pool needs ~$2.46 more accumulated profit to fire** — essentially flat vs. yesterday's ~$2.44-2.45, tracking a pool that hasn't meaningfully moved.

---

## Correlation analysis between holdings

- **NVDA, VTI, VXUS, OMCL, XLE, and GEHC are all WACC-sensitive** — every position on this book except cash is discounted at a rate that moves with the 10yr; a sustained rate move compresses valuations across the whole book roughly in tandem. MS's WACC-rebuild clock (~9/30) would touch all four company-specific DCFs (NVDA, OMCL, XLE, GEHC) essentially simultaneously.
- **NVDA and OMCL remain the book's two most idiosyncratically-correlated names within tech/AI-adjacent risk** — both red again today (-0.33%, -0.70%), consistent, not decoupling.
- **XLE's correlation to the rest of the book has flipped in an unusual way today: it is negatively correlated with the news that should be driving it.** Normally XLE tracks oil-shock headlines *positively* and the rest of the book negatively (a genuine hedge). Today, the oil-shock headline (Yanbu attack) is real and large, yet XLE is red — the diplomatic counter-headline (Hormuz deal talks) is dominating price action instead. This is the clearest evidence yet that XLE's hedge behavior is regime-dependent and currently unreliable, not the free, uncorrelated ballast this book has been treating it as.
- **GEHC continues to show the weakest correlation to the book's dominant rate/AI-sentiment axis** — red today (-0.34%) but modestly, consistent with broad-tape softness rather than a name-specific move.
- **VTI and VXUS are both green today (+0.06%, +0.29%)**, a mild divergence from NVDA/OMCL/XLE/GEHC's red — not a genuine decorrelation signal, just today's specific sector mix (broad index holding up better than the AI-chip/energy/healthcare-satellite names).

## Sector concentration risk with percentage breakdown

- **Tech/AI look-through concentration: ~27.7% of equity** (NVDA's direct 12.63% plus VTI/VXUS's embedded mega-cap tech weight) — unchanged, now a 14th+ consecutive report naming this as the book's largest standing structural concentration, still below any hard mechanical trigger.
- **Energy: ~12.24% of equity** (XLE) — nominally the designated Hormuz/oil hedge, but see above: today is a live demonstration that this hedge does not reliably fire when its own thesis event occurs.
- **Healthcare: ~13.4% of equity** (OMCL 7.94% + GEHC 5.47%) — OMCL alone still carries the book's single largest unrealized loss (-30.2%, a new post-entry low on a percentage basis).
- **Broad-market core (ex-look-through sector detail): VTI + VXUS = ~61.7% of equity**, the book's genuine diversification backbone and, notably, the only part of the book green today.
- **Cash: 12.11% of pool**, above BR's 11% floor but not by much — earmarked for the OMCL DCA gate and, subordinated to it, the XLE top-up trigger; not free capacity for a new idea.

## Geographic exposure and currency risk factors

- **VXUS (~30.16% of equity) carries the book's only direct non-US/non-USD-underlying exposure** — developed and emerging market equities, indirect currency risk via unhedged foreign-currency holdings.
- **China/Trump-Xi read-through, now one day past the summit itself:** per BR's post-summit read, the concrete deliverable was a trade-truce extension, with broader sentiment staying skeptical of a wider breakthrough and Asia-Pacific markets extending losses on that skepticism — a mixed, not clearly bullish, outcome for VXUS's EM/China sleeve. No fresh escalation or resolution found this run beyond what BR already logged.
- **NVDA carries indirect geographic/geopolitical risk via chip-export policy** — the summit's AI-export-policy agenda item has not produced any confirmed new restriction or relaxation as of this report.
- **XLE's exposure is functionally global-energy-price risk, not currency risk** — its US-domiciled holdings (XOM/CVX) are USD-denominated, but the underlying commodity is priced in a global market now directly exposed to a live, physical attack on Saudi export infrastructure, distinct from the softer Hormuz-diplomacy story.
- **VTI, OMCL, GEHC are overwhelmingly US-domestic-revenue and USD-denominated** — minimal direct currency risk.

## Interest rate sensitivity for each position

- **OMCL — highest sensitivity.** MS's model carries the widest DCF gap on the book (~63% undervalued) precisely because it is the most duration-heavy of the company-specific DCFs; a WACC rebuild would compress this discount the most in percentage terms.
- **NVDA — high sensitivity.** NVDA's overvaluation gap widened back to -9.0% today (from -7.2% yesterday) purely as the stock bounced back toward — and past — MS's unchanged fair value; a live, two-way illustration of how much of this gap is price-driven, not model-driven.
- **XLE — high sensitivity, and now doubly exposed.** MS's composite fair value (~$62.8) sits essentially on top of today's live price ($62.06) — a WACC rebuild pushing fair value down even modestly would flip this from ~fair-value to outright overvalued. Layer the failed-hedge dynamic above on top, and XLE is simultaneously the position most exposed to a rate-driven valuation cut *and* the one whose price is currently moving against its own supply-shock thesis.
- **GEHC — moderate-high sensitivity, newly relevant.** MS's WACC 8.5% base case remains the lowest discount rate on the book, but GEHC is explicitly named among the models a full-week rebuild would touch.
- **VTI, VXUS — moderate, diversified sensitivity.** No single-company DCF applies, but both are broad equity baskets whose aggregate valuations compress in a genuine sustained-rate-shock regime.
- **Cash — zero sensitivity, and its relative value rises as a rate shock deepens.**

## Recession stress test showing estimated drawdown

Scenario: a genuine demand-destruction recession (distinct from today's supply-shock/rate-shock regime) — broad equities down ~20-25%, and critically, **energy participates in the decline rather than acting as a hedge** (recession-driven demand destruction typically hits oil prices too, the opposite of today's supply-shock dynamic).
- Equity sleeve (currently 87.9% of pool, all six holdings) at a uniform -20%: **≈-17.6% of pool value**.
- Realistic dispersion: NVDA/OMCL (highest-beta, highest-duration) likely fall further than the average (-25 to -30% plausible), VTI/VXUS closer to the -20% broad-market assumption, XLE potentially falling *more* than the broad market in a true demand-destruction scenario, GEHC (defensive healthcare) likely the most resilient single name.
- **Blended estimated pool drawdown: -18% to -24%**, i.e. roughly **-$9.00 to -$12.00 of the ~$50 pool**, which would erase all accumulated profit to date several times over and cut meaningfully into the $50 base itself in the worse end of the range.
- **Today's action is itself a smaller-scale preview of the correlation-to-1 risk this stress test describes**, if XLE's decoupling from oil today generalizes: a book with no working hedge, no options, and only ~12% cash has essentially no ballast for a real drawdown scenario.

## Liquidity risk rating for each holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | 🟢 Very high | Mega-cap ETF, deepest liquidity on the book |
| VXUS | 🟢 Very high | Mega-cap international ETF |
| NVDA | 🟢 Very high | One of the most liquid single names on any US exchange |
| XLE | 🟢 High | Large sector ETF, ample daily volume |
| GEHC | 🟢 High | Large-cap, ample daily volume for this position's fractional size |
| OMCL | 🟡 Moderate | Small/mid-cap — thinner daily volume than the other five, but still exchange-listed with sufficient depth for this book's fractional-share sizing |

No liquidity risk is actionable at this book's scale — this rating exists to flag OMCL as the one name where a much larger position size would eventually need to consider execution impact, not as a present concern.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.57%) and NVDA alone (12.63%/11.10%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -30.20% unrealized loss is a new post-entry-percentage low and remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design. **The DCA gate sits ~$2.46 away.** Repeating explicitly, as this desk has for weeks: a mechanical pool-profit threshold clearing is not a thesis re-affirmation — this desk wants a fresh, dedicated read at the run the gate fires, and now also wants MS's WACC-rebuild-clock outcome (~9/30, now just three trading days out) checked before any first tranche, since that rebuild would shrink OMCL's discount without touching the underlying thesis.
- **XLE sizing risk, newly framed:** this desk is not recommending a trim (no structural break, and the position is small), but is explicitly downgrading confidence in XLE's hedge value until it demonstrates it can track an actual oil-supply-shock headline for more than a single session. Any XLE top-up trigger (BR's own subordinated mechanism) should weigh this session's decoupling, not just the valuation gap.
- **GEHC sizing risk (carried forward):** already at/above BR's 4% target pool weight (4.81%) with no overweight case made by any desk. No change.
- **No position sizing changes recommended this run.**

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates further, or the Yanbu-style attacks spread to a second major export node (e.g., Ras Tanura).** Estimated probability over the next 30 days: **~20%, raised from ~15-18%** — the Yanbu attack is itself the escalation this desk had been assigning to this bucket; a repeat or spread within the window is the live, immediate question.
2. **10yr settles decisively above 5% and holds for a full week**, triggering MS's coordinated rebuild across NVDA/OMCL/XLE/GEHC. Estimated probability: **~45-50%, unchanged** — today's easier read (GS: 10yr eased a few bps) is one session of relief, not a reversal of the multi-day trend; this desk treats it as noise around an unresolved trend per rule 4, not a de-escalation of the clock.
3. **OMCL-specific structural thesis break** ahead of the 11/4 print, compounded by the DCA gate's proximity. Estimated probability: **~10%, unchanged.**
4. **Generalized correlation-to-1 liquidity panic** taking down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~20%, unchanged** — still the scenario this all-equity, no-options, thin-cash-reserve book is least equipped to survive, and today's XLE decoupling is a small live illustration of the mechanism.
5. **A Hormuz phased-deal (Iran's 7-day reopening offer) actually firms into a signed framework.** Estimated probability within 2 weeks: **~25-30%** — Dennis Ross's own estimate (cited in today's reporting) puts full resolution before the midterms at ~30%; a partial framework inside two weeks is plausible but far from assured given both sides' reluctance to concede leverage first. If it firms, XLE's valuation case (already near fair value) likely flips outright overvalued.
6. **GEHC gives back some or all of its recent gain** toward MS's $70.8 base case. Estimated probability of a >5% pullback within a week: **~35-40%, unchanged.**

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the failed-hedge / Hormuz-tail risk (biggest risk):** the honest answer is that this book's only designated hedge just underperformed its own thesis, and there is no clean equities-only substitute at this scale. The one lever available is sizing discipline: don't add to XLE on the strength of today's oil spike alone (the price action itself argues against it), and treat the position going forward as a partial, unreliable hedge rather than a full one when sizing any future energy-sector exposure. Cash (~12.11% of pool) remains the only true ballast.
2. **Against the rate/WACC-rebuild risk:** no clean equities-only hedge exists for a broad discount-rate repricing. The two real levers remain (a) rule 6a's standing pause on new high-multiple core-ups, already in effect, and (b) having MS pre-stage the rebuild math (each fair value at WACC+50bp) before the clock completes ~9/30, now just three trading days away — this desk repeats that recommendation with added urgency given the clock's proximity.
3. **Against tech/AI look-through concentration (~27.7%):** no new position-level action recommended. When the OMCL DCA gate opens (~$2.46 away), that capital is earmarked for OMCL by design (rule 18), not a free deployment decision.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.10% (target 10%, +1.10pp), VTI 27.73% (target 28%, -0.27pp), VXUS 26.50% (target 25%, +1.50pp), XLE 10.76% (target 12%, -1.24pp), OMCL 6.98% (target 10%, -3.02pp), GEHC 4.81% (target 4%, +0.81pp), Cash 12.11% (target 11%, +1.11pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -3.02pp gap is the largest, and it is appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **XLE top-up trigger:** funding remains subordinated to the OMCL DCA gate per BR's standing sequencing. Given today's hedge-decoupling observation, this desk recommends the sequencing hold even more firmly — this is not the day to lean into XLE on valuation grounds alone.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. 9/24 14:41 ET |
|---|---|---|
| XLE hedge reliability (decoupled from oil-shock headline today) | 🔴 High | ↑ **new finding** — first live evidence the hedge doesn't fire on its own thesis event |
| Hormuz/Iran binary tail risk (Yanbu attack, live) | 🔴 High | ↑ **worse** — genuine kinetic escalation on physical infrastructure, probability estimate raised to ~20% |
| Rate/WACC-rebuild risk (10yr ~5.12-5.17%, clock ~9/30) | 🔴 High | → unchanged in substance, one session's easier read not a trend reversal |
| Look-through tech/AI concentration | 🔴 High | → unchanged (14th+ report) |
| Trump-Xi summit aftermath / China-VXUS-NVDA policy risk | 🟡 Moderate | ↓ resolved to a mixed, non-escalatory outcome per BR |
| OMCL single-position drawdown + DCA gate | 🟡 Moderate | ↑ slightly worse — new post-entry percentage low (-30.2%) |
| GEHC sentiment-vs-fundamentals gap | 🟡 Moderate | → unchanged |
| Pool profit level (+0.08%) | 🟢 Low-Moderate | → roughly flat |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [Oil prices jump after Yemen's Houthis claim attacks on Saudi facilities - Al Jazeera](https://www.aljazeera.com/economy/2026/9/25/oil-prices-jump-after-yemens-houthis-claim-attacks-on-saudi-facilities)
- [Saudi Arabia allies line up support as Houthi attacks mount - Al Jazeera](https://www.aljazeera.com/news/2026/9/25/saudi-arabia-allies-line-up-support-as-houthi-attacks-mount)
- [Oil prices waver in face of Iran war truce and Houthi attacks - The National](https://www.thenationalnews.com/business/energy/2026/09/25/oil-prices-waver-in-face-of-iran-war-truce-and-houthi-attacks/)
- [Saudi Arabia Reroutes Oil Exports as Houthi Strikes Target Yanbu - OilPrice.com](https://oilprice.com/Latest-Energy-News/World-News/Saudi-Arabia-Reroutes-Oil-Exports-as-Houthi-Strikes-Target-Yanbu.html)
- [Brent Hits $108 on Houthi Strike, Falls as Iran Floats Hormuz Deal at UN - Eastern Herald](https://easternherald.com/2026/09/24/brent-crude-oil-price-september-24-2026-houthi-strike-hormuz)
- [US, Iran hold mediated UNGA talks on ending war, opening Strait of Hormuz - Al Jazeera](https://www.aljazeera.com/news/2026/9/23/us-iran-hold-mediated-unga-talks-on-ending-war-opening-strait-of-hormuz)
- [Iran Has Suggested a Deal to Reopen the Strait of Hormuz in 7 Days - US News](https://www.usnews.com/news/world/articles/2026-09-25/iran-has-suggested-a-deal-to-reopen-the-strait-of-hormuz-in-7-days)
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [Energy stocks rally as fresh U.S.-Iran attacks drive oil prices higher - Investing.com](https://ng.investing.com/news/stock-market-news/energy-stocks-rally-as-fresh-usiran-attacks-drive-oil-prices-higher-2679790)
- Internal: trading-experiment/state.md (live Robinhood snapshot, 9/25 ~10:42 ET), analysts/ms-dcf-valuation.md (9/25 ~10:15 ET), analysts/gs-stock-screener.md (9/25 ~09:42 ET), analysts/jpm-earnings-analyzer.md (9/25 ~09:2x ET), analysts/br-portfolio-builder.md (9/24 ~16:1x ET)
