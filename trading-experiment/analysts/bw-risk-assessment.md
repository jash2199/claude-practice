# BW Risk Assessment — Risk Management Report
**Date: 2026-09-25 (Friday), ~14:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report today; prior report 2026-09-25 ~10:42 ET.

---

## Overall Portfolio Risk Grade: **D-** (unchanged from this morning)

## Single biggest risk right now
**The "rate shock is easing" read this book was leaning on this morning was wrong, and now GS itself has said so.** GS's 09:42 ET report cited a 3bp ease to 5.17% as "the first sign of easing." Its own 12:41 ET follow-up retracted that: fresh CNBC reporting has the 10yr at **5.209%, a fresh high since mid-2007**, extending a 23bp three-session sell-off. That means MS's ~9/30 WACC-rebuild clock — now three trading days out — is not fraying, it is tracking cleanly toward its full-week test. At the same time, **XLE, this book's only hedge, is still failing to do its job**: live price $61.84, down **-1.21% today** even as the Yanbu oil-supply-shock story (Houthi strikes on Saudi Aramco's East-West Pipeline) remains live and unresolved. This is the second consecutive report (after this morning's) where the hedge decouples from its own thesis event on the same day the rate-shock clock gets confirmed rather than defused. Radical transparency: this book is heading into the final stretch before a rate-driven revaluation of four of its six holdings (NVDA, OMCL, XLE, GEHC) with its designated shock absorber not absorbing anything, and there is still no equities-only lever to fix that.

---

## Portfolio snapshot (live, 2026-09-25 ~14:42 ET)

`get_portfolio`: total_value **$100.1848** (cash $56.06 + equity $44.1248). Pool ≈ **$50.1848, a +$0.1848 (+0.37%) accumulated profit** — improved from this morning's +0.08% and from 13:36's +0.33%, but still a fraction of the book's 9/22 high (+1.19%). Deployable cash $6.06 (~12.08% of pool), ~1.08pp above BR's 11% reserve floor.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/24 close $) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $224.26 | $5.567 | 12.62% | 11.10% | +11.35% | -0.14% |
| VTI | 0.036690 | $379.55 | $13.926 | 31.56% | 27.75% | +2.47% | +0.39% |
| VXUS | 0.154525 | $86.245 | $13.327 | 30.21% | 26.56% | +2.51% | +0.77% |
| OMCL | 0.106405 | $33.02 | $3.513 | 7.96% | 7.00% | **-29.73%** | -0.03% |
| XLE | 0.086775 | $61.84 | $5.366 | 12.16% | 10.69% | +7.32% | **-1.21%** |
| GEHC | 0.036393 | $66.64 | $2.425 | 5.50% | 4.83% | -2.98% | +0.39% |
| Cash (deployable) | — | — | $6.06 | — | 12.08% | — | — |

NVDA+OMCL combined **~20.58% of equity** — 25% concentration trigger clean, ~4.42pp buffer. NVDA alone **~12.62% equity / 11.10% pool** (18-20% trigger clean, ~1.10pp over BR's 10% pool target). **OMCL DCA gate (rule 18): pool needs ~$2.32 more accumulated profit to fire** — narrowest reading since 9/22's ~$1.91, as the pool's afternoon recovery outpaced this morning's read.

---

## Correlation analysis between holdings

- **NVDA, OMCL, XLE, and GEHC are all WACC-sensitive company-specific DCFs**; VTI/VXUS compress more diffusely under a sustained rate move. With the 10yr now confirmed at a fresh post-2007 high rather than easing, all four models move toward MS's ~9/30 rebuild in lockstep — this book's rate exposure is not diversified away by holding six different names, it is concentrated in a single macro factor most of them share.
- **NVDA and OMCL remain the book's two most idiosyncratically-correlated AI/growth-adjacent names**, but today they diverge on price (NVDA -0.14%, OMCL essentially flat -0.03%) — noise, not a decorrelation signal at this scale.
- **XLE's correlation to its own stated thesis remains broken for a second straight report.** It is down again today (-1.21%, the day's worst mover on the book) despite the Yanbu attack story still being live — the diplomatic Hormuz-deal counter-headline is still dominating price action over the physical supply shock. Two consecutive sessions of this pattern is no longer a single-day anomaly; it is starting to look like the regime BW flagged this morning.
- **GEHC (+0.39%) and VTI/VXUS (+0.39%/+0.77%) are the day's green names** — the broad-market core and the defensive healthcare satellite, both decoupled from the rate/oil axis that's driving NVDA/OMCL/XLE red or flat. This is a genuine, if modest, diversification benefit showing up in real time.

## Sector concentration risk with percentage breakdown

- **Tech/AI look-through concentration: ~27.7% of equity** (NVDA's direct 12.62% plus VTI/VXUS's embedded mega-cap tech weight) — unchanged, a 15th+ consecutive report naming this as the book's largest standing structural concentration, still below any hard mechanical trigger.
- **Energy: ~12.16% of equity** (XLE) — the designated Hormuz/oil hedge, now on its second consecutive red session despite a live, ongoing supply-shock headline. This desk is no longer treating this as a one-off; see hedging section below.
- **Healthcare: ~13.5% of equity** (OMCL 7.96% + GEHC 5.50%) — OMCL alone still carries the book's largest unrealized loss (-29.73%).
- **Broad-market core (ex-look-through sector detail): VTI + VXUS = ~61.8% of equity** — the genuine diversification backbone, and today, along with GEHC, the only green part of the book.
- **Cash: 12.08% of pool**, above BR's 11% floor but earmarked for the OMCL DCA gate and, subordinated to it, the XLE top-up trigger — not free capacity.

## Geographic exposure and currency risk factors

- **VXUS (~30.21% of equity)** remains the book's only direct non-US/non-USD-underlying exposure. Post-Trump-Xi-summit, the concrete deliverable (a trade-truce extension to January 2026) is a mild positive for the EM/China sleeve, but broader sentiment stays skeptical of a wider breakthrough — a mixed, not clearly bullish, backdrop, unchanged from this morning's read.
- **NVDA** carries indirect chip-export-policy risk via the same summit agenda item — no confirmed new restriction or relaxation as of this report.
- **XLE's exposure is global-energy-price risk, not currency risk** — USD-denominated holdings (XOM/CVX), commodity priced globally and currently exposed to both a live physical attack on Saudi export infrastructure (Yanbu) and a competing Hormuz-diplomacy narrative pulling the other way.
- **VTI, OMCL, GEHC** remain overwhelmingly US-domestic-revenue, minimal direct currency risk.

## Interest rate sensitivity for each position

- **OMCL — highest sensitivity.** MS's model carries the widest DCF gap on the book (~63% undervalued); a WACC rebuild compresses this discount the most in percentage terms of any position.
- **XLE — high sensitivity, and the position most exposed on two axes at once.** MS's composite fair value (~$62.8) now sits essentially at or just above today's live price ($61.84) — a rebuild pushing fair value down even modestly would tip this into outright overvalued, on top of the hedge already failing to track its own catalyst.
- **NVDA — high sensitivity.** Gap widened back out to ~-9.0% overvalued (from -7.2% yesterday) purely on the stock's own bounce — a live illustration of how much of this number is price-driven, independent of any rebuild.
- **GEHC — moderate-high sensitivity.** MS's WACC (8.5%) is the lowest on the book but GEHC is explicitly named among the models a full-week rebuild would touch.
- **VTI, VXUS — moderate, diversified sensitivity**, no single-company DCF, but both compress under a genuine sustained-rate-shock regime.
- **Cash — zero sensitivity**, and its relative value rises as the shock deepens.

## Recession stress test showing estimated drawdown

Scenario: a genuine demand-destruction recession (distinct from today's supply-shock/rate-shock regime) — broad equities down ~20-25%, and energy participates in the decline rather than acting as a hedge.
- Equity sleeve (currently 87.9% of pool) at a uniform -20%: **≈-17.6% of pool value**.
- Realistic dispersion: NVDA/OMCL (highest-beta, highest-duration) plausibly -25% to -30%, VTI/VXUS closer to -20%, XLE potentially falling *more* than the broad market in true demand destruction, GEHC (defensive healthcare) likely the most resilient single name.
- **Blended estimated pool drawdown: -18% to -24%**, roughly **-$9.03 to -$12.04** of the ~$50.18 pool — enough to erase all accumulated profit to date several times over and cut into the $50 base itself at the worse end.
- **This week is already a live, smaller-scale preview of the correlation-to-1 mechanism this stress test describes**: a book with no working hedge (XLE decoupled two sessions running), no options, and ~12% cash has essentially no ballast if a real drawdown regime arrives.

## Liquidity risk rating for each holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | 🟢 Very high | Mega-cap ETF, deepest liquidity on the book |
| VXUS | 🟢 Very high | Mega-cap international ETF |
| NVDA | 🟢 Very high | One of the most liquid single names on any US exchange |
| XLE | 🟢 High | Large sector ETF, ample daily volume |
| GEHC | 🟢 High | Large-cap, ample daily volume for this position's fractional size |
| OMCL | 🟡 Moderate | Small/mid-cap — thinner daily volume than the other five, still sufficient depth at this book's fractional-share sizing |

No liquidity risk is actionable at this book's scale — unchanged from this morning.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.58%) and NVDA alone (12.62%/11.10%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -29.73% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design. **The DCA gate has narrowed to ~$2.32 away**, its closest reading since 9/22. Repeating this desk's standing ask: when the gate fires, this desk wants a fresh dedicated read at that run, not a mechanical add, and wants MS's WACC-rebuild-clock outcome (~9/30, three trading days out) checked first, since a rebuild would shrink OMCL's discount without touching the underlying thesis.
- **XLE sizing risk, escalating from this morning's "newly framed" note to a pattern.** Two consecutive sessions of hedge-decoupling from live oil-supply-shock headlines is no longer a single-day observation — this desk is downgrading confidence in XLE's hedge value further and repeats: no trim recommended (no structural break, small position), but any top-up trigger evaluation (BR's subordinated mechanism) should now explicitly weigh a two-session pattern, not a one-off.
- **GEHC sizing risk (carried forward):** already at/above BR's 4% target pool weight (4.83%) with no overweight case made by any desk. No change.
- **No position sizing changes recommended this run.**

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates further, or Yanbu-style attacks spread to a second major export node (e.g., Ras Tanura).** Estimated probability over the next 30 days: **~20%, unchanged from this morning.**
2. **10yr settles decisively above 5% and holds for a full week**, triggering MS's coordinated rebuild across NVDA/OMCL/XLE/GEHC. Estimated probability: **~50-55%, raised from this morning's ~45-50%** — GS's own correction (5.209%, a fresh high, not an ease) removes the one data point that had been arguing for a reset; the clock is now inside its final week with no confirmed break in the trend.
3. **OMCL-specific structural thesis break** ahead of the 11/4 print, compounded by the DCA gate's proximity (now ~$2.32 away, closest since 9/22). Estimated probability: **~10%, unchanged.**
4. **Generalized correlation-to-1 liquidity panic** taking down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~20-22%, nudged up slightly** — two consecutive sessions of XLE failing to decorrelate is incremental evidence for, not against, this scenario's mechanism.
5. **A Hormuz phased-deal (Iran's 7-day reopening offer) actually firms into a signed framework.** Estimated probability within 2 weeks: **~25-30%, unchanged.** If it firms, XLE's valuation case (already near fair value) likely flips outright overvalued, compounding the hedge-reliability problem with a valuation problem.
6. **GEHC gives back some or all of its recent gain** toward MS's $70.8 base case. Estimated probability of a >5% pullback within a week: **~30-35%, nudged down slightly** — GEHC is one of only two green names on the book today, a modest positive data point against this scenario materializing imminently.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the failed-hedge / Hormuz-tail risk (biggest risk):** unchanged conclusion from this morning, now with a second session of evidence behind it — there is no clean equities-only substitute at this book's scale for a hedge that has now decoupled from its own thesis twice running. Don't add to XLE on the strength of any single oil-spike headline; treat the position as a partial, unreliable hedge when sizing any future energy exposure. Cash (~12.08% of pool) remains the only true ballast.
2. **Against the rate/WACC-rebuild risk:** no clean equities-only hedge exists for a broad discount-rate repricing. The two real levers remain (a) rule 6a's standing pause on new high-multiple core-ups, already in effect, and (b) having MS pre-stage the rebuild math (each fair value at WACC+50bp) before the clock completes ~9/30 — this desk repeats the recommendation with rising urgency now that the "easing" scenario has been formally retracted and only three trading days remain.
3. **Against tech/AI look-through concentration (~27.7%):** no new position-level action recommended. When the OMCL DCA gate opens (~$2.32 away, closest since 9/22), that capital is earmarked for OMCL by design (rule 18), not a free deployment decision.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.10% (target 10%, +1.10pp), VTI 27.75% (target 28%, -0.25pp), VXUS 26.56% (target 25%, +1.56pp), XLE 10.69% (target 12%, -1.31pp), OMCL 7.00% (target 10%, -3.00pp), GEHC 4.83% (target 4%, +0.83pp), Cash 12.08% (target 11%, +1.08pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -3.00pp gap is the largest, and it is appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **XLE top-up trigger:** funding remains subordinated to the OMCL DCA gate per BR's standing sequencing. Given two consecutive sessions of hedge-decoupling, this desk recommends the sequencing hold even more firmly than this morning — this is still not the window to lean into XLE on valuation grounds alone.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. 9/25 10:42 ET |
|---|---|---|
| Rate/WACC-rebuild risk (10yr confirmed fresh high ~5.21%, clock ~9/30) | 🔴 High | ↑ **worse** — GS's own "easing" call formally retracted; clock probability raised to ~50-55% |
| XLE hedge reliability (second consecutive session decoupled from oil-shock news) | 🔴 High | ↑ **worse** — now a two-session pattern, not a single-day finding |
| Hormuz/Iran binary tail risk (Yanbu attack, still live) | 🔴 High | → unchanged, ~20% probability held |
| Look-through tech/AI concentration | 🔴 High | → unchanged (15th+ report) |
| OMCL single-position drawdown + DCA gate | 🟡 Moderate | ↓ slightly better — gate narrowed to ~$2.32, closest since 9/22 |
| GEHC sentiment-vs-fundamentals gap | 🟡 Moderate | ↓ slightly better — one of two green names today |
| Trump-Xi summit aftermath / China-VXUS-NVDA policy risk | 🟡 Moderate | → unchanged, mixed/non-escalatory |
| Pool profit level (+0.37%) | 🟢 Low-Moderate | ↑ improved from morning's +0.08% |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [Treasury yields rise again to end a volatile week - CNBC](https://www.cnbc.com/2026/09/25/treasury-yields-bonds-debt.html)
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [Saudi Arabia reports fresh Houthi attacks as France offers military support to protect Yanbu - Euronews](https://www.euronews.com/2026/09/25/saudi-arabia-reports-fresh-houthi-attacks-as-france-offers-military-support-to-protect-yan)
- [Saudi Arabia allies line up support as Houthi attacks mount - Al Jazeera](https://www.aljazeera.com/news/2026/9/25/saudi-arabia-allies-line-up-support-as-houthi-attacks-mount)
- [Oil prices waver in face of Iran war truce and Houthi attacks - The National](https://www.thenationalnews.com/business/energy/2026/09/25/oil-prices-waver-in-face-of-iran-war-truce-and-houthi-attacks/)
- [Iran Has Suggested a Deal to Reopen the Strait of Hormuz in 7 Days - US News](https://www.usnews.com/news/world/articles/2026-09-25/iran-has-suggested-a-deal-to-reopen-the-strait-of-hormuz-in-7-days)
- Internal: trading-experiment/state.md (live Robinhood snapshot, 9/25 ~14:42 ET), analysts/ms-dcf-valuation.md (9/25 ~10:15 ET), analysts/gs-stock-screener.md (9/25 ~12:41 ET, correcting its own 09:42 ET rate call), analysts/jpm-earnings-analyzer.md (9/25 ~09:2x ET), analysts/br-portfolio-builder.md (9/24 ~16:1x ET)
