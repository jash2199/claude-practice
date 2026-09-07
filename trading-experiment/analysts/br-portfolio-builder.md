# BR Portfolio Builder — Investment Policy Report
**Date: 2026-09-07 (Monday — Labor Day, markets closed all session), ~16:15 ET (real ET verified via `TZ=America/New_York date`). First BR read since 2026-09-04 evening — closing a cadence gap that spanned the entire weekend plus all seven of today's market-closed runs, flagged repeatedly by every other desk (GS, MS, BW, JPM all named it explicitly today). Acknowledged directly: this is the longest gap this desk has posted since the book's inception, and the team's rule-14 logic (a repeated pattern that never converts into a fix is noise) applies to my own cadence as much as to any analyst ask I've raised about others. No excuse offered — just closing it now, same-day as flagged, and committing to at least one read per trading day going forward.**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. All holding figures below are the trader's own 2026-09-07 ~15:36 ET Robinhood-verified `get_portfolio` read (state.md, seventh run of the day) — total value $101.0531204398 (cash $56.00 + equity $45.0531204398), pool ≈ $51.053 (base $50 + ~$1.053 accumulated profit). Market has been closed all session (Labor Day); every underlying quote is a verbatim carry-forward of Friday 2026-09-04's close — reopens Tuesday 2026-09-08 09:30 ET.*

---

## TOP OF REPORT — single biggest gap vs. policy

**OMCL remains the single largest live, addressable gap on the book: ≈−2.86pp under its 10% pool target (≈7.14% actual vs. 10% target)** — essentially unchanged from the 9/3-9/4 reads, since no trading session has occurred to move it either way. The gate is unchanged and closing: BW's conditional risk sign-off cleared the structural question weeks ago; the only thing standing between here and a first DCA tranche is rule 18's own $2.50 accumulated-profit threshold, now at **~$1.053 (~$1.447 still required)** — the closest this trigger has ever been to firing, per today's repeated Balance-history checks. **Second-largest: VTI, ≈−2.69pp under target (≈27.31% vs. 30%)**, the mechanical residue of the 9/3 cash-neutral GEHC-funding trim, not drift — still frozen there by rule 6a's rate-shock pause on new discretionary core-ups, which remains fired. Neither gap is a trade recommendation today (the market is closed regardless); both are pre-committed triggers waiting on their own conditions (a DCA threshold for OMCL, a pause-lift for VTI), consistent with rule 12.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$51.053** (base $50 + ~$1.05 accumulated profit). Deployable cash unchanged at $6.00. All prices below are Friday 2026-09-04's closing print, carried forward verbatim through a fully closed Monday session.

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core — US broad market | **VTI** | Core | 30% | ≈27.31% | −2.69pp | ~$13.94 |
| Core — international | **VXUS** | Core | 25% | ≈26.72% | +1.72pp | ~$13.64 |
| Satellite — AI/semis mega-cap | **NVDA** | Satellite | 11% | ≈11.18% | +0.18pp | ~$5.71 |
| Satellite — energy hedge | **XLE** | Satellite | 10% | ≈10.90% | +0.90pp | ~$5.56 |
| Satellite — healthcare-tech value | **GEHC** | Satellite | 4% | ≈4.88% | +0.88pp | ~$2.49 |
| Satellite — healthcare-tech deep-value | **OMCL** | Satellite | 10% | ≈7.14% | −2.86pp | ~$3.64 |
| Deployable cash | — | Reserve | 10% | ≈11.75% | +1.75pp | ~$6.00 |
| **Total** | | | **100%** | **~100%** | | **~$51.05** |

*(Excluded from this table: the ~$50 untouchable reserve sitting outside the trading pool — not part of the deployable book and not subject to these targets.)*

Core sleeve: ≈54.03% actual vs. 55% target (−0.97pp, immaterial). Satellite sleeve: ≈34.22% actual vs. 35% target (−0.78pp, immaterial) — five distinct satellite exposures held simultaneously (NVDA, XLE, GEHC, OMCL, plus cash awaiting the OMCL DCA fire). No sleeve-level breach; every gap above lives inside individual names, not the core/satellite split itself.

---

## Core holdings

- **VTI (Vanguard Total Stock Market ETF)** — Core, US broad-market beta. Underweight on a mechanical basis (the 9/3 GEHC-funding trim), not a call on VTI itself. No action recommended while rule 6a's pause remains in effect; once it lifts, a small top-up back toward 30% is the next-in-line structural (non-reactive) trade, exempt from rule 1 the same way the 7/21 and 7/30 core top-ups were.
- **VXUS (Vanguard Total International Stock ETF)** — Core, ex-US diversification. Modestly over target (+1.72pp); no action warranted — this is the position doing exactly what it's for, diluting the book's US/AI concentration precisely as AI-linked names' index weight keeps climbing (see macro section below).

## Satellite holdings

- **NVDA** — Satellite, AI/semiconductor mega-cap conviction bet. Essentially at its (8/27-revised) 11% target. MS's DCF still reads it overvalued at base case; no discretionary add is on the table regardless of target math (rule 5), and rule 6a's pause blocks any core-up-style logic from applying here too. NVDA+OMCL combined concentration remains ≈20.8% of equity, comfortably below the 25% combined trigger.
- **XLE (Energy Select Sector SPDR)** — Satellite, diversified energy basket, this book's deliberate hedge against the Hormuz/oil risk factor. Modestly over target; MS's own oil-adjusted DCF has flagged do-not-add territory for weeks, and MS itself now flags that composite as likely *understating* the hedge's real strength given how far Brent/WTI have run past the CVX equity-comp proxy the model actually uses — a genuinely live re-check MS has escalated to its own top priority. Hold as-is; do not chase an add into this weekend's escalation.
- **GEHC (GE HealthCare)** — Satellite, quarter-size, second full week held. MS's 9/4 DCF flipped it to mildly undervalued (~+1.8% vs. base case) — explicitly self-flagged by MS as "not a reason to add" for an already-at-target position. Standard ongoing-position discipline: no add without a fresh cross-vetting cycle. Watch the 9/9 Wells Fargo Healthcare Conference appearance for anything structural.
- **OMCL (Omnicell)** — Satellite, this book's deepest discount (MS's DCF has shown 45-57%+ undervaluation for weeks) and its only loss position. Underweight target by design of rule 18's DCA gate — the book is deliberately not filling this gap in one shot. See DCA plan below; this is now the single closest-to-firing mechanical trigger in the entire book.

---

## Expected annual return range

At current weights (≈54% core / ≈34% satellite / ≈12% cash), blended expected return **~11–15% annualized**, driven by: VTI/VXUS's long-run ~7–9% nominal equity return, NVDA's structurally higher (but volatile) growth premium, OMCL/GEHC's value/turnaround upside if their respective discounts close, and XLE's more muted, defensive energy-beta contribution. This remains a wide, aggressive-tolerance-appropriate range for a five-figure-percent-volatility satellite sleeve on a sub-$105 book, not a precision forecast.

## Expected maximum drawdown, bad year

- **Pool-level (trading capital only):** −20% to −28% in an ordinary bad year; −30% to −38% in a severe one (a genuine AI-multiple correction, a Hormuz-driven oil/rate shock, or both compounding — the book's two live tail-risk factors, both actively flagged this week: BW's D+ risk-grade downgrade on the weekend's kinetic Hormuz escalation, and rule 6a's rate-shock pause still fired). While both are live simultaneously, tail-scenario drawdown skews toward the wider end, **40%+** in a compounding rates-plus-de-rating-plus-oil-shock scenario — genuinely closer to plausible right now than at any point since the book's inception, given both risk factors are concurrently elevated rather than just one.
- **Account-level (including the untouchable ~$50 reserve):** roughly halved, since the reserve is flat cash and dilutes any trading-pool loss across the full account.

---

## Rebalancing schedule and trigger rules

- **Scheduled cadence:** monthly full re-underwrite (this book's current window opened 9/1); daily monitoring via this desk and BW's risk reads between full underwrites — a cadence this desk failed to meet this week and is resetting starting today.
- **Standing triggers, evaluated every scheduled run regardless of news flow (rule 12 — pre-committed triggers don't need a fresh catalyst):**
  1. Single-position drift ≥5pp of pool from target → mandatory review (validated once, VTI 8/7).
  2. NVDA single-name equity weight crossing ~18–20% → mandatory review (never yet fired; currently ~12.7%).
  3. NVDA+OMCL combined equity weight crossing ~25% → mandatory review (currently ~20.8%, ~4.2pp buffer).
  4. OMCL DCA gate (rule 18): accumulated profit crossing $2.50 → mandatory review to add to OMCL in tranches (currently ~$1.05, **~$1.45 away** — the single closest-to-firing mechanical trigger in the book).
  5. Rule 6a rate-shock pause: **currently fired**, still in effect. Fresh WebSearch this run found continued genuine ambiguity in the underlying 10-year close — one source (TradingEconomics-style aggregator) puts it near 4.79% (a multi-month high), another puts it at 4.676% on a reported pullback in hike odds — the same unresolved sub-decimal sourcing gap this book has wrestled with for two weeks running. Fed-funds-futures/prediction-market pricing on a September 16 hike has itself been volatile intraday (reported anywhere from ~48% to ~68% depending on source and hour), which per rule 17 is escalation-worthy context, not the trigger's own resolution. Net: nothing here clears the pause; it stays blocking new discretionary NVDA/VTI/VXUS core-ups until a clean two-consecutive-closes-back-below-4.75% reading or a fresh cross-desk regime call. The lift condition itself still needs explicit codification (flagged repeatedly by BW) — doing so now: **proposed lift condition — two consecutive confirmed 10-year closes back below ~4.75% (mirroring the fire condition exactly), OR an explicit cross-desk (MS+BW) regime reassessment.** Adopting this formally at the next weekly distillation absent objection.
- Every trigger above is falsifiable and time-boxed where applicable (rule 7); every time-box defaults to no-action at expiry, never to a forced purchase (rule 16).

---

## Tax efficiency strategy (taxable account)

- **All holdings are equities/ETFs in a taxable cash account — no tax-loss harvesting has occurred to date** despite OMCL sitting on a sizable unrealized loss (still in the -25% to -30% range). At this book's scale (a ~$3.64 position), a harvest sale would generate a trivial capital loss against essentially no realized gains elsewhere to offset, and OMCL is this book's highest-conviction remaining discount — selling to harvest and waiting out a 30-day wash-sale window would mean sitting out of the name precisely while its DCA gate is closest to firing. **Not recommended at current scale**, but flagged as a real deferred option once OMCL's tranche additions grow the position and/or a future year's realized gains create something worth offsetting.
- **VTI's 8/7 and 9/3 trims are the book's only realized activity to date** — both small, short-term (well under a one-year holding period), taxed as ordinary-rate short-term gains if net positive; given the trim amounts (~$2 and ~$2.50) actual tax liability is de minimis. As positions age (VTI's oldest lot is now ~8 weeks old), future trims should preferentially sell the highest-cost-basis, longest-held lots if specific-lot identification is ever available on this account (Robinhood's default is FIFO) — still worth a direct ask to Jash on whether specific-lot selection is supported.
- **ETFs (VTI, VXUS, XLE) are inherently more tax-efficient than direct stock picks** for a taxable account (in-kind creation/redemption minimizes capital-gains distributions) — this book's core/satellite split already leans tax-efficient by construction.
- **No dividends have been a material factor yet** (book is ~9 weeks old) — but VTI/VXUS/XLE all pay qualified dividends; once dividend income becomes material, reinvest via DRIP-equivalent fractional buys rather than let it sit idle, consistent with the DCA discipline below.

---

## Dollar-cost-averaging plan for redeploying profits

**Governing mechanism: rule 18, the OMCL DCA gate**:
- Trigger: total accumulated profit (pool − $50 base) crossing **$2.50**. Currently ~$1.05 — **~$1.45 away**, closer than it has ever been.
- When it fires: **not** an automatic buy — a mandatory review, sized and executed in **tranches**, not a lump sum. First tranche should be modest ($1.00-1.50 range), not the full available amount.
- Rationale: ties new risk to money the book has actually made, mirroring the $50-base-plus-profits capital rule at the position level — never DCA in capital the book hasn't earned.
- **Next tranche's likely destination:** OMCL, this book's widest discount and largest underweight-vs-target gap (see Top of report). If the gate fires while OMCL is extended (sharply up on the day/week) or a fresh structural break has emerged, rule 2's don't-chase discipline and rule 5's DCF-hard-pass override both still apply — the gate firing authorizes a *review*, not an unconditional buy.
- Beyond OMCL: once VTI/VXUS core-ups resume (post rule-6a-pause), the same DCA logic applies to redeploying future accumulated profit into whichever core/satellite gap is largest at the time.

---

## Areas to consider — WEF / macro-policy discussion points

- **Rate-policy uncertainty has become genuinely two-sided and noisy, not a clean hawkish consensus.** Fresh research this run: CME-style odds of a September 16 hike have swung within days from ~36% pre-Jackson-Hole to as high as ~65-68% on Fed Chair Warsh's hawkish tone, then back down toward ~48-50% on softer retail-sales/labor data and a Goldman Sachs call that a hike is "very unlikely." The 10-year itself is reported anywhere from ~4.68% to ~4.79% depending on source and moment. This volatility is itself the signal: rule 6a's mechanical, settled-close-only design (not futures odds, not intraday moves) is doing real work insulating this book from whipsawing on every headline — a genuinely validated design choice this week, not just a theoretical one.
- **AI-sector concentration has escalated further, not just persisted.** Updated figure via fresh WebSearch (Invesco/Northwestern Mutual/BlackRock-cited commentary, September 2026): AI-linked names now make up **~45% of S&P 500 market cap** (up from the ~36% Morningstar figure cited in the 8/28 distillation), with the "Magnificent Seven" alone at ~34%, and AI-linked investment-grade debt now ~$1.4T (~15.4% of the US credit market). BlackRock's own research is cited as expecting this to drive demand for "tailored and targeted diversification" through the rest of 2026 — directly validating this book's core/satellite structure, VXUS's international exposure, and NVDA's capped 11% target. This is a genuine escalation worth flagging loudly (per rule 17's "log a derivative signal the run you find it" discipline extended to a slower-moving structural one): the concentration this book is designed to diversify against is *increasing*, not stabilizing.
- **A seasonal caution flag, not a trigger:** multiple September 2026 commentary pieces (Motley Fool and others, fresh WebSearch) flag the historical "September effect" as a seasonally weak month for AI-linked equities specifically. This is calendar pattern-matching, not a structural catalyst, and does not meet rule 1's fresh-catalyst bar or override rule 6a's mechanical design — logged for awareness only, explicitly not a basis for any pre-emptive NVDA action (mirroring this book's own declined pre-earnings de-risking precedent, rule 15).
- **Hormuz/energy-corridor risk has hardened sharply, not just persisted, this weekend** — confirmed multi-source (per today's GS/BW/JPM reads and this desk's own fresh check): direct strikes disabling three Iranian tankers, a ballistic missile fired at a US carrier group, and a parallel, unsigned "days-away" Iran-Oman corridor talk running alongside the kinetic escalation. XLE remains the correct structural hedge; OXY stays vetoed per rule 3 while the shock is actively unfolding. Tuesday's reopen will be this book's first live price test of a confirmed kinetic exchange across every held name simultaneously (against XLE's hedge) — worth treating as a genuine data point, not just another routine open.

---

## One-page investment policy statement

**Objective.** Grow a $50 (+ accumulated profits) trading pool inside a ~$100 taxable account via an aggressive, equities/ETF-only, fractional-share strategy, prioritizing a durable, falsifiable, rule-based process over any single trade's outcome — the explicit goal is a long-running track record, not a short-term score.

**Structure.** 55% core (VTI 30%, VXUS 25% — broad US + international beta, the book's stability anchor) / 35% satellite (NVDA 11%, OMCL 10%, XLE 10%, GEHC 4% — concentrated, higher-conviction, higher-volatility single-theme bets) / 10% deployable cash floor (dry powder + shock absorber). Never deploy beyond $50 base + accumulated profits; the account's other ~$50 is permanently off-limits.

**Discipline.** No trade without either (a) a genuine fresh catalyst (rule 1) or (b) a pre-committed, falsifiable trigger firing on schedule regardless of news flow (rule 12). Every new satellite idea clears a full cross-vetting cycle (MS DCF + BW risk read) before sizing (rule 6). Never chase an extended move (rule 2). Never size off a stale or web-sourced price — verify live via Robinhood (rule 4). Every time-boxed decision defaults to no-action at expiry, never to a forced purchase (rule 16). New discretionary NVDA/VTI/VXUS core-ups are paused for as long as rule 6a's rate-shock trigger remains fired.

**Review cadence.** Daily monitoring via this desk (resetting today after a multi-day lapse); monthly full re-underwrite (window opened 9/1, this report is a mid-window update); every standing trigger evaluated at every scheduled run.

**Expected outcomes.** Return ~11–15% annualized at current weights; bad-year pool drawdown −20% to −28%, severe −30% to −38%, tail 40%+ while both rule 6a's pause and the Hormuz escalation are concurrently live; roughly halved at the full-account level by the untouchable reserve.

**Governing principle.** *Every deadline expires to no-action. Every fired trigger converts into its pre-written action without debate. A repeated analyst ask that never converts into a rule is noise, not caution — write it down or retire it. That standard applies to this desk's own cadence exactly as it applies to every other analyst's repeated flag.*

---

## Next scheduled BR report
Priorities: (1) whether OMCL's DCA gate (rule 18, ~$1.45 away) fires and, if so, how the first tranche is sized; (2) Tuesday's live reopen price reaction across every held name to the confirmed weekend Hormuz kinetic escalation, weighed against XLE's hedge; (3) whether rule 6a's pause lifts on a confirmed two-consecutive-closes-back-below-4.75% reading, now that this report has proposed explicit lift-condition language; (4) whether VTI's −2.69pp underweight closes on its own or needs an explicit top-up call once the pause lifts; (5) GEHC's 9/9 Wells Fargo conference appearance; (6) maintaining daily cadence going forward rather than lapsing again.
