# BR Portfolio Builder — Investment Policy Report
**Date: 2026-07-31 (Friday, ~16:15 ET, after the close)**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-07-30 ~16:12 ET. Portfolio figures below are sourced from state.md's 7/31 ~15:36 ET Robinhood-verified `get_portfolio` read (the trading week's final snapshot, taken near the 16:00 ET close) — I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy

**VTI remains the book's single biggest gap, essentially unchanged from yesterday: +6.62pp overweight (36.62% actual vs. 30% target)**, up marginally from +6.5pp on 7/30. Nothing new happened to VTI itself this week to cause this — it's the same sizing artifact flagged yesterday (every core dollar this book has ever deployed went into VTI before VXUS caught up), and with zero new capital deployed today, the gap simply held steady rather than self-correcting. **Standing recommendation unchanged: do not trim VTI to force compliance** (rule 1, no fresh catalyst to sell; see §6 on tax efficiency) — direct the next new dollar to satellite instead, same as yesterday's call.

**What's actually new since yesterday's report is not a portfolio-construction fact but a risk-regime one, and this desk is folding it into policy for the first time today.** This afternoon's Treasury-yield spike (10-year to 4.737% intraday, highest since January 2025; 30-year to ~5.22%, highest since 2007 — both confirmed by BW's 14:41 ET report and independently by this desk's own fresh search) is the first genuinely macro-wide, cross-asset risk factor this book has faced. State.md's own Strategy & theories section flagged this explicitly as week 4's open question: *"this book has no rate-shock playbook."* **This report proposes one — see §5, new Rule 6a.** That is this desk's primary value-add this cycle, more than the unchanged allocation table.

---

## 1. Recommended allocation vs. current book

Trading-book value (per state.md's 7/31 ~15:36 ET Robinhood-verified read, the last check-in of the trading week): **pool ≈ $48.86** = equity $44.86 + deployable cash $4.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below.)

| Sleeve | Ticker | Role | Target % | Current % | Current $ | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 36.62% | $17.895 | **+6.62pp OVER (largest gap, essentially flat vs. 7/30's +6.5pp)** |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 26.77% | $13.081 | +1.77pp over (flat vs. 7/30's +1.9pp) |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20%) | 10.19% | $4.977 | −4.81pp under (price-drift underweight, not a decision) |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 7.69% | $3.755 | −2.31pp under (post-earnings drawdown, now ~-20% from avg cost) |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.57% | $5.164 | +0.57pp ~on target |
| Cash | — | Dry powder / event-window buffer | 10% | 8.19% | $4.00 | −1.81pp under (still the all-time floor) |
| **Total** | | | **100%** | **100%** | **~$48.86** | |

**Core / Satellite / Cash roll-up**: Core 55% target vs. **63.39% actual (+8.39pp OVER)**; Satellite 35% target vs. **28.45% actual (−6.55pp UNDER)**; Cash 10% target vs. 8.19% actual (−1.81pp under). This roll-up is a near-exact match to yesterday's (63.4%/28.4%/8.2%) — a full trading day with no trade produced almost no drift, which is itself informative: **the book's allocation problem is not deteriorating, it's just sitting un-addressed for lack of deployable capital**, not for lack of a clear direction to go.

---

## 2. Core vs. satellite discipline — status check

- **Core (VTI + VXUS, target 55% of pool)**: no change in recommendation from yesterday. Neither leg gets a top-up; VTI's overweight is a monitor-and-redirect item (§5), not a trim candidate.
- **Satellite (NVDA + OMCL + XLE, target 35% of pool)**: still 6.55pp under target, still where the next new dollar belongs (§7) — but as of today, sizing that next dollar has a new complication (see §5's new rate-shock rule): the two candidates most often discussed for it, OMCL (widest DCF discount on file) and further NVDA, are exactly the two names BW flagged this afternoon as compounding two independent negative channels (CDS/circular-financing overhang for NVDA, plus now a shared rate-sensitivity hit for both).
- **Cash (target 10%)**: still ~8.2% of pool, ~$4.00, unchanged all day (per state.md's own 15:36 ET close-of-week read). No mechanism exists to rebuild it except fresh deposits or realized gains, restated from yesterday. Given today's new macro risk, this desk agrees with BW that the current floor is a genuine, not just theoretical, constraint — there is no capacity left in this book to react to anything further this week.

---

## 3. Expected annual return range (historical basis)

| Holding | Basis | Expected range (long-run, annualized) |
|---|---|---|
| VTI | US total-market index, ~97-year S&P-proxy history | ~9-11% nominal, with real bad-decade outcomes as low as 0-4% — **now with a live, not just historical, headwind**: a sustained higher-for-longer rate regime compresses the multiple on VTI's ~42% mega-cap-tech tilt specifically, per BW's fresh "High" rate-sensitivity upgrade on VTI today |
| VXUS | Developed + EM ex-US index | ~6-9% nominal; wider dispersion than VTI, currency-adjusted; a stronger-dollar impulse from higher US yields is a mild, second-order headwind (BW's geographic-exposure note, 14:41 ET) |
| NVDA | Single-name, AI/semis hypergrowth — MS's fresh DCF (~$150.6 fair value, unchanged model, ~24.3% downside at today's $199.06 close, widened back out from ~21.5% on 7/30 purely on the price bounce) | Historically 25-40%+ CAGR over the past decade; **not a sustainable forward baseline** — today's own DCF move (wider gap on a price bounce, no fundamental change) is itself evidence of how much of NVDA's recent return has been multiple expansion, exactly the kind of return a rate-shock regime tends to give back first |
| OMCL | Small/mid-cap healthcare-tech, high earnings-day beta | ~8-15% long-run. MS's transcript-confirmed DCF now shows the widest discount on file (~50.8% upside, $53.89 fair value vs. $35.74 close) — genuinely undervalued on paper, but BW is explicitly walking back this morning's "risk-cleared in principle" framing given OMCL's own Moderate-High rate sensitivity and today's continued drift (-3.69% to -4.29% intraday, no fresh catalyst) |
| XLE | Energy sector basket, oil-cycle-driven | ~5-9% long-run with high cyclical variance; MS's first actual-print-based composite (XOM/CVX Q2 results replacing estimates) reads ~13.1% overvalued, essentially confirming the pre-print estimate (~12.7%) — a real validation of the modeling approach, not a new signal |

**Blended portfolio expectation at current weights**: roughly **8-12% annualized** over a full market cycle — a touch lower than yesterday's 9-13% read, mechanically, because today's rate move widens the fair-value gap on the book's two most rate-sensitive names (NVDA's DCF gap widened from ~21.5% to ~24.3%) without any offsetting improvement elsewhere. This is not a change in any individual holding's long-run thesis; it's the return-side mirror of a genuinely worse discount-rate environment landing on the same day nothing else changed.

## 4. Expected maximum drawdown in a bad year

Per BW's 14:41 ET recession stress test (weights essentially unchanged from this desk's own close-of-week read):

- **Scenario A (standard demand-driven recession/tech bear market)**: equity-value drawdown ≈ **−43.2%** (~$19.35 of $44.80 equity), pulling total account value to **~$79.44** — an **~19.6% total-account drawdown**, flat vs. 7/30.
- **Scenario B (stagflation/supply-shock recession, Hormuz war escalates further)**: equity-value drawdown ≈ **−31.9%**, total account to **~$84.50**, an **~14.5% total-account drawdown**, flat vs. 7/30. BW's report makes a point worth restating here in policy terms: **today's rate move is arguably the first live data point of Scenario B actually beginning to play out** (oil-driven inflation pressure plus a hawkish Fed response, rather than a purely hypothetical header) — this is not a new drawdown estimate, but the scenario just got less hypothetical.

**Policy guidance, restated**: the $50 reserve remains the only hard floor on total-account damage in either scenario, and it was not touched this week. Nothing in today's rate move changes the drawdown math directly — it changes how plausible Scenario B's trigger condition looks.

## 5. Rebalancing schedule and trigger rules

1. **Calendar cadence**: standing bi-weekly allocation check at a designated Monday-morning run, plus any trigger-fired reviews below — unchanged.
2. **Drift trigger**: any single position drifting more than **5pp from its own target %** flags for review at the next scheduled run — **VTI (+6.62pp) remains flagged, essentially flat vs. yesterday.** NVDA (−4.81pp) remains a monitor-only underweight (price drift, not actionable per rule 2).
3. **Satellite concentration trigger** (unchanged): any single satellite name crossing ~18-20% of equity forces a mandatory trim review — all three well clear (per BW's 14:41 ET read, 8.44-11.48% of equity).
4. **Falsifiable-trigger discipline** (unchanged): no open time-boxed trigger remains on this desk's docket. XLE's own 8/14 time-box (state.md) is not applicable — XLE already fired and closed 7/28.
5. **VTI drift review, restated**: still a monitor-and-redirect item, not a trim candidate (see §6). Revisit at the next bi-weekly cadence check.
6. **New — Rule 6a: a falsifiable rate-shock trigger, proposed to close state.md's own open week-4 question.** BW and GS have both flagged, correctly, that this book has no crisp rule for a genuinely macro-wide (not sector- or single-name-specific) risk factor. This desk proposes the following, calibrated off today's actual move (10-year intraday high 4.737%, its highest since January 2025; 30-year ~5.22%, its highest since 2007):
   - **Trigger**: the 10-year Treasury yield closes **above 4.75%** for **two consecutive trading sessions**, OR the 30-year closes above **5.25%** for two consecutive sessions (both set just above today's intraday peak, deliberately requiring a sustained close, not an intraday spike, to fire — consistent with this book's "no same-minute decisions" discipline).
   - **When it fires**: (a) pause any *new* high-multiple/growth-oriented add (a further NVDA buy, or a further VTI top-up specifically, given VTI's ~42% mega-cap-tech tilt) until yields close back below the trigger level for at least three consecutive sessions; (b) the next new satellite dollar gets explicit priority toward a lower-duration, non-growth-multiple name (GEHC remains BW's and this desk's standing, unacted candidate) over a higher-duration name, even one that otherwise clears rule 6's cross-vetting bar; (c) request a same-cycle MS re-read of NVDA's and OMCL's WACC assumption specifically, since rule 10 (state.md) already flagged that same-day reports can go stale intraday on discount-rate inputs even when nothing else about them changes.
   - **Falsification / close condition**: if yields close back below both thresholds for three consecutive sessions without a position change having been forced, this rule lapses without action — same discipline already validated on OMCL's and XLE's triggers (rule 7).
   - **Where today's actual move stands relative to this trigger**: not yet fired — today was a single-session intraday spike (10-year), and GS's 15:41 ET report notes a partial end-of-day retrace toward ~4.67%. This is a proposed rule for the *next* time this happens, not a claim that it already fired.

## 6. Tax efficiency strategy (taxable cash account)

- **Every position in this book is still short-term** — the oldest holding (NVDA, entered 7/9) is not yet a month old, nowhere near the 1-year long-term threshold. Any gain realized today is taxed as ordinary income.
- **VTI's overweight should still not be trimmed to force §5 compliance.** VTI shows a modest unrealized position (per BW's live read) that would not cleanly harvest a loss today; more importantly, the underlying thesis (broad US equity core exposure) hasn't changed — selling core to satisfy a drift trigger, absent a fresh catalyst, is process for its own sake (rule 1).
- **Tax-loss harvesting readiness, updated**: OMCL is down further today (now ~-24% from the $46.99 avg cost per BW's 14:41 ET read, the book's largest unrealized loss by a wide margin, and now also the fundamentally strongest thesis in the book per MS's ~50.8% DCF discount). If a genuine structural-break sell signal ever fires on OMCL, that loss would be realized as short-term and usable to offset a short-term gain elsewhere. No action recommended today — standing readiness note.
- **Wash-sale discipline**: unchanged — if a satellite position is ever sold at a loss, do not re-buy the same ticker within 30 days.
- **Materiality caveat**: at ~$48.86 deployed, today's tax dollar impact is trivial. The discipline exists for when the account scales.

## 7. Dollar-cost-averaging plan for redeploying profits

1. **No new dollar recommended today.** Deployable cash is ~$4.00 (8.19% of pool), unchanged all session, and this desk agrees with BW that today's rate shock is a reason for additional, not less, caution about spending the last of it reactively.
2. **Standing next-dollar priority, once capital is available — updated this run to reflect §5's new rate lens**: **(a) OMCL still ranks first on pure valuation** (MS's widest DCF discount on file, ~50.8%, transcript-confirmed, no structural break) — but this desk now explicitly defers to BW's fresh caution: OMCL is rated Moderate-High on rate sensitivity, and adding to it on the exact day the rate environment worsened is not the moment, even with fundamentals this desk likes. Hold the OMCL sizing question open until either yields stabilize or fresh capital arrives, per BW. **(b) GEHC moves up in explicit priority, not just as a repeated flag** — it is the one candidate on the board that would diversify both the sector axis (BW's long-standing point) *and* the rate-duration axis (today's new point), and it still needs its own rule-6 cross-vetting cycle before it's actionable. This desk recommends that cycle (MS DCF + BW risk read) be requested explicitly next week, rather than left as a standing, unacted mention for a third straight week. **(c) XLE — maintain, not grow** — already ~on target, no fresh trigger. **(d) Core (VTI or VXUS) last** — both at or above target, unchanged from yesterday.
3. **Satellite DCA, general**: no *new* (fourth) satellite slot recommended until NVDA, OMCL, and XLE have each had more of a track record at current sizing — unchanged.
4. **Cash floor**: unchanged from yesterday's flag — cash below ~5% of pool with a live, unhedged macro catalyst on the docket (today's rate move qualifies) is itself a risk-buffer concern, not just a deployment-readiness one.

## 8. Areas to consider from recent WEF / macro-policy discussion (fresh WebSearch this run)

- **The core Davos 2026 diversification thesis stands, and today's rate shock is a second, independent validation of the same underlying idea from a different angle.** Where the book's VTI→VXUS rebalance addressed geographic/geopolitical concentration, today's news is about duration/rate concentration — a different axis, same lesson: concentrated exposure to any single macro factor (be it one region or one interest-rate regime) is the thing this book's satellite diversification (OMCL, XLE, and a prospective GEHC) is meant to guard against.
- **A genuinely new, directly applicable data point from this run's search**: institutional fixed-income desks are responding to this same rate move by **shortening duration** — "higher yields are pushing clients to shorten duration and rethink bonds' role in portfolios," with barbell (short-duration + selective long-duration) and laddering approaches both cited as live 2026 responses to a higher-for-longer regime, per Cambridge Associates and industry commentary this month. **This book has no bond sleeve (equities/ETFs only), so the literal fixed-income playbook doesn't transfer directly** — but the read-across for an equities-only mandate is exactly what Rule 6a proposes: treat "high-duration" (long-dated growth multiples, i.e., NVDA and VTI's tech tilt) the way a bond desk treats long-maturity paper in a rising-rate regime, and prefer lower-duration equity exposure (value-tilted, cash-generative, lower-multiple names like GEHC or XLE) for new capital until the regime stabilizes.
- **"Episodic energy bottleneck" and "geoeconomic confrontation" remain the WEF scenarios most directly validated by this book's own live experience** (Hormuz/oil, now compounding with a rate shock) — nothing new to add here beyond what's been said in the last two reports; the marginal news this week is the rate axis, covered above, not a new geopolitical development.
- **Gold/real-assets conviction among institutional allocators continues to be cited as a hedge for exactly this kind of environment** (rate uncertainty + inflation-credibility concerns) — this book's equities/ETFs-only mandate still has no direct vehicle for this theme, but it remains a defensible candidate for a future cross-vetting cycle if the satellite sleeve ever opens a further slot. Flagging for the record only, no action today.

---

## One-page Investment Policy Statement (for the trader to follow)

**Client**: Claude Robinhood Trader experiment. Capital: $50 base + accumulated profits, inside a ~$100 taxable cash account (the ~$50 beyond trading capital is untouchable reserve). Risk tolerance: aggressive. Horizon: short-to-medium, with an explicit goal of compounding into a long-running track record. Universe: equities/ETFs only, no options, fractional shares available.

**Target allocation** (of the ~$48.86 trading pool): Core 55% (VTI 30% / VXUS 25%) — Satellite 35% (NVDA 15% soft-capped at 18-20%, OMCL 10%, XLE 10%) — Cash 10% (higher during live binary-event windows or, new as of today, a live rate-shock window per Rule 6a).

**Standing rules** (see Strategy & theories in state.md for full detail, rules 1-10, plus new Rule 6a above): no trade without a fresh catalyst; never chase an extended move; diversified-basket buys are exempt from the single-name geopolitical veto; always verify price live via Robinhood before sizing; a DCF "sharply overvalued" call is a hard pass; new ideas need a full cross-vetting cycle before sizing; open theses get a falsifiable trigger with a hard time-box; look-through concentration matters more than headline allocation; **new — a sustained rate-shock (10yr >4.75% or 30yr >5.25%, two consecutive closes) pauses new high-multiple/growth adds and redirects new capital toward lower-duration names.**

**Current live decision point**: none forced. VTI's +6.62pp drift-trigger overweight remains a monitor-and-redirect item, unchanged from yesterday. Cash remains thin (~$4.00, 8.19% of pool); preserve it, especially now that a live rate-shock risk factor sits alongside the still-open OMCL sizing question and the still-active Hormuz situation.

**Review cadence**: bi-weekly standing allocation check, plus trigger-fired reviews on >5pp single-position drift (VTI still flagged), satellite concentration crossing 18-20% of equity, any pre-committed time-box reaching its deadline, or Rule 6a's new rate-shock trigger firing.

---

## Cross-check with other analysts

- **BW (7/31, ~14:41 ET)**: downgraded risk grade to D+ from C- specifically on today's rate spike compounding NVDA's existing CDS/circular-financing overhang, plus flagging OMCL's Moderate-High rate sensitivity. This report's new Rule 6a is a direct policy response to BW's and GS's shared observation that no analyst had yet proposed a crisp, falsifiable rate-shock rule — this desk is that proposal, not a restatement of BW's risk read.
- **MS (7/31, ~14:30 ET)**: full actual-print rebuild of XLE's composite DCF (XOM missed, CVX beat, net ~-13.1%, essentially confirming the pre-print estimate — a genuine validation of the modeling approach) plus a transcript-confirmed OMCL update (no structural break, one modest new bookings-guidance watch-item) and a mechanical NVDA refresh (gap widened to ~24.3% purely on today's price bounce). This report's §3/§7 lean directly on MS's fresh NVDA/OMCL numbers.
- **GS (7/31, ~15:41 ET)**: no ranking changes this cycle; independently flagged the same Treasury-yield story and confirmed BW's downgrade was a parallel, not a triggered, read of the same data. OMCL and XLE remain the top two actionable names (position management, not fresh buys); AMZN remains an unvetted, extended-move watch item, outside this desk's mandate until it clears rule 6.
- **JPM (7/31, ~13:15 ET)**: resolved the OMCL transcript data gap precisely (tariff refund $15M, EPS reconciliation, formal Q3 guidance, new bookings-range detail); flagged the XOM/CVX split-decision print as the key input for whichever desk builds the next XLE read (MS did, this cycle); held PTCT/OXY/IONQ all on WAIT.

---

Sources:
- [Bond Allocation Strategy Shifts as Yield Curve Steepens in 2026](https://www.getbudgeting.com/posts/2026-01-06-bond-allocation-strategy/)
- [Goldman Sachs clients rethink bond allocations as yields stay elevated (Prism News)](https://www.prismnews.com/workplace/goldman-sachs/goldman-sachs-clients-rethink-bond-allocations-as-yields)
- [2026 Outlook: Fixed Income Views (Cambridge Associates)](https://www.cambridgeassociates.com/insight/2026-outlook-fixed-income-views/)
- [30-year Treasury yield hits highest level since 2007 after Fed keeps rates unchanged (CNBC)](https://www.cnbc.com/2026/07/29/treasury-yields-fed-interest-rates.html)
- [US 30-Year Yield Soars to Highest Since '07 After Fed Stands Pat (Bloomberg)](https://www.bloomberg.com/news/articles/2026-07-29/treasuries-jolted-as-fed-hold-trims-september-hike-bets)
- [Treasury yields follow oil prices higher as Fed officials say rate hikes are needed (CNBC)](https://www.cnbc.com/2026/07/31/treasury-yields-inflation-interest-rates-federal-reserve.html)
- Internal: trading-experiment/state.md (7/31 balance history and Strategy & theories), analysts/bw-risk-assessment.md (7/31 ~14:41 ET), analysts/ms-dcf-valuation.md (7/31 ~14:30 ET), analysts/gs-stock-screener.md (7/31 ~15:41 ET), analysts/jpm-earnings-analyzer.md (7/31 ~13:15 ET)
