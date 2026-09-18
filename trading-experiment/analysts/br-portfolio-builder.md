# BR Portfolio Builder — Investment Policy Report
**Date: 2026-09-18 (Friday), ~16:11 ET (real ET verified via `TZ=America/New_York date`) — posted just after today's 16:00 ET close, ~24 hours after yesterday's report.**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. Holding figures below are the trader's own 2026-09-18 ~15:39 ET Robinhood-verified snapshot (state.md's seventh and last run of the day), the freshest available at report time.*

---

## TOP OF REPORT — single biggest gap vs. policy

**OMCL remains the single largest live gap on the book: ≈−3.12pp under its 10% pool target (≈6.88% actual vs. 10% target)** — the eleventh consecutive BR report to name it as such, unchanged in substance. The OMCL DCA gate (rule 18) needs ~$2.65 of accumulated profit; the pool is still net-negative (−0.30%), so the gate is loss-gated, not close-and-waiting as it briefly looked mid-week — it moved *further* away today, not closer. No action recommended; the gate is working as designed.

**The more important item this report carries is that yesterday's brand-new XLE top-up trigger failed its own first live test, and a real risk escalation showed up on the tape without crossing any adopted rule.** MS's composite XLE DCF gap widened to **−2.1%** today (needed flat-to-better than −1.8% to fire) — the trigger's valuation leg did not clear, so no top-up executes. Separately, BW flagged a genuine step-change in Hormuz rhetoric this afternoon (a second tanker struck, Trump reportedly weighing options described as "annihilating the Iranian regime"). This desk's stance is to judge the book against policy, not the news cycle: the language is materially worse, but it crosses none of this book's mechanical triggers (no single-position drift, no concentration breach, XLE's own hedge-sizing already addressed yesterday), so **no trade is authorized on rhetoric alone.** See resolution below.

---

## Where things stand vs. yesterday's target revision

Yesterday's report revised targets (VTI 30%→28%, NVDA 11%→10%, XLE 10%→12%, Cash 10%→11%) specifically to encode BW's look-through concentration finding and to give XLE more hedge room. Checking that revision against today's live book:

1. **No position breaches the ≥5pp single-position drift trigger under the revised targets** — same as yesterday. Every gap below is inside a ≤3.2pp band; only OMCL (DCA-gated, not a drift signal) sits outside a ~2pp band.
2. **XLE's new top-up trigger (BR, 9/17) tested and did not fire.** Condition was: (a) XLE not extending intraday (rule 2 — satisfied, XLE was flat/soft all session) and (b) MS's gap flat-to-better than −1.8%. MS's fresh 9/18 ~10:1x ET build put the gap at **−2.1%**, a hair *wider*, not better — the valuation leg failed. This is exactly why the trigger was written as a two-part AND condition rather than a price-zone-only rule: XLE's price alone did nothing disqualifying, but the fundamental read moved the wrong way. Trigger stays live, time-boxed to the ~10/1 full underwrite as originally written.
3. **BW's Hormuz-escalation language is a real, well-argued risk input, not a policy trigger.** BW itself did not recommend any position-sizing change this run — explicitly a "watch, don't act" report — and raised its own Scenario C (correlation-to-1 liquidity panic) probability estimate from ~5-10% to ~15-20%. That is a meaningful upward revision worth carrying forward into this desk's drawdown estimate below, but it is a probability re-weighting of an existing, already-modeled stress scenario, not a new structural break in any specific holding. Per rule 3 (single-name veto governs new positions, not trims of existing ones) and this book's own precedent (no prior Hormuz escalation tier has triggered a defensive trim absent a mechanical rule), **holding is the correct call today.**
4. **No target changes today.** Yesterday's revision already absorbed the structural concentration point; nothing new since then justifies a further target move. This is a one-day gap check, not a fresh underwrite.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$49.8516** (base $50, ≈−$0.1484 accumulated loss, per state.md's 15:39 ET run, seventh/last of the day). Total account ≈$99.8516 (pool + untouchable ~$50 reserve). Deployable cash $6.01 (~12.06% of pool).

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap (pp) | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core | VTI | US broad-market beta | 28% | 27.63% | −0.37 | ~$13.78 |
| Core | VXUS | Ex-US diversification | 25% | 26.62% | +1.62 | ~$13.27 |
| Satellite | NVDA | AI/semis conviction | 10% | 10.95% | +0.95 | ~$5.46 |
| Satellite | XLE | Energy / Hormuz-recession hedge | 12% | 11.20% | −0.80 | ~$5.58 |
| Satellite | GEHC | Healthcare-tech value | 4% | 4.69% | +0.69 | ~$2.34 |
| Satellite | OMCL | Deepest-discount healthcare tech | 10% | 6.88% | **−3.12** | ~$3.43 |
| Reserve | Cash | OMCL DCA gate + XLE top-up trigger | 11% | 12.06% | +1.06 | ~$6.01 |

No position breaches the ≥5pp single-position drift trigger. OMCL is the largest live gap at −3.12pp, gated by rule 18, not a drift problem.

---

## Core holdings

- **VTI (Vanguard Total Stock Market ETF)** — Core, US broad-market beta, target 28%. At 27.63% of pool, essentially on-target (−0.37pp) — the 8/7 and 9/3 trims plus yesterday's target revision continue to leave this position clean. Rule 6a's pause on new core-ups remains in full effect: MS's dated, sourced 10yr read (CNBC, ~4.93% at last check) sits above the 4.75% threshold; a lower, ambiguous aggregator figure (Forbes, "4.80% as of 3:30pm ET 9/17") is discarded per rule 4's preference for named, dated sourcing.
- **VXUS (Vanguard Total International Stock ETF)** — Core, ex-US diversification, target 25%. Modestly over target (+1.62pp), flat for several sessions. BW's currency-headwind flag (a hiking Fed strengthens the dollar, an uncompensated drag on an unhedged international fund) is now more live than a week ago given Wednesday's confirmed 25bp hike to 3.75-4% — still a watch item, not a drift breach.

## Satellite holdings

- **NVDA** — Satellite, AI/semiconductor mega-cap conviction bet, target 10% (revised yesterday). Actual weight 10.95% of pool, +0.95pp over target — essentially unchanged from yesterday's post-revision reading. MS's DCF gap widened again today (−6.2%, from −5.6% yesterday) on a flat/down day, meaning the overvaluation call is not just a price artifact. Rule 6a's pause continues to block any core-up regardless. True look-through AI/semis factor exposure (~27% of equity via VTI/VXUS tilts) remains a standing watch item for the ~10/1 full underwrite, not yet captured by any mechanical trigger.
- **XLE (Energy Select Sector SPDR)** — Satellite, this book's deliberate Hormuz/oil and recession hedge, target 12% (revised yesterday). Actual weight 11.20%, modestly underweight (−0.80pp). **The new top-up trigger failed its first live test today** (see above — MS's gap widened to −2.1%, not the flat-to-better than −1.8% required). This is the position most directly implicated by BW's escalated Hormuz-rhetoric flag, and it is worth stating plainly: XLE is *not* pricing in today's escalation (flat-to-down on the day, per BW), which is exactly the scenario this hedge exists to catch — but "the hedge isn't pricing the risk yet" is an argument for patience on the entry (don't chase XLE higher once it does reprice), not for buying more today at a valuation that just got less attractive. Trigger stays live and unchanged, time-boxed to ~10/1.
- **GEHC (GE HealthCare)** — Satellite, target 4%. Actual weight 4.69% (+0.69pp), still inside a defensible band. Yesterday's new $65 upside watch line was not re-triggered today — GEHC traded $64.28-64.54 across today's runs, back inside the $62-65 continuation band rather than holding above $65 with no catalyst. MS's DCF gap narrowed to +10.1% undervalued (from +12.7% yesterday) as the price pulled back off Thursday's brief pop above the band. No target change, no sizing action — the position remains held via the standing contingency plan, not a fresh conviction call this report.
- **OMCL (Omnicell)** — Satellite, target 10%, this book's deepest discount and only loss position. MS's DCF discount remains wide (~66.7% upside), essentially unchanged. Underweight by design of rule 18's DCA gate — see Top of Report; the gate moved further away today (~$2.65 vs. yesterday's ~$2.45-2.49) as the pool's accumulated profit slipped back into a small loss intraday before partially recovering. Held via a working rule, not fresh conviction each report.

---

## Expected annual return range

At current weights (≈53% core / ≈36% satellite / ≈11% cash on a pool basis, essentially unchanged from yesterday), blended expected return **~10–14% annualized, unchanged.** No individual holding's fair-value assumption moved enough today to justify revising the range — NVDA's DCF gap widened (more overvalued) while GEHC's narrowed (less undervalued), the two roughly offsetting at this book's small scale. GEHC (+10.1% DCF gap) and OMCL (+66.7% DCF gap) remain the structural upside levers, both patient.

## Expected maximum drawdown, bad year

- **Pool-level (trading capital only):** **−26% to −33% in an ordinary-to-severe bad year**, per BW's granular recession stress test (Scenario A demand-recession ≈−33%, Scenario B supply-shock stagflation ≈−26%). **BW raised its own Scenario C (correlation-to-1 liquidity panic from a direct US-Iran escalation) probability estimate today from ~5-10% to ~15-20%**, with an estimated ~−20% across all six holdings and ~20% probability of a >10% weekly drawdown from this specific cause — the scenario this desk judges least well-hedged by an equities-only, thin-cash-reserve book, since in a genuine panic even XLE's hedge property can invert. This is a probability re-weighting of an already-modeled scenario, not a new headline number for the range above, but it is the single most actionable risk input on file right now for anyone thinking about the tail, not the base case.
- **Account-level (including the untouchable ~$50 reserve):** roughly halved, since the reserve is flat cash and dilutes any trading-pool loss across the full account.

---

## Rebalancing schedule and trigger rules

- **Scheduled cadence:** monthly full re-underwrite (current window opened 9/1, next due ~10/1). This report is a same-cadence gap-check, not the full underwrite — no cadence miss to log today (contrast with yesterday's ~5.5-hour delayed cross-desk vet).
- **Standing triggers, evaluated every scheduled run regardless of news flow (rule 12):**
  1. Single-position drift ≥5pp of pool from target → mandatory review. No position currently within range (largest live gap OMCL at −3.12pp).
  2. NVDA single-name equity weight crossing ~18–20% → mandatory review (never yet fired; currently ~12.44% of equity).
  3. NVDA+OMCL combined equity weight crossing ~25% → mandatory review (currently ~20.26%, ~4.74pp buffer).
  4. OMCL DCA gate (rule 18): accumulated profit crossing $2.50 → mandatory review to add to OMCL in tranches. Currently the pool is −$0.1484 (−0.30%) — still net-negative, ~$2.65 away, moved further from the threshold today.
  5. GEHC structural-break contingency: revisit line at $62 (downside, widened from $65 on 9/15); new upside watch line at $65 (set 9/17) — neither re-triggered today.
  6. Rule 6a rate-shock pause: still fired. 10yr held above the 4.75% threshold on MS's dated sourcing; the WACC-rebuild clock reset on 9/17 and is now day 2 (targeting ~9/22 for a full settled week above 5%, per MS's framing — note this clock tracks a different, higher rate-normalization bar than the 4.75% pause threshold itself).
  7. XLE top-up trigger (BR, 9/17): $2-3 add from cash, the next time XLE is non-extended AND MS's gap is flat-to-better than −1.8%. **Tested today, did not fire** (gap −2.1%, worse not better). Stays live, time-boxed to ~10/1.
- Every trigger above is falsifiable and time-boxed where applicable (rule 7); every time-box defaults to no-action at expiry, never to a forced purchase (rule 16).

---

## Tax efficiency strategy (taxable account)

Unchanged: no tax-loss harvesting on OMCL's unrealized loss (still ~−31%) — at this book's scale (~$3.43 position) a harvest generates a trivial capital loss against no offsetting gains, and OMCL remains the book's highest-conviction discount; a 30-day wash-sale window would risk missing the position exactly as the DCA gate approaches its threshold. VTI's 8/7 and 9/3 trims remain the book's only realized activity, de minimis short-term-gain liability. ETFs (VTI, VXUS, XLE) remain inherently more tax-efficient than direct stock picks for a taxable account.

---

## Dollar cost averaging plan for redeploying profits

- **OMCL DCA gate (rule 18) remains the book's primary DCA mechanism.** It moved further from its threshold today (~$2.45-2.49 yesterday → ~$2.65 today) as the pool touched a fresh intraday loss before partially recovering — the gate is behaving exactly as designed: profit-linked, not price-linked, and it stayed shut through today's chop just as it did through Wednesday's FOMC-day swing.
- **XLE top-up trigger (BR, 9/17) is this book's second DCA-style mechanism**, funded from cash rather than a position trim. Tested for the first time today and did not fire (valuation leg failed) — a useful early validation that the trigger's AND-condition design actually discriminates, rather than firing on price alone.
- **Deployable cash ($6.01, ~12.06% of pool)** sits modestly above the 11% reserve target (+1.06pp) — the funding source for whichever gate (OMCL or XLE) clears first, not a drift gap to act on itself.

---

## Areas to consider — recent WEF / macro-policy discussion points

- **The confirmed 9/16 FOMC hike (25bp, to 3.75-4%, first hike since 2023) is now the concrete policy event underneath WEF's Global Risks Report 2026 framing** (geoeconomic confrontation ranked the top global risk for 2026, with economic risks — downturn and inflation — flagged as rising fastest short-term). A hawkish hike delivered explicitly to fight oil-driven inflation, with 16 of 18 FOMC participants still expecting another hike this year per the dot plot, is close to a textbook instance of the report's core thesis: geopolitical shock (Hormuz) feeding directly into monetary-policy tightening, with no clean resolution in sight. This book's core/satellite structure (VXUS for geographic diversification, XLE explicitly upsized yesterday as the energy/recession hedge) remains the designed answer to that combination.
- **BW's escalated Hormuz-rhetoric read today (Trump reportedly weighing options described as "annihilating the Iranian regime") is a genuine step-change in tail-risk language**, not yet reflected in a repriced hedge (XLE flat-to-down on the day) or in a wider MS DCF gap moving in XLE's favor. Worth flagging as the item most likely to force an actual mechanical trigger (XLE's own top-up gap, or a fresh structural-break read on any holding) if it persists into next week, rather than something requiring action today.
- **Today's mixed, options-expiration-driven close (S&P +0.11%, Nasdaq +0.39%, Dow −0.13%)** is a genuine change in texture from Thursday's clean +1-1.7% broad relief rally — neither an extension nor a reversal, consistent with a market still digesting Wednesday's hike rather than expressing a fresh view on the war.

---

## One-page investment policy statement

**Objective:** Compound a $50 base (plus accumulated trading profits) inside a ~$100 taxable cash account into a long-running, auditable track record, via a disciplined core/satellite equity and ETF portfolio. No options. Aggressive risk tolerance, short-to-medium horizon, long-run compounding ambition.

**Structure (unchanged since yesterday's revision):**
- **Core (53% target):** VTI 28% (US broad market), VXUS 25% (ex-US diversification).
- **Satellite (36% target):** NVDA 10% (AI/semis conviction; DCF gap ~−6.2% overvalued, widening; hard-capped by concentration triggers), XLE 12% (energy/Hormuz-recession hedge; DCF gap ~−2.1% overvalued; top-up trigger live but failed its first test today), GEHC 4% (healthcare-tech value; DCF gap ~+10.1% undervalued; contingency-plan-governed), OMCL 10% (deepest-discount healthcare-tech; DCF gap ~+66.7% undervalued; underweight by DCA-gate design).
- **Reserve (11% target):** deployable cash, held for the OMCL DCA gate and the XLE top-up trigger — never deployed reactively.

**Discipline:**
1. Every new position or add is governed by a pre-written, falsifiable, time-boxed trigger (rule 7) — never a same-minute reaction to news or price (rule 4). Today's XLE top-up trigger test is a live example: the AND-condition design correctly withheld a fire when only one leg (price) looked favorable.
2. Structural-break-only reaction rules govern every binary event — a rate hike, an escalating war headline, or a red (or green) close alone is never a trade signal by itself. BW's escalated Hormuz language today is exactly the kind of well-argued, still-non-mechanical input this rule exists to weigh without acting on reflexively.
3. Every discretionary sizing decision requires cross-desk vetting (MS valuation + BW risk, rule 6) before capital moves.
4. Concentration triggers (NVDA single-name, NVDA+OMCL combined) are forced decision points, never allowed to lapse silently once flagged — both clean today, comfortable buffers on each.
5. Macro/rate-shock pauses (rule 6a) block new high-multiple core-ups mechanically, independent of target revisions — the confirmed 9/16 hike does not change the pause's own 4.75% threshold test.
6. Every time-box defaults to no-action at expiry (rule 16). Profit-linked gates (OMCL's DCA gate) are never substituted with price-linked ones.
7. This desk judges the book against policy, not the news cycle — a genuine escalation in rhetoric is logged and weighed, but only acted on once it crosses an adopted, falsifiable rule.

**Current live status (2026-09-18, ~15:39 ET basis, seventh/last run of the day):** total account ≈$99.8516 (pool ≈$49.8516, reserve $50 untouched) — the pool sits at a small −0.30% accumulated loss, essentially flat vs. yesterday's +0.09%, after a wider intraday round-trip driven by OpEx chop and the Hormuz-rhetoric escalation. No single-position or concentration trigger fired. The OMCL DCA gate moved further from its threshold (~$2.65 away). The new XLE top-up trigger (set 9/17) was tested for the first time and did not fire — its valuation leg failed, exactly as the AND-condition design intends. GEHC's upside watch line was not re-triggered. **No target changes and no trades are recommended today** — this report's function was a one-day discipline check against yesterday's revision, and the book passes it cleanly.

---

Sources:
- Internal: trading-experiment/state.md (9/18 09:37 ET through 9/18 15:39 ET), analysts/bw-risk-assessment.md (9/18 ~14:44 ET, second report today), analysts/ms-dcf-valuation.md (9/18 ~10:1x ET), analysts/gs-stock-screener.md (9/18 ~15:41 ET), analysts/jpm-earnings-analyzer.md (9/18 ~09:20 ET)
- [Fed rate decision September 2026: Rates rise to 3.75%-4% - CNBC](https://www.cnbc.com/2026/09/16/fed-rate-decision-september-2026.html)
- [FOMC rate decision: Fed hikes for the first time in three years - InvestingLive](https://investinglive.com/central-banks/fomc-rate-decision-fed-hikes-for-the-first-time-in-three-years/)
- [Stock Market Today (Sept. 18, 2026): Nasdaq, S&P 500 edges lower after Fed rate hike lifts stocks - TheStreet](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-sept-18-2026)
- [Stock market today: Dow, S&P 500, Nasdaq slip as bond yields rise - Yahoo Finance](https://finance.yahoo.com/markets/live/stock-market-today-friday-september-18-dow-sp-500-nasdaq-080504071.html)
- [US strikes Iran as Tehran retaliates, raising risk of wider war - CNBC](https://www.cnbc.com/2026/09/01/us-strikes-iran-after-new-hormuz-strait-shipping-attacks-centcom.html)
- [Treasury Rates Today: September 17, 2026 - Forbes Advisor](https://www.forbes.com/advisor/investing/treasury-rates/)
