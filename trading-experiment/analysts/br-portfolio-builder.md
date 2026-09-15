# BR Portfolio Builder — Investment Policy Report
**Date: 2026-09-15 (Tuesday), ~16:11 ET (real ET verified via `date -u`/ET conversion) — second report of the day, ~2h35m after the 13:35 ET report, market now closed (16:00 ET).**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. Holding figures below are the trader's own 2026-09-15 ~15:36 ET Robinhood-verified snapshot (state.md's seventh and final run of the day — the last run before today's close), the freshest available at report time.*

---

## TOP OF REPORT — single biggest gap vs. policy

**OMCL remains the single largest live, addressable gap on the book, and it widened again today: ≈−3.02pp under its 10% pool target (≈6.98% actual vs. 10% target)**, vs. −2.84pp at the 13:35 ET report. The cause is the same mechanism flagged twice already — OMCL fell a further −2.75% today on **still no identifiable catalyst** (GS's report now explicitly calls out a fourth straight intraday run of no-catalyst weakening, 14:36→15:36 ET), while the pool itself deepened from a −$0.1716 to a **−$0.3033 (−0.61%) accumulated loss**, the book's worst reading yet. The gate that closes this gap (rule 18's OMCL DCA trigger, $2.50 of accumulated profit) is **loss-gated and moving further away, not closer** — this is now the second consecutive report where the gate's distance from firing has widened rather than narrowed. No action recommended: rule 18 is working exactly as designed (profit-linked, not price-linked — a cheaper OMCL does not trigger a buy on its own), but the persistence of unexplained weakness with zero catalyst across four straight intraday reads is worth this desk naming as a pattern, not just a number, consistent with GS's own sharper framing this run.

**No process gap to log this time** — this report follows the prior one by under three hours, the routine cadence this desk should be holding (a contrast worth stating plainly after last week's three-day silence).

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$49.6967** (base $50 minus ~$0.3033 accumulated loss, per state.md's 15:36 ET close, the day's seventh and final run — market has since closed). Deployable cash $6.01 (~12.09% of pool).

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap (pp) | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core | VTI | US broad-market beta | 30% | 27.51% | **−2.49** | ~$13.67 |
| Core | VXUS | Ex-US diversification | 25% | 26.64% | +1.64 | ~$13.24 |
| Satellite | NVDA | AI/semis conviction | 11% | 10.59% | −0.41 | ~$5.26 |
| Satellite | XLE | Energy hedge (Hormuz/Saudi supply shock) | 10% | 11.49% | +1.49 | ~$5.71 |
| Satellite | GEHC | Healthcare-tech value | 4% | 4.71% | +0.71 | ~$2.34 |
| Satellite | OMCL | Deepest-discount healthcare tech | 10% | 6.98% | **−3.02** | ~$3.47 |
| Reserve | Cash | OMCL DCA gate + future entry triggers | 10% | 12.09% | +2.09 | ~$6.01 |

No position breaches the ≥5pp single-position drift trigger (rule 1). OMCL is the largest live gap at −3.02pp, unchanged in kind (still gated, not actionable) from every report since 9/4.

---

## Core holdings

- **VTI (Vanguard Total Stock Market ETF)** — Core, US broad-market beta. Underweight remains the same mechanical residue of the 9/3 GEHC-funding trim, not a call on VTI. **The dominant governing fact for this sleeve is now settled, not pending: today's 10yr Treasury closed at 5.02%, a confirmed settled close above 5% for the first time since 2007** (GS 15:4x ET, corroborated by Bloomberg/CNBC). This is the first leg of MS's own stated four-model rebuild trigger (NVDA/XLE/GEHC/OMCL WACCs) — the clock for "held a full week" starts today, not fired yet. Rule 6a's pause on new VTI/VXUS/NVDA core-ups remains in effect unchanged; a top-up back toward 30% stays next-in-line only once the pause lifts, not before.
- **VXUS (Vanguard Total International Stock ETF)** — Core, ex-US diversification. Modestly over target (+1.64pp), essentially flat vs. 13:35's +1.72pp. No action warranted. BW's standing note that VXUS moved in lockstep with the US sleeve during last week's global AI-narrative shock (rather than decorrelating) still stands as a caveat on this sleeve's structural diversification value.

## Satellite holdings

- **NVDA** — Satellite, AI/semiconductor mega-cap conviction bet. Modestly underweight (−0.41pp). **MS's DCF gap widened back out to ≈−3.4% overvalued** (from 9/14's near-fair-value −1.6%) as today's +0.44% partial bounce retraced some of Monday's AI-slowdown selloff — a price move re-opening the gap, not a cash-flow change; the model itself is unchanged since 8/27. Rule 6a's pause blocks any core-up regardless of gap direction until the rate picture resolves. DOJ/Groq antitrust overhang and the AI-slowdown-narrative's political foothold (20+ lawmakers, live bill text per BW) both remain open, unescalated watch items. NVDA alone ~10.59% of pool / ~12.04% of equity — 18-20% concentration trigger clean, wide buffer.
- **XLE (Energy Select Sector SPDR)** — Satellite, this book's deliberate Hormuz/oil hedge. Modestly over target (+1.49pp). **MS raised the composite's long-run Brent reversion assumption to ~$77/bbl (from ~$75) on a genuinely worse Saudi East-West pipeline repair timeline, narrowing the overvaluation gap to ≈−3.0%** (from 9/14's −6.2%) — still overvalued, still no add, hedge thesis intact and reinforced rather than weakened. New this run: GS flags a real, unreconciled spread between wire services on the repair estimate (AP: 3-5 weeks; Reuters: 5-6 weeks) — even the faster estimate implies weeks, not days, of continued outage, which sharpens rather than undercuts the held-hedge case. Brent ~$107.46-107.50, still near four-month highs. Hold, no trim, no add.
- **GEHC (GE HealthCare)** — Satellite, quarter-size. Modestly over its 4% target (+0.71pp), comfortably inside the widened $62-65 continuation band (+0.17% today, $64.36 live). **MS's DCF gap widened to its record reading, ≈+11.7% undervalued**, driven purely by continued price drift with no fundamental deterioration — FY26 guidance intact, orders/backlog still improving. Still no add: GEHC already sits at/above BR's target weight, and no desk has made an explicit overweight case. The possible ~$1B Sofie Biosciences acquisition remains **unconfirmed** by either company (same FT-sourced "advanced talks" reporting, dated 9/13, now two-plus trading days stale with no company statement); MS's own stress-test shows the directional undervalued call would survive even a worst-case all-debt financing assumption (~+8.3% undervalued in that scenario). Watch item, not a base-case input.
- **OMCL (Omnicell)** — Satellite, this book's deepest discount and only loss position. MS's DCF discount holds essentially flat at ≈+62.5% upside. Underweight by design of rule 18's DCA gate — see Top of Report for today's further widening of that gap under a deepening net-negative pool. GS's report this run sharpens the standing flag: four consecutive intraday reads (14:36→15:36 ET) of unexplained weakness with zero identifiable catalyst is a pattern this desk agrees deserves BW's next report addressing head-on, though it remains correctly non-actionable under rules 1/2 (no structural break found).

---

## Expected annual return range

At current weights (≈54% core / ≈33% satellite / ≈12% cash on a pool basis), blended expected return **~11–15% annualized, unchanged.** Today's developments modestly rebalance the composition of that range rather than its width: NVDA's re-widened DCF gap restores some of the mean-reversion tailwind this desk had flagged as thinning on 9/14; XLE's genuinely-worse pipeline timeline firms up its medium-term contribution without making it cheap; GEHC's record-wide undervaluation gap (+11.7%) and OMCL's steady ~62.5% gap remain the two widest levers in the book, both structurally patient rather than near-term catalysts. The confirmed 10yr close above 5% is a headwind to this range if it holds a full week and forces a coordinated WACC rebuild (would push every fair-value estimate down, not up) — flagged, not yet realized.

## Expected maximum drawdown, bad year

- **Pool-level (trading capital only):** −20% to −28% in an ordinary bad year; −30% to −40% in a severe one, unchanged. The pool's accumulated loss deepened again today (−0.61%, from −0.59% at the 15:36 ET run's own prior reading and −0.34% a week ago) — still well inside the ordinary-bad-year band, but now the third consecutive multi-run negative stretch this book has logged, not a one-off. OMCL's own −30.65% unrealized mark continues to sit inside the severe-case band as a live illustration.
- **Account-level (including the untouchable ~$50 reserve):** roughly halved, since the reserve is flat cash and dilutes any trading-pool loss across the full account.

---

## Rebalancing schedule and trigger rules

- **Scheduled cadence:** monthly full re-underwrite (current window opened 9/1, next due ~10/1); daily monitoring via this desk and BW's risk reads between full underwrites.
- **Standing triggers, evaluated every scheduled run regardless of news flow (rule 12):**
  1. Single-position drift ≥5pp of pool from target → mandatory review. No position currently within range (largest live gap is OMCL at −3.02pp).
  2. NVDA single-name equity weight crossing ~18–20% → mandatory review (never yet fired; currently ~12.04% of equity).
  3. NVDA+OMCL combined equity weight crossing ~25% → mandatory review (currently ~19.98%, ~5.02pp buffer).
  4. OMCL DCA gate (rule 18): accumulated profit crossing $2.50 → mandatory review to add to OMCL in tranches. Currently **−$0.3033 (net loss, widening)** — loss-gated, the book's worst reading yet.
  5. GEHC structural-break contingency: revisit line at $62 (widened 9/15 per BR's pre-committed fifth-touch condition); no re-trigger today, price comfortably inside the $62-65 band.
  6. **Rule 6a rate-shock pause: still fired, and today supplied its most consequential single development since firing 9/2 — the 10yr's settled close above 5% (5.02%) is now confirmed**, starting the clock on MS's own stated "held a full week" rebuild trigger. Not fired yet (day 1 of 5-7 trading days needed); the pause itself stays exactly as-is pending tomorrow's FOMC decision (2:00pm ET) and, independently, whichever resolves first.
  7. **New standing watch, not yet a formal trigger:** the Saudi pipeline repair-estimate spread between AP (3-5 weeks) and Reuters (5-6 weeks) is unresolved as of this run — worth MS's next cycle reconciling rather than defaulting to either figure.
- Every trigger above is falsifiable and time-boxed where applicable (rule 7); every time-box defaults to no-action at expiry, never to a forced purchase (rule 16).

---

## Tax efficiency strategy (taxable account)

Unchanged from the 13:35 ET report: no tax-loss harvesting has occurred despite OMCL's −30.65% unrealized loss — at this book's scale (~$3.47 position) a harvest would generate a trivial capital loss against no offsetting gains, and OMCL remains the book's highest-conviction discount (MS's ~62.5% DCF gap); selling to harvest and sitting out a 30-day wash-sale window would mean missing the name exactly as the DCA gate is designed to eventually add to it. VTI's 8/7 and 9/3 trims remain the book's only realized activity to date, de minimis short-term-gain liability. ETFs (VTI, VXUS, XLE) remain inherently more tax-efficient than direct stock picks for a taxable account. No new dividend events since NVDA's 9/10 ex-dividend.

---

## Dollar cost averaging plan for redeploying profits

- **OMCL DCA gate (rule 18) remains the book's primary DCA mechanism, and today deepened its hardest live test yet** — the pool moved from −$0.1716 (13:35 ET basis) to −$0.3033, and the gate correctly stayed shut. This continues to validate keeping the gate profit-linked rather than price-linked: OMCL got both cheaper and further from triggering an add, simultaneously, and the gate correctly treats those as unrelated facts.
- **XLE's entry-trigger design (pre-committed size, pre-committed zone, hard time-box) and GEHC's threshold-widening precedent remain the templates** for any future satellite DCA-style entry or trigger recalibration.
- **Deployable cash ($6.01, ~12.09% of pool)** sits modestly above the 10% reserve target — not an actionable gap (rule 1's ≥5pp threshold is far off). No action.

---

## Areas to consider — recent WEF / macro-policy discussion points

- **WEF's Global Risks Report 2026 thesis (geoeconomic confrontation as the top 2026 crisis risk, followed by interstate conflict and extreme weather) continues to play out in real time**: today supplied a confirmed rate shock (10yr's first settled close above 5% since 2007) landing one day before a genuinely two-sided FOMC decision, on top of an already-live Hormuz conflict and an unresolved Saudi pipeline outage. The book's core/satellite structure (VXUS ex-US diversification, XLE energy hedge) remains the structural response to exactly this compounding-risk pattern.
- **The September 15-16 FOMC decision is now inside ~22 hours and remains the single most consequential, nearest-dated resolution point this book is carrying.** Cross-source odds diverge meaningfully: CME FedWatch ~91% and Polymarket ~88% for a 25bp hike, but Kalshi only ~57% — BW's report is right to treat this as genuinely two-sided, not a near-certainty. A hold or dovish surprise would likely produce a sharp relief rally in duration-sensitive names (NVDA, VTI/VXUS) and should prompt re-reading every rate-sensitive model (NVDA, GEHC's WACC especially) at the first run after the decision, per BW's explicit ask.
- **The now-named semiconductor-tariff review (Commerce Secretary Lutnick, per GS's fresh sourcing this run)** is a sharper, more concrete version of the AI-sovereignty/localization theme flagged in the 9/14 report — a genuine geoeconomic-fragmentation risk to NVDA's and MU's growth assumptions if it advances beyond "seriously examining," not yet actionable but worth continued tracking as it could touch NVDA by look-through even though MU/AVGO are not held.

---

## One-page investment policy statement

**Objective:** Compound a $50 base (plus accumulated trading profits) inside a ~$100 taxable cash account into a long-running, auditable track record, via a disciplined core/satellite equity and ETF portfolio. No options. Aggressive risk tolerance, short-to-medium horizon, long-run compounding ambition.

**Structure:**
- **Core (55% target):** VTI 30% (US broad market), VXUS 25% (ex-US diversification). The stabilizing base of the book, rebalanced only on ≥5pp drift or a genuine structural event, never on news-cycle noise.
- **Satellite (35% target):** NVDA 11% (AI/semis conviction, hard-capped by concentration triggers, DCF gap re-widened to ~-3.4% overvalued), XLE 10% (diversified energy hedge, gap narrowed to ~-3.0% on a genuinely worse pipeline-repair timeline), GEHC 4% (healthcare-tech value, quarter-size, contingency-plan-governed, DCF gap at a record +11.7% undervalued), OMCL 10% (deepest-discount healthcare-tech position, underweight by DCA-gate design, gate now at its worst reading yet, -$0.3033).
- **Reserve (10% target):** deployable cash, held for the OMCL DCA gate and any future falsifiable, pre-committed entry trigger — never deployed reactively.

**Discipline:**
1. Every new position or add is governed by a pre-written, falsifiable, time-boxed trigger (rule 7) — never a same-minute reaction to news or price (rule 4).
2. Structural-break-only reaction rules govern every binary event — a bad number alone is never a sell signal.
3. Every discretionary sizing decision requires cross-desk vetting (MS valuation + BW risk, rule 6) before capital moves.
4. Concentration triggers (NVDA single-name, NVDA+OMCL combined) are forced decision points, never allowed to lapse silently once flagged.
5. Macro/rate-shock pauses (rule 6a) block new high-multiple adds mechanically — today's confirmed 10yr close above 5% starts, but does not complete, MS's own stated rebuild-trigger clock; the pause itself is unchanged pending tomorrow's FOMC.
6. Every time-box defaults to no-action at expiry (rule 16). Profit-linked gates (OMCL's DCA gate) are never substituted with price-linked ones just because a position keeps getting cheaper — today's deepening net-negative pool is that discipline's hardest test yet, and it held.
7. This desk's own reporting cadence is itself a discipline item — today's ~2h35m gap between reports is the standard this desk should hold going forward, a direct contrast to last week's three-day lapse.

**Current live status (2026-09-15, ~15:36 ET basis, last run before the 16:00 ET close):** total account ≈$99.70 (pool ≈$49.70, reserve $50 untouched) — the pool's accumulated loss deepened to −0.61%, its worst reading to date, driven by OMCL's continued unexplained weakness against a backdrop otherwise dominated by tomorrow's FOMC decision. No single-position or concentration trigger fired; the OMCL DCA gate is loss-gated and moved further from firing; GEHC sits comfortably inside its widened $62-65 band; rule 6a's pause is unchanged but now has a confirmed first leg (10yr settled close above 5%) on MS's rebuild-trigger clock. No trade recommended from this desk today — policy is being followed, not breached.

---

Sources:
- Internal: trading-experiment/state.md (9/15 13:36 ET through 9/15 15:36 ET), analysts/bw-risk-assessment.md (9/15 ~14:45 ET), analysts/ms-dcf-valuation.md (9/15 ~10:1x ET), analysts/gs-stock-screener.md (9/15 ~15:4x ET), analysts/jpm-earnings-analyzer.md (9/15 ~09:17 ET)
