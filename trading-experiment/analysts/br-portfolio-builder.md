# BR Portfolio Builder — Investment Policy Report
**Date: 2026-09-08 (Tuesday), ~16:11 ET (real ET verified via `TZ=America/New_York date`) — first BR read of the day, posted just after the 16:00 ET close. Second consecutive on-time daily post (see 9/7's cadence-reset commitment), closing the gap flagged by every other desk last week.**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. All holding figures below are the trader's own 2026-09-08 ~15:36 ET Robinhood-verified `get_portfolio` read (state.md, seventh and last run of the day) — total value $100.795393444 (cash $56.00 + equity $44.795393444), pool ≈ $50.795 (base $50 + ~$0.795 accumulated profit).*

---

## TOP OF REPORT — single biggest gap vs. policy

**OMCL remains the single largest live, addressable gap on the book: ≈−2.89pp under its 10% pool target (≈7.11% actual vs. 10% target)** — essentially unchanged in percentage terms from 9/7, but the DCA gate that governs closing it (rule 18) actually moved **further away today, not closer**: accumulated profit ended the day at ~$0.795, down from 9/7's ~$1.053 and this morning's ~$0.9917 open — a genuine intraday round-trip (peaked ~$1.05 around 14:36 ET, then gave it back into the close) rather than a one-way approach. **~$1.705 still required**, vs. 9/7's ~$1.447 — this desk flagged the gate as "the closest it has ever been" in the last two reports; today is the first session where that framing needs walking back, not just repeating. **Second-largest: VTI, ≈−2.68pp under target (≈27.32% vs. 30%)**, still the mechanical residue of the 9/3 cash-neutral GEHC-funding trim, frozen there by rule 6a's still-fired rate-shock pause. **Newly worth top-billing attention: GEHC's entry cushion closed the day at its worst reading since the 9/3 entry (-2.28% vs. $68.69 cost, ~3.27% from the $65 structural-break revisit line)**, one trading session before its only near-term catalyst (tomorrow's 9/9 ~10:15am ET Wells Fargo Healthcare Conference, independently reconfirmed this run). None of the three is a trade recommendation today — OMCL and VTI are pre-committed triggers waiting on their own conditions (rule 12), and GEHC's contingency plan (state.md, written this morning) explicitly governs no same-minute reaction to a deepening-but-non-structural cushion.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$50.795** (base $50 + ~$0.795 accumulated profit). Deployable cash unchanged at $6.00 (~11.81% of pool). Prices below are the 15:36 ET live Robinhood snapshot (state.md), the last of seven runs today.

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core — US broad market | **VTI** | Core | 30% | ≈27.32% | −2.68pp | ~$13.88 |
| Core — international | **VXUS** | Core | 25% | ≈26.84% | +1.84pp | ~$13.63 |
| Satellite — AI/semis mega-cap | **NVDA** | Satellite | 11% | ≈11.03% | +0.03pp | ~$5.60 |
| Satellite — energy hedge | **XLE** | Satellite | 10% | ≈11.05% | +1.05pp | ~$5.61 |
| Satellite — healthcare-tech value | **GEHC** | Satellite | 4% | ≈4.82% | +0.82pp | ~$2.45 |
| Satellite — healthcare-tech deep-value | **OMCL** | Satellite | 10% | ≈7.11% | −2.89pp | ~$3.61 |
| Deployable cash | — | Reserve | 10% | ≈11.81% | +1.81pp | ~$6.00 |
| **Total** | | | **100%** | **~100%** | | **~$50.80** |

*(Excluded from this table: the ~$50 untouchable reserve sitting outside the trading pool — not part of the deployable book and not subject to these targets.)*

Core sleeve: ≈54.16% actual vs. 55% target (−0.84pp, immaterial). Satellite sleeve: ≈34.01% actual vs. 35% target (−0.99pp, immaterial) — five distinct satellite exposures held simultaneously (NVDA, XLE, GEHC, OMCL, plus cash awaiting the OMCL DCA fire). No sleeve-level breach; every gap above lives inside individual names, not the core/satellite split itself.

---

## Core holdings

- **VTI (Vanguard Total Stock Market ETF)** — Core, US broad-market beta. Underweight on a mechanical basis (the 9/3 GEHC-funding trim), not a call on VTI itself. No action recommended while rule 6a's pause remains in effect (still fired — see below); once it lifts, a small top-up back toward 30% is the next-in-line structural (non-reactive) trade, exempt from rule 1 the same way the 7/21 and 7/30 core top-ups were.
- **VXUS (Vanguard Total International Stock ETF)** — Core, ex-US diversification. Modestly over target (+1.84pp); no action warranted — this is the position doing exactly what it's for, diluting the book's US/AI concentration precisely as AI-linked names' share of US market cap keeps climbing (see macro section below).

## Satellite holdings

- **NVDA** — Satellite, AI/semiconductor mega-cap conviction bet. Essentially exactly at its (8/27-revised) 11% target (+0.03pp). MS's DCF still reads it ~10.6% overvalued at base case; no discretionary add is on the table regardless of target math (rule 5), and rule 6a's pause blocks any core-up-style logic from applying here too. NVDA+OMCL combined concentration remains ≈20.6% of equity, comfortably below the 25% combined trigger.
- **XLE (Energy Select Sector SPDR)** — Satellite, diversified energy basket, this book's deliberate hedge against the Hormuz/oil risk factor. Modestly over target (+1.05pp) and the day's standout gainer for a second straight session — a fresh Houthi strike on Saudi energy infrastructure (GS, 15:41 ET) pushed Brent to a session high near $99.46, on top of the weekend's confirmed US-Iran kinetic exchange. MS's own composite DCF reads it ~-18.3% overvalued but has now self-flagged as stale for a fifth-plus consecutive cycle (CVX, the model's only live input, sitting flat while both the ETF and the underlying oil tape have run well past it) — do not size off that number either way. Hold as-is; no add without MS's overdue ground-up rebuild.
- **GEHC (GE HealthCare)** — Satellite, quarter-size, second full week held. Cushion closed the day at its deepest negative reading since entry (-2.28% vs. $68.69 cost), ~3.27% from the $65 mandatory-revisit line, one session before the only near-term catalyst on file (tomorrow's Wells Fargo conference, 10:15am ET). MS's DCF still reads it mildly undervalued (~+3.4%, widening as the *price* falls, not because the model changed) — not itself a buy signal for a position already at target weight. The structural-break contingency plan (written this morning, state.md) governs: no trim, no add, no same-minute reaction to a soft appearance or the already-known 9/14 CFO handoff. This is the position to watch most closely at tomorrow's first post-conference run.
- **OMCL (Omnicell)** — Satellite, this book's deepest discount (MS's DCF reads ~60.1% upside, a new widest-recorded gap) and its only loss position (-27.7% unrealized). Underweight target by design of rule 18's DCA gate — see below, the gate moved further away today rather than closer.

---

## Expected annual return range

At current weights (≈54% core / ≈34% satellite / ≈12% cash), blended expected return **~11–15% annualized**, driven by: VTI/VXUS's long-run ~7–9% nominal equity return, NVDA's structurally higher (but volatile) growth premium, OMCL/GEHC's value/turnaround upside if their respective discounts close, and XLE's more muted, defensive energy-beta contribution (currently running hot on an active geopolitical shock, not a baseline assumption). Unchanged from 9/7 — nothing this week has moved the underlying long-run assumptions, only short-term price noise.

## Expected maximum drawdown, bad year

- **Pool-level (trading capital only):** −20% to −28% in an ordinary bad year; −30% to −38% in a severe one (a genuine AI-multiple correction, a Hormuz-driven oil/rate shock, or both compounding). Both of the book's live tail-risk factors remain concurrently elevated this week, not just one: rule 6a's rate-shock pause is still fired, and Hormuz has hardened further (not eased) since Saturday, now including a second front (today's Houthi strike on Saudi facilities). Tail-scenario drawdown stays skewed toward the wider end, **40%+**, for as long as both stay live together.
- **Account-level (including the untouchable ~$50 reserve):** roughly halved, since the reserve is flat cash and dilutes any trading-pool loss across the full account.

---

## Rebalancing schedule and trigger rules

- **Scheduled cadence:** monthly full re-underwrite (this book's current window opened 9/1); daily monitoring via this desk and BW's risk reads between full underwrites — met today, second day running after last week's lapse.
- **Standing triggers, evaluated every scheduled run regardless of news flow (rule 12 — pre-committed triggers don't need a fresh catalyst):**
  1. Single-position drift ≥5pp of pool from target → mandatory review (validated once, VTI 8/7).
  2. NVDA single-name equity weight crossing ~18–20% → mandatory review (never yet fired; currently ~12.5%).
  3. NVDA+OMCL combined equity weight crossing ~25% → mandatory review (currently ~20.6%, ~4.4pp buffer).
  4. OMCL DCA gate (rule 18): accumulated profit crossing $2.50 → mandatory review to add to OMCL in tranches (currently ~$0.795, **~$1.705 away** — moved *further* away today after two straight reports calling it the closest-ever reading; today is the first session that framing reverses).
  5. Rule 6a rate-shock pause: **currently fired, still in effect.** Fresh WebSearch this run again returns 4.79% for the 10-year — consistent with every recent read, no fresher settled close and no resolution of the underlying primary-source access gap (FRED/Treasury remain blocked from this environment, per the standing operational note). Nothing clears the pause today. The lift-condition language this desk proposed 9/7 (two consecutive confirmed closes back below ~4.75%, or an explicit MS+BW regime reassessment) stands proposed, formal adoption still slated for the 9/11 weekly distillation absent objection.
- Every trigger above is falsifiable and time-boxed where applicable (rule 7); every time-box defaults to no-action at expiry, never to a forced purchase (rule 16).

---

## Tax efficiency strategy (taxable account)

- **All holdings are equities/ETFs in a taxable cash account — no tax-loss harvesting has occurred to date** despite OMCL's sizable unrealized loss (-27.7%). At this book's scale (a ~$3.61 position), a harvest sale would generate a trivial capital loss against essentially no realized gains elsewhere to offset, and OMCL is this book's highest-conviction remaining discount — selling to harvest and sitting out a 30-day wash-sale window would mean missing the name precisely as its DCA gate (however distant today) is designed to add to it. **Not recommended at current scale**, unchanged view from prior reports.
- **VTI's 8/7 and 9/3 trims remain the book's only realized activity to date** — both small, short-term, taxed as ordinary-rate short-term gains if net positive; de minimis liability given the trim sizes (~$2 and ~$2.50). As positions age (VTI's oldest lot is now ~9 weeks old), future trims should preferentially sell the highest-cost-basis, longest-held lots if specific-lot identification is ever available (Robinhood's default is FIFO) — still worth a direct ask to Jash.
- **ETFs (VTI, VXUS, XLE) remain inherently more tax-efficient** than direct stock picks for a taxable account (in-kind creation/redemption minimizes capital-gains distributions) — the book's core/satellite split leans tax-efficient by construction.
- **No dividends have been a material factor yet** (book is ~9 weeks old) — VTI/VXUS/XLE all pay qualified dividends (NVDA's own $0.25 ex-date is 9/10, two days out); once dividend income becomes material, reinvest via DRIP-equivalent fractional buys rather than let it sit idle, consistent with the DCA discipline below.

---

## Dollar-cost-averaging plan for redeploying profits

**Governing mechanism: rule 18, the OMCL DCA gate**:
- Trigger: total accumulated profit (pool − $50 base) crossing **$2.50**. Ended today at ~$0.795 — **~$1.705 away**, a genuine step backward from 9/7's ~$1.053 and this morning's own ~$0.99 open. Today's intraday high (~$1.05 around 14:36 ET) came closest, then gave essentially the whole gain back into the close on broad softness across NVDA/VTI/VXUS/OMCL/GEHC.
- When it fires: **not** an automatic buy — a mandatory review, sized and executed in **tranches**, not a lump sum. First tranche should be modest ($1.00-1.50 range), not the full available amount.
- Rationale: ties new risk to money the book has actually made, mirroring the $50-base-plus-profits capital rule at the position level — never DCA in capital the book hasn't earned.
- BW has flagged (9/8 reports, repeated) that this gate tracks book-wide profit rather than OMCL's own price, so it is not currently tracking OMCL's own deterioration — a fair mechanical critique, logged here again rather than redesigned mid-stream; today's round-trip is a live example of exactly that disconnect (OMCL itself closed down on the day, -1.32% to -2.07% across the session's reads, while the gate that's supposed to eventually add to it moved further away, not closer).
- **Next tranche's likely destination:** OMCL, this book's widest discount and largest underweight-vs-target gap (see Top of report). If the gate fires while OMCL is extended or a fresh structural break has emerged, rule 2's don't-chase discipline and rule 5's DCF-hard-pass override both still apply.
- Beyond OMCL: once VTI/VXUS core-ups resume (post rule-6a-pause), the same DCA logic applies to redeploying future accumulated profit into whichever core/satellite gap is largest at the time.

---

## Areas to consider — WEF / macro-policy discussion points

- **Rate-policy uncertainty stays genuinely two-sided, and today's read did not resolve it.** Fresh research this run confirms the 10-year again near 4.79% (CNBC, 9/7-dated: "Treasury yields face 4.8% test as fiscal risks threaten to spill into other assets") — consistent with, not a fresh escalation beyond, the range this book has tracked for two weeks. Rule 6a's mechanical, settled-close-only design continues to correctly insulate this book from acting on every headline while the underlying figure itself stays genuinely contested across sources.
- **The WEF's 2026 Global Risks Report (fresh WebSearch this run) frames the structural backdrop this book already operates inside, rather than surfacing anything new to act on**: economic risks (inflation, downturn) have risen sharply in the near-term ranking; "structural uncertainty raises the cost of capital and reshapes investment horizons," and persistent inflation is described as narrowing both fiscal and monetary room to maneuver — a direct, if abstract, validation of why this book treats a settled rate signal (rule 6a) as decision-relevant rather than noise. The report separately names AI as a source of "concentration of power" risk at the macro level — the same concentration theme this desk has been tracking bottom-up via the AI-share-of-market-cap figure (see below), now showing up in top-down policy literature too.
- **AI-sector concentration remains the book's most important slow-moving structural fact.** No fresher figure surfaced this run beyond the ~45% S&P 500 AI-linked market-cap estimate already logged 9/7 (up from ~36% cited in late August) — the trend direction, not a new data point, is what matters here, and it continues to validate this book's core/satellite structure, VXUS's international exposure, and NVDA's capped 11% target as genuinely load-bearing design choices rather than defaults.
- **Hormuz/energy-corridor risk hardened further today, on a second front.** Beyond the weekend's confirmed US-Iran kinetic exchange, GS's 15:41 ET report flagged a fresh Houthi strike on multiple Saudi energy facilities today (70+ injuries, temporary shutdowns), pushing Brent to a $99.46 session high — a genuinely new escalation input, not a restatement, and it lands the same day GS's own commodities desk put $120/bbl on the board as its intensification case. XLE remains the correct structural hedge and is doing its job (second straight standout-gainer session); OXY stays vetoed per rule 3 while the shock keeps actively widening rather than showing any sign of resolving.

---

## One-page investment policy statement

**Objective.** Grow a $50 (+ accumulated profits) trading pool inside a ~$100 taxable account via an aggressive, equities/ETF-only, fractional-share strategy, prioritizing a durable, falsifiable, rule-based process over any single trade's outcome — the explicit goal is a long-running track record, not a short-term score.

**Structure.** 55% core (VTI 30%, VXUS 25% — broad US + international beta, the book's stability anchor) / 35% satellite (NVDA 11%, OMCL 10%, XLE 10%, GEHC 4% — concentrated, higher-conviction, higher-volatility single-theme bets) / 10% deployable cash floor (dry powder + shock absorber). Never deploy beyond $50 base + accumulated profits; the account's other ~$50 is permanently off-limits.

**Discipline.** No trade without either (a) a genuine fresh catalyst (rule 1) or (b) a pre-committed, falsifiable trigger firing on schedule regardless of news flow (rule 12). Every new satellite idea clears a full cross-vetting cycle (MS DCF + BW risk read) before sizing (rule 6). Never chase an extended move (rule 2). Never size off a stale or web-sourced price — verify live via Robinhood (rule 4). Every time-boxed decision defaults to no-action at expiry, never to a forced purchase (rule 16). New discretionary NVDA/VTI/VXUS core-ups are paused for as long as rule 6a's rate-shock trigger remains fired.

**Review cadence.** Daily monitoring via this desk (second consecutive on-time day); monthly full re-underwrite (window opened 9/1, this report is a mid-window update); every standing trigger evaluated at every scheduled run.

**Expected outcomes.** Return ~11–15% annualized at current weights; bad-year pool drawdown −20% to −28%, severe −30% to −38%, tail 40%+ while both rule 6a's pause and the (now two-front) Hormuz escalation stay concurrently live; roughly halved at the full-account level by the untouchable reserve.

**Governing principle.** *Every deadline expires to no-action. Every fired trigger converts into its pre-written action without debate. A repeated analyst ask that never converts into a rule is noise, not caution — write it down or retire it. A mechanism that stops tracking what it was built to track (today's OMCL DCA round-trip) deserves the same honest naming as any other flag, without being redesigned mid-stream on a single day's data.*

---

## Next scheduled BR report
Priorities: (1) tomorrow's (9/9) first post-Wells-Fargo-conference read on GEHC — the closest this position has been to its $65 revisit line since entry; (2) whether the OMCL DCA gate resumes closing or continues round-tripping, now that today broke its two-report "closest ever" streak; (3) whether rule 6a's pause lifts on a confirmed two-consecutive-closes-back-below-4.75% reading, or gets formally adopted with explicit lift-condition language at the 9/11 weekly distillation; (4) whether the Hormuz situation's second front (today's Houthi strike) produces any further XLE-hedge or OXY-veto implications; (5) whether VTI's −2.68pp underweight closes on its own once the pause lifts; (6) maintaining daily cadence.
