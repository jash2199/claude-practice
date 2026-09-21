# BR Portfolio Builder — Investment Policy Report
**Date: 2026-09-21 (Monday), ~16:11 ET (real ET verified via `TZ=America/New_York date`) — posted just after today's 16:00 ET close, three calendar days (and eight trader checkpoints) after Friday's (9/18) report.**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. Holding figures below are the trader's own 2026-09-21 ~15:37 ET Robinhood-verified snapshot (state.md's seventh and, as of this writing, last run of the day), the freshest available at report time.*

---

## TOP OF REPORT — single biggest gap vs. policy

**OMCL remains the single largest live gap on the book: ≈−3.16pp under its 10% pool target (≈6.84% actual vs. 10% target)** — the twelfth consecutive BR report to name it as such. The good news since Friday: the pool has swung back to a genuine, if small, accumulated profit (+0.74%, +$0.3689), so the OMCL DCA gate (rule 18) is no longer loss-gated — it needs **~$2.13 more** of accumulated profit to fire, the closest it has been in three weeks.

**The second item, and the one this report actually resolves, is the XLE top-up trigger's funding-math hole — flagged by BW and GS across three consecutive cycles (9/18, and twice today).** MS's valuation leg cleared today for the first time (gap −0.8%, inside the required flat-to-better-than−1.8% band), but spending the trigger's own $2-3 would push deployable cash to ~$3.01-4.01 (~6.0-8.0% of pool), well under this desk's own 11% reserve floor. Rather than re-flag a fourth time or quietly widen the floor, this report makes the call explicitly: **the XLE top-up is subordinated to the OMCL DCA gate for cash priority until further notice.** See resolution below.

---

## Resolving the XLE top-up funding gap (rule 14 — a repeated cross-desk ask gets a decision, not a fourth flag)

1. **Why this isn't a "fix the floor" situation.** XLE's valuation leg clearing means the position is no longer *overvalued* enough to disqualify a top-up — it does not mean XLE is *cheap*. MS's own read is "essentially fair value, a hair on the overvalued side" (−0.8%), built on today's already-hopeful, diplomacy-driven oil price (BW's own tail-risk note #5). Compare that to OMCL, sitting on a ~66% DCF discount and about to clear a profit-linked gate that has been the book's most disciplined, best-performing mechanism to date (rule 18). When two mechanisms compete for the same ~$6.01 of dry powder, the deeper-discount, closer-to-firing, longer-standing mechanism gets priority — that is a capital-allocation judgment call, not a mechanical rule, and it belongs to this desk to make.
2. **Decision: XLE's top-up trigger stays live but its funding leg is explicitly blocked until the OMCL DCA gate either fires and executes its first tranche, or the XLE trigger's own 10/1 time-box lapses — whichever comes first.** This is not a new floor number and not a special exception carved out under pressure; it is a sequencing rule, written down now while both gates are still hypothetical, per the same "no same-minute decisions" discipline this book has applied to every other live trigger.
3. **Why not just shrink the top-up to fit under the floor today (e.g., $1.50)?** Considered and declined. A smaller top-up would still draw from the exact same reserve the OMCL gate needs for its own first tranche, undermining the higher-priority mechanism to partially satisfy a lower-conviction one, for a marginal (~1.2pp) underweight in a position MS itself now calls fair value, not cheap. The underweight is real but not urgent — XLE at 10.78% vs. a 12% target is a smaller gap than four of this book's six positions have carried at various points without triggering action.
4. **This does not touch XLE's own hedge property or its standing as the book's designed answer to Hormuz/recession risk** — it remains fully held at its current size, benefiting from any future repricing exactly as designed. This is purely a decision about where the next incremental dollar goes.

This closes the loop BW and GS have each opened multiple times since 9/17 — see Rebalancing schedule below for the restated trigger text.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$50.3689** (base $50, ≈+$0.3689 accumulated profit, per state.md's 15:37 ET run, seventh/last of the day). Total account ≈$100.3689 (pool + untouchable ~$50 reserve). Deployable cash $6.01 (~11.93% of pool).

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap (pp) | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core | VTI | US broad-market beta | 28% | 27.79% | −0.21 | ~$14.00 |
| Core | VXUS | Ex-US diversification | 25% | 26.76% | +1.76 | ~$13.48 |
| Satellite | NVDA | AI/semis conviction | 10% | 11.21% | +1.21 | ~$5.65 |
| Satellite | XLE | Energy / Hormuz-recession hedge | 12% | 10.78% | −1.22 | ~$5.43 |
| Satellite | GEHC | Healthcare-tech value | 4% | 4.68% | +0.68 | ~$2.36 |
| Satellite | OMCL | Deepest-discount healthcare tech | 10% | 6.84% | **−3.16** | ~$3.44 |
| Reserve | Cash | OMCL DCA gate (priority) + XLE top-up trigger (subordinated) | 11% | 11.93% | +0.93 | ~$6.01 |

No position breaches the ≥5pp single-position drift trigger. OMCL is the largest live gap at −3.16pp, gated by rule 18, not a drift problem — and, for the first time in weeks, closing rather than widening.

---

## Core holdings

- **VTI (Vanguard Total Stock Market ETF)** — Core, US broad-market beta, target 28%. At 27.79% of pool, essentially on-target (−0.21pp). Rule 6a's pause on new core-ups remains in full effect: every candidate 10yr figure this week (Friday's 4.94-5.01% straddle, confirmed again by this desk's own fresh search today) sits comfortably above the 4.75% threshold — the pause needs no fresh confirmation to stay live.
- **VXUS (Vanguard Total International Stock ETF)** — Core, ex-US diversification, target 25%. Modestly over target (+1.76pp), the book's second-largest live gap after OMCL but well inside the 5pp drift band. BW's currency-headwind flag (a hiking Fed strengthens the dollar) is now partially offset by this week's own tail-risk note: a genuinely successful Thursday Trump-Xi summit would be a China/global-growth-positive surprise that could firm non-USD currencies against the dollar — a two-sided catalyst for this specific position this week, not a one-way drag.

## Satellite holdings

- **NVDA** — Satellite, AI/semiconductor mega-cap conviction bet, target 10%. Actual weight 11.21% of pool, +1.21pp over target — a narrow, stable overweight, not a drift breach. MS's DCF gap widened again to −7.7% overvalued (from −6.2% Friday) on price alone — the model is unchanged, the stock is more expensive. Rule 6a's pause continues to block any core-up regardless. BW's look-through AI/semis concentration flag (~28.2% of equity via VTI/VXUS tilts) is now a 7th-consecutive-report item; this desk's 9/17 target cut addressed the headline number, and there is no new information this week that changes that call — logged again as a standing watch item for the ~10/1 full underwrite, not actioned today.
- **XLE (Energy Select Sector SPDR)** — Satellite, this book's deliberate Hormuz/oil and recession hedge, target 12%. Actual weight 10.78%, modestly underweight (−1.22pp). MS's gap narrowed to essentially fair value (−0.8%) on today's pullback, technically satisfying the top-up trigger's valuation leg for the first time — but see the resolution above: the funding leg is now explicitly subordinated to the OMCL DCA gate. Worth stating plainly given BW's escalated risk grade (D-, driven by new IMF PortWatch data showing an ~90.6% collapse in Hormuz tanker transits even as oil falls on diplomatic hope): the hedge is not currently pricing that flow-data divergence, and it remains this book's only real answer to that scenario at its present size — the case for eventually adding is real, just not this week's cash-allocation priority.
- **GEHC (GE HealthCare)** — Satellite, target 4%. Actual weight 4.68% (+0.68pp), still inside a defensible band. MS's DCF gap held essentially flat (+10.9% undervalued, from +10.1% Friday). GS flagged the Sofie Biosciences acquisition talks again today as a potential incremental catalyst; per MS's own read, the deal remains unconfirmed 8 days after the original "could come in the coming days" framing — a mild negative data point on deal-certainty, not a new base-case input. No target change, no sizing action.
- **OMCL (Omnicell)** — Satellite, target 10%, this book's deepest discount and only loss position. MS's DCF discount held essentially flat (~66.2% upside). The DCA gate (rule 18) is the operative mechanism — see Top of Report; it now needs **~$2.13** of further accumulated profit, the closest reading since early September. BW has explicitly asked (14:41 ET report) that a mechanical gate-open not be treated as a green light on its own: this desk agrees and restates rule 18's own text — when the gate fires, verify live, confirm no fresh structural break has emerged, and size the first tranche modestly. That bar was written in on purpose; it stands unchanged.

---

## Expected annual return range

At current weights (≈54.5% core / ≈33.5% satellite / ≈12% cash on a pool basis, core sleeve up slightly on VXUS's continued drift), blended expected return **~10–14% annualized, unchanged.** NVDA's DCF gap widened further (more overvalued) while GEHC's held flat and XLE's narrowed toward fair value — no individual move this week is large enough to justify revising the range at this book's small scale. GEHC (+10.9% DCF gap) and OMCL (+66.2% DCF gap) remain the structural upside levers, both patient; MS's hard pass on GS's new #1 pick (FRO, ~−53.7% DCF gap despite a record quarter and a Street target near $70) is a reminder that this book's return range assumes continued discipline on the entry side, not just holding what's already owned.

## Expected maximum drawdown, bad year

- **Pool-level (trading capital only):** **−26% to −33% in an ordinary-to-severe bad year**, per BW's granular recession stress test (Scenario A demand-recession ≈−33% pool-relative reframed at current weights ≈−22.6% of equity/−19.9% of pool; Scenario B supply-shock stagflation ≈−9.9% of equity/−8.7% of pool — the scenario this book is actually structured to survive well). **BW's Scenario C (correlation-to-1 liquidity panic from a direct US-Iran escalation) is now supported by hard data, not just rhetoric** — IMF PortWatch's 8-vs-85-daily-transit read is evidence the underlying conditions for a genuine panic scenario haven't improved even as oil has fallen on hope. Estimated impact ≈−20% of equity/−17.6% of pool if it fires; this remains the scenario this book's all-equity, no-options, thin-cash-reserve structure is least equipped to survive.
- **Account-level (including the untouchable ~$50 reserve):** roughly halved, since the reserve is flat cash and dilutes any trading-pool loss across the full account.

---

## Rebalancing schedule and trigger rules

- **Scheduled cadence:** monthly full re-underwrite (current window opened 9/1, next due ~10/1). This report is a same-cadence gap-check plus one explicit design resolution (the XLE funding sequencing below) — not the full underwrite.
- **Standing triggers, evaluated every scheduled run regardless of news flow (rule 12):**
  1. Single-position drift ≥5pp of pool from target → mandatory review. No position currently within range (largest live gap OMCL at −3.16pp, gated not drifting).
  2. NVDA single-name equity weight crossing ~18–20% → mandatory review (never yet fired; currently ~12.73% of equity).
  3. NVDA+OMCL combined equity weight crossing ~25% → mandatory review (currently ~20.49%, ~4.51pp buffer).
  4. **OMCL DCA gate (rule 18):** accumulated profit crossing $2.50 → mandatory review to add to OMCL in tranches, first priority on deployable cash. Currently +$0.3689 (+0.74%) — **~$2.13 away**, narrowing for the first time in three weeks.
  5. GEHC structural-break contingency: revisit line at $62 (downside), upside watch line at $65 (set 9/17) — neither re-triggered this week; GEHC traded $64.15-64.83 across today's runs, band-internal.
  6. Rule 6a rate-shock pause: still fired. 10yr candidate figures remain straddled around 5% with no clean settled-close resolution available from this environment's data access — pause stays in effect regardless (every figure clears the lower 4.75% threshold).
  7. **XLE top-up trigger (BR, 9/17), revised this report:** $2-3 add from cash, requires XLE non-extended AND MS's gap flat-to-better than −1.8%. **Valuation leg cleared today for the first time (−0.8%).** Funding leg is now explicitly **subordinated to trigger #4** — blocked until the OMCL DCA gate fires and executes its first tranche, or until the ~10/1 time-box lapses, whichever comes first. This is a sequencing decision, not a floor change (see resolution section above).
- Every trigger above is falsifiable and time-boxed where applicable (rule 7); every time-box defaults to no-action at expiry, never to a forced purchase (rule 16).

---

## Tax efficiency strategy (taxable account)

Unchanged: no tax-loss harvesting on OMCL's unrealized loss (still ~−31%) — at this book's scale (~$3.44 position) a harvest generates a trivial capital loss against no offsetting gains, and OMCL remains the book's highest-conviction discount with its DCA gate now genuinely close; a 30-day wash-sale window would risk missing the position exactly as new capital is about to be committed to it. The 8/7, 9/3 VTI trims remain the book's only realized activity, de minimis short-term-gain liability. ETFs (VTI, VXUS, XLE) remain inherently more tax-efficient than direct stock picks for a taxable account.

---

## Dollar cost averaging plan for redeploying profits

- **OMCL DCA gate (rule 18) is now this book's clear DCA priority.** It has closed from ~$2.65 (9/18) to ~$2.13 (today) as the pool swung from a small loss back to a small profit — behaving exactly as designed, profit-linked rather than price-linked, and it is the closer of the book's two live cash-deployment mechanisms by a wide margin.
- **XLE top-up trigger (BR, 9/17)** is this book's second DCA-style mechanism, now explicitly second in line for cash per the resolution above — its valuation leg is clear, its funding leg waits on OMCL's gate.
- **Deployable cash ($6.01, ~11.93% of pool)** sits modestly above the 11% reserve floor (+0.93pp) — sized to fund a modest first OMCL tranche once the gate opens without breaching the floor, which is precisely why this desk is not willing to spend the same dollars on XLE first.

---

## Areas to consider — recent WEF / macro-policy discussion points

- **WEF's Global Risks Report 2026 framing (geoeconomic confrontation ranked the #1 global risk, with economic risks — downturn and inflation — the fastest-rising near-term category) continues to read as the textbook backdrop for this book's own risk map**, not a new data point this week — fresh confirmation searches this run turned up the same report already on file, no material update. The confirmed 9/16 FOMC hike delivered explicitly to fight oil-driven inflation, with a still-unresolved 10yr yield sitting stubbornly above 5% on most readings, is the concrete policy expression of that framing living inside this book's own rule 6a pause.
- **BW's new IMF PortWatch data point (8 vs. 85 daily Hormuz tanker transits) is the single most decision-relevant macro item since Friday's report** — it converts a rhetoric-and-headline risk read into a measured, sourced supply-channel fact, and it is the direct justification for keeping the XLE hedge intact even while this desk declines to add to it with priority cash this week. Worth flagging as exactly the kind of "geoeconomic confrontation deepening beyond trade-policy uncertainty into supply-chain weaponization" the WEF report itself describes.
- **Today's broad chip-led rally (Nasdaq +2%, SOX +3%+, AMD crossing a $1T market cap) rode Trump-Xi summit optimism and a new Meta AI-agent product announcement** — genuine, dated, real catalysts, not pure multiple expansion, but occurring in the same week BW is flagging a "buy the rumor" reversal risk if Thursday's summit or Hormuz diplomacy disappoints relative to today's priced-in hope. This desk's read: today's strength in the four correlated risk-on holdings (NVDA/VTI/VXUS/GEHC) and XLE's continued softness are two sides of the same summit-optimism bet — a useful frame for why this book's structure (core/satellite plus one genuine hedge) matters more in a week like this than in a calm one.

---

## One-page investment policy statement

**Objective:** Compound a $50 base (plus accumulated trading profits) inside a ~$100 taxable cash account into a long-running, auditable track record, via a disciplined core/satellite equity and ETF portfolio. No options. Aggressive risk tolerance, short-to-medium horizon, long-run compounding ambition.

**Structure (unchanged since the 9/17 revision):**
- **Core (53% target):** VTI 28% (US broad market), VXUS 25% (ex-US diversification).
- **Satellite (36% target):** NVDA 10% (AI/semis conviction; DCF gap ~−7.7% overvalued, widening; hard-capped by concentration triggers), XLE 12% (energy/Hormuz-recession hedge; DCF gap ~−0.8%, essentially fair value; top-up trigger's valuation leg live and clear, funding leg subordinated to OMCL's gate — see above), GEHC 4% (healthcare-tech value; DCF gap ~+10.9% undervalued; contingency-plan-governed), OMCL 10% (deepest-discount healthcare-tech; DCF gap ~+66.2% undervalued; underweight by DCA-gate design, now the book's priority cash use).
- **Reserve (11% target):** deployable cash, held first for the OMCL DCA gate, second for the XLE top-up trigger — never deployed reactively, and never split between the two out of sequence.

**Discipline:**
1. Every new position or add is governed by a pre-written, falsifiable, time-boxed trigger (rule 7) — never a same-minute reaction to news or price (rule 4). This report's XLE/OMCL cash-sequencing decision is itself a pre-committed rule, written before either gate has actually fired, not a live call made under pressure.
2. Structural-break-only reaction rules govern every binary event — a rate hike, an escalating war headline, or a red (or green) close alone is never a trade signal by itself. BW's D- downgrade today (a genuine, data-backed escalation) is exactly the kind of well-argued, still-non-mechanical input this rule exists to weigh without acting on reflexively.
3. Every discretionary sizing decision requires cross-desk vetting (MS valuation + BW risk, rule 6) before capital moves. MS's hard pass on GS's new #1 pick (FRO) today is this rule doing its job for the fourth time (after MU, AVGO, and now FRO) — a strong screener case is never sufficient on its own.
4. Concentration triggers (NVDA single-name, NVDA+OMCL combined) are forced decision points, never allowed to lapse silently once flagged — both clean today, comfortable buffers on each.
5. Macro/rate-shock pauses (rule 6a) block new high-multiple core-ups mechanically, independent of target revisions.
6. Every time-box defaults to no-action at expiry (rule 16). Profit-linked gates (OMCL's DCA gate) are never substituted with price-linked ones, and are never de-prioritized behind a lower-conviction, merely-fair-value satellite top-up.
7. This desk judges the book against policy, not the news cycle — a genuine risk-desk escalation (today's PortWatch data) is logged and weighed, and can change cash-allocation *priority* between two already-adopted mechanisms, without requiring a same-day trade on either.

**Current live status (2026-09-21, ~15:37 ET basis, seventh/last run of the day):** total account ≈$100.3689 (pool ≈$50.3689, reserve $50 untouched) — the pool sits at a small +0.74% accumulated profit, its best reading in over a week, on a broad Monday risk-on rally that left XLE as the lone red position. No single-position or concentration trigger fired. The OMCL DCA gate closed to ~$2.13 away, its closest reading in three weeks. The XLE top-up trigger's valuation leg cleared for the first time; this report resolves the resulting cash-priority question explicitly rather than letting it sit as a third-cycle flag. **No trades are recommended today** — this report's function is a discipline check plus one overdue design resolution, and the book passes the former cleanly while the latter is now closed.

---

Sources:
- Internal: trading-experiment/state.md (9/21 09:36 ET through 9/21 15:37 ET, all seven runs), analysts/bw-risk-assessment.md (9/21 ~14:41 ET, fourth report today), analysts/ms-dcf-valuation.md (9/21 ~10:1x ET), analysts/gs-stock-screener.md (9/21 ~15:44 ET), analysts/jpm-earnings-analyzer.md (9/21 ~09:21 ET)
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [US10Y: U.S. 10 Year Treasury - CNBC](https://www.cnbc.com/quotes/US10Y)
- [The Global Risks Report 2026 - World Economic Forum](https://www.weforum.org/publications/global-risks-report-2026/digest/)
- [Top 10 Risks in 2026: Geoeconomic Confrontation Tops the List - World Economic Forum](https://www.weforum.org/stories/2026/01/global-risks-2026-top-10-two-and-ten-year-horizon/)
- [Global Risks Report 2026: Geopolitical and Economic Risks Rise in New Age of Competition - World Economic Forum](https://www.weforum.org/press/2026/01/global-risks-report-2026-geopolitical-and-economic-risks-rise-in-new-age-of-competition/)
