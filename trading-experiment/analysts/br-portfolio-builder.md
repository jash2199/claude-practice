# BR Portfolio Builder — Investment Policy Report

**Date: 2026-11-24 (Tuesday), ~15:13 ET** (verified via `TZ=America/New_York date`). Prior report: 2026-11-23 ~15:13 ET — exactly 24 hours ago, the shortest BR cycle gap in several weeks (the prior ~47.5-hour gap was repeatedly flagged as a chronic process item; closing it this cycle). Figures below use the trader's own 2026-11-24 ~14:37 ET `get_portfolio`-derived state.md entry (freshest full snapshot on file) and BW's ~13:41 ET live-Robinhood-verified position table, cross-checked against GS's ~14:45 ET report, MS's 09:45 ET update and JPM's 08:20 ET report. *Per house rule 4, this desk does not have direct Robinhood access — figures below are relayed, not independently pulled.*

---

## TOP OF REPORT — single biggest gap vs. policy

**GEHC remains the single biggest *live* gap between this desk's recommended allocation and the trader's actual book, for the sixth consecutive report: +2.39pp over the 4%-of-pool target (6.39% actual vs. 4% target), ~1.11pp from the 7.5%/+3.5pp disciplined partial-trim trigger.** The distance has barely moved since yesterday (~1.08-1.24pp all cycle) — GEHC itself is flat-to-green, the gap just oscillates a few hundredths of a point with the rest of the pool's volatility. **Instruction stands, unchanged for the sixth consecutive report: the next run where GEHC's pool weight crosses 7.5% executes the pre-committed trim back to the 6% band-midpoint, proceeds split toward (1) a new defensive hedge sleeve and (2) OMCL's DCA gate — not to NVDA or further GEHC — without waiting for a further report from this desk.**

**Second — today is the first live test of yesterday's new NVDA drift-trim trigger, and it has resolved exactly as a mechanical band should: by not firing, while real information accumulated around it.** NVDA gave back a further chunk of Friday-Monday's reinstatement spike today (-7.70% vs. Monday's close at the last extended read, after a sector-wide AI/semis selloff hit AMD/ADI/ALAB/SNDK/MU/MRVL all in double digits — a macro/policy shock, not an NVDA-specific fact), while OMCL/GEHC/XLE — the three genuinely uncorrelated sleeves — stayed green all day. NVDA's pool weight sits at **8.16%, now ~2.34pp from the new 10.5% trim line** (comfortably clear) and ~1.16pp over the 7% target (in-band). **This is the correlation risk this desk and BW have both named for weeks showing up exactly as described: the book's one uninsured factor (NVDA + VTI's cap-weighted tech look-through) absorbs a sector shock while the genuinely diversifying satellites (XLE, GEHC, and today even the lagging OMCL) do their job.** No target change, no trim — the trigger exists precisely so a day like today doesn't require a discretionary call.

**Third — a governance tail that was "unresolved" is now a dated calendar event, and it changes the character of the open risk without changing its size.** Huang's congressional appearance is confirmed (independently, across GS/BW/the trader's own search) as a **closed-door transcribed interview before three House committees on December 1**, with Nvidia GC Tim Teter following December 2 and a Senate Banking hearing requested for December 3 still unconfirmed. A closed-door format carries materially lower headline-reaction risk than an open hearing, which is informational good news — **but this desk's own 11/23 two-part reinstatement bar (board investigation closes clean AND the China-sales question resolves) is unaffected by a calendar date alone, and the position is now held through a hard, public event seven days out with zero downside protection.** Noting for the record, not changing the 7% target or the governance bar on this information.

**Fourth — MS's NVDA valuation signal has now flipped direction three times in under a week on price alone, with zero fundamentals change — the cleanest live illustration this book has produced of rule 5's "a DCF read is a green/red light, not a stopwatch, and a discount-rate or price-driven read isn't a sizing trigger."** Deep undervaluation (Friday, $125.53 close) → mild overvaluation (Monday, $165.05 close) → flat-fair (this morning, ~$156 print, almost exactly MS's $156.3/sh base case) → now drifting back toward undervalued again as the stock gives back ground intraday, per GS's own flag to MS for a same-day refresh. **This desk's view: the oscillation itself is the signal worth banking, not whichever endpoint MS's model lands on next. A valuation read that round-trips three times in five sessions on a name whose cash flows haven't moved at all is evidence the governance-premium WACC input (still +140bp, built for a confirmed CEO vacancy that has since reversed) needs the full rebuild this desk and MS have both flagged, not evidence to act on today's particular reading.** No sizing action regardless of which way the number lands next — rule 20's no-new-cash-to-NVDA instruction and rule 6a's pause both independently block an add either way.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$46.80** (base $50, ≈-$3.20 accumulated loss, -6.44% — per the trader's 2026-11-24 ~14:37 ET live `get_portfolio` read; BW's 13:41 ET pull, used for the position-level detail below, read pool at -6.26%/$46.87, essentially the same figure an hour apart). Total account ≈$96.80 (pool + untouchable ~$50 reserve). Deployable cash $6.10.

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap (pp) | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core | VTI | US broad-market beta | 26% | 27.72% | +1.72 | ~$12.99 |
| Core | VXUS | Ex-US diversification | 27% | 25.70% | −1.30 | ~$12.04 |
| Satellite | NVDA | AI/semis conviction (7% target, 12% ceiling / 10.5% trim trigger) | 7% | 8.16% | **+1.16 (in-band, trigger ~2.34pp away — first live day of this line, held clean)** | ~$3.83 |
| Satellite | XLE | Energy / geopolitical supply-shock hedge | 12% | 11.22% | −0.78 | ~$5.26 |
| Satellite | GEHC | Healthcare-tech value (±5pp band; 7.5%/+3.5pp trim trigger, **~1.11pp away**) | 4% | 6.39% | **+2.39 (the actionable gap)** | ~$2.99 |
| Satellite | OMCL | Deepest-discount healthcare tech | 10% | 7.81% | −2.19 (DCA-gated by design, rule 18) | ~$3.66 |
| Reserve | Cash | GEHC trim buffer, OMCL DCA gate, NVDA reserve | 14% | 13.02% | −0.98 | ~$6.10 |

No position breaches a hard mechanical trigger today. GEHC's +2.39pp is the closest live gate by distance-to-trigger; NVDA's new 10.5% line survived its first real intraday stress test (a genuine sector-wide selloff, not a quiet session) without coming close to firing. NVDA+OMCL combined ≈16.0% of pool / ~18.4% of equity — clean against both the 25% hard trigger and the 20% soft early-warning line. **Standing instruction unchanged: the next incremental core dollar still routes to VXUS, not pro-rata, per the 10/19 AI/semis core-tilt policy.**

---

## Core holdings

- **VTI** — Core, target 26%. At 27.72% (+1.72pp), modestly overweight, inside the 5pp band. No change to target. Rule 6a's rate-shock pause stays live on new core adds; reopening gap ≈30bp (5.051%→4.75%), not reached, no fresher print located this run.
- **VXUS** — Core, target 27%. At 25.70% (−1.30pp), modestly underweight, inside band. Remains the designated recipient of the next incremental core dollar. Today's sector-specific (not broad-index) selloff landed squarely on single-name semis, not diversified ex-US beta — VXUS's own diversification case is unaffected either way.

## Satellite holdings

- **NVDA** — Satellite, target 7%, ±5pp band (12% ceiling), 10.5%/+3.5pp trim trigger. Actual 8.16% of pool / ~9.38% of equity, -23.5% unrealized vs. $201.40 avg cost — the loss deepened again today as the reinstatement bounce gave back further ground in a sector-wide selloff. **First live stress test of the new drift trigger: held clean, ~2.34pp of buffer remaining even through a double-digit-magnitude sector shock on comparable names.** No target change — the 7% target stays exactly where it was set 11/12 and reaffirmed 11/23; a genuine governance-risk resolution (board investigation closes clean, China-sales question resolves) is still the only bar for raising it, not a calendar date for testimony or a day's price action in either direction.
- **XLE** — Satellite, target 12%. Actual 11.22% (−0.78pp, in-band). Did its job again today — one of the three green sleeves while the correlated tech/semis factor took the hit. BW's repeated ask to nudge this up from "idle cash" remains **declined**: cash sits below its own 14% target (-0.98pp), no genuinely idle cash exists to redeploy. Standing instruction unchanged — the first new dollar into a defensive/hedge sleeve comes from the next GEHC trim or the NVDA drift-trim trigger, not from drawing down an already-short cash buffer.
- **GEHC** — Satellite, target 4%, ±5pp band (9% ceiling). Actual 6.39% (+2.39pp), this book's best winner (+19.7% unrealized) and, again today, one of the green sleeves through a sector shock that hit only NVDA. **Pre-committed trim action stands: if/when the 7.5%/+3.5pp line fires (currently ~1.11pp away, essentially unchanged all day), trim back to the 6% band-midpoint**, proceeds split toward (1) a new defensive/low-beta hedge sleeve and (2) OMCL's DCA gate. Unchanged for six straight reports.
- **OMCL** — Satellite, target 10%, this book's deepest paper discount historically. Actual 7.81% (−2.19pp, DCA-gate-designed underweight), -26.8% unrealized — still the book's largest loss by percentage, but notably the one recovering sleeve today (traded as high as +5.3% above MS's recalibrated $33.0 bear floor intraday before easing back to +3.7%), a genuine bounce off the newly-recalibrated line with zero fresh structural catalyst found by any desk. This desk's standing recalibration ask (fulfilled 11/23, $35.24→$33.0) stays closed; tonight's close against the new line remains the next live data point, not a decision this report pre-empts. The DCA gate (rule 18) continues to correctly block any new capital: pool net-negative -6.44%, well short of the +$2.50 accumulated-profit threshold.

---

## Expected annual return range

At current target weights (53% core / 33% satellite / 14% cash by target basis, unchanged), blended expected return **~8-12% annualized**, unchanged from every report this quarter. A sector-wide semis selloff that hits exactly one of six held positions, with the other five flat-to-green, is a live demonstration of why the strategic return assumption doesn't move on a single volatile session — the diversification is doing precisely what it's priced to do.

## Expected maximum drawdown, bad year

- **Equity-sleeve level: BW's stress test — equity value falls ~-36.9% (to ~$25.78 from $40.85), a pool-basis loss of ~-36.2% from the $50 base.** Unchanged in magnitude; today's actual -6.44% mark remains roughly 5.6x better than that tail case.
- **NVDA event risk: half-resolved, now with a hard date attached.** CEO vacancy resolved (reinstatement); board investigation and China-sales question remain open; Huang's Dec 1 closed-door testimony is now a known, dated event rather than an open-ended overhang — lower headline-reaction risk than an open hearing, but a real date this book holds through unhedged.
- **Sector-correlation risk: live-fired today, exactly as flagged.** The uninsured NVDA+VTI-look-through AI/tech factor (~18-21% of pool) took today's hit in full while XLE/GEHC/OMCL absorbed nothing or gained — the clearest real-money confirmation yet of the standing diagnosis. This desk's answer is unchanged: fund a genuine defensive-sleeve hedge from the next GEHC trim or NVDA drift-trim trigger, whichever fires first, rather than drawing down the already-short cash buffer today.
- **Rate risk: unchanged.** No fresher Treasury print than the 5.051%/11-19 figure located this run; reopening gap ≈30bp.
- **Fed policy path / WEF macro: unchanged open gaps** — the single-source Kalshi read on December FOMC odds flagged 11/23 remains unconfirmed against CME FedWatch; Davos 2027 program detail still unpublished.

## Rebalancing schedule and trigger rules

- **Calendar:** full re-underwrite monthly — last fulfilled 11/2; next due ~12/1, which now coincides not only with MRVL's earnings print but with **Huang's own congressional testimony date** — worth treating the 12/1 re-underwrite as a same-day post-testimony read if the timing lines up, not a stale pre-event snapshot.
- **Mechanical triggers currently live, none fired this report:**
  - Single-position drift ≥5pp vs. target — clean (largest live gap is GEHC's +2.39pp).
  - NVDA (7% target, ±5pp band, 12% ceiling, 10.5%/+3.5pp trim trigger) — actual 8.16%, ~2.34pp from the trigger. **Survived its first live stress test today** (sector-wide semis selloff) without approaching the line.
  - GEHC standard band (4%/±5pp, 9% ceiling) — clean on the ceiling. **7.5%/+3.5pp trim trigger ~1.11pp away — the book's single likeliest near-term fire; firing action: trim to the 6% band-midpoint, proceeds split toward a defensive hedge sleeve and the OMCL DCA gate, not NVDA/OMCL.**
  - OMCL DCA gate (rule 18) — pool at a -6.44% accumulated loss; well short of the +$2.50 threshold.
  - OMCL price revisit line — $33.0/sh (recalibrated 11/23); OMCL traded above it most of today, no new action.
  - NVDA+OMCL combined 25%-of-equity hard trigger and 20%-of-equity soft early-warning line — both clean (~18.4% of equity).
  - Rule 6a rate-shock pause — in effect since 9/2, blocking new core/NVDA adds. Gap to the 4.75% reopening threshold ≈30bp.
  - AI/semis core-tilt (10/19) — next incremental core-sleeve dollar routes to VXUS, not pro-rata.
- Every trigger above fires to a mandatory review, an informational check, or a pre-specified mechanical action, not an open-ended discretionary call.

## Tax efficiency strategy (taxable account)

- Every lot remains short-term. **Harvest candidate: OMCL (-26.8% unrealized)**, still this book's deepest paper loss despite today's partial bounce; NVDA's loss (-23.5%) sits close behind, narrower than its deepest-ever mark but still the second-largest. No harvest trade recommended for either — OMCL's DCA gate is its own designed mechanism, and manufacturing a tax event outside a pre-committed trigger would be the reactive trade this desk's discipline exists to prevent.
- A future GEHC partial trim (the closest live trigger, ~1.11pp away) would realize a meaningful slice of this book's largest unrealized gain (+19.7%) — accepted as the cost of the discipline.
- A future NVDA drift-trim (trigger ~2.34pp away) would realize a **loss** at current prices (-23.5% unrealized), a tax-efficient outcome by construction if that trigger were ever to fire from here.
- At sub-$100 scale, wash-sale/lot mechanics matter less than the underlying discipline of not manufacturing a taxable event without a trigger.

## Dollar-cost-averaging plan for redeploying profits

- OMCL remains the designated DCA target once rule 18's gate fires ($2.50 accumulated profit; currently a loss, pool -6.44%).
- Standing instruction for any future general deployable-cash core top-up: route to VXUS, not a VTI/VXUS split, until AI/semis look-through exposure eases.
- Unchanged: the first dollar out of the eventual GEHC trim is earmarked for a small defensive/low-beta hedge position (e.g., a broad utilities or staples ETF), ahead of further redeployment to OMCL's DCA target or XLE.
- Proceeds from the NVDA drift-trim trigger (10.5% line), whenever it fires, route first to close the standing cash shortfall (-0.98pp vs. the 14% target today), then to the same defensive hedge sleeve.
- The 14% cash target's priority order (unchanged): (1) GEHC trim buffer/proceeds, split toward (1a) a defensive hedge sleeve and (1b) the OMCL DCA gate, (2) NVDA drift-trim proceeds, (3) NVDA reserve. Actual cash (13.02%) sits -0.98pp under target — a reason to prioritize cash replenishment from the *next* trigger that fires, not a reason to raise cash by selling anything today.

## Areas to consider according to recent WEF / macro-policy discussions

- **Rate input: unchanged.** No fresher Treasury print than the 5.051%/11-19 figure; reopening gap ≈30bp.
- **Fed policy path: unchanged, unconfirmed.** The single-source Kalshi read on a December hold-to-hike lean remains flagged, not adopted, pending a CME FedWatch cross-check.
- **Sector-policy risk, newly concrete this cycle:** today's semis selloff was driven in part by a US Trade Representative subsidy-investigation probe into the chip sector per BW/GS's relayed findings — a live illustration of the same policy-driven concentration risk the January 2026 Chief Economists' Outlook and the IMF's October 2025 Global Financial Stability Report both flagged generically for AI-era/Magnificent-7-style exposure. This book's existing answer (route new core capital to VXUS, hold NVDA at a hard-banded 7% target rather than let it run) is the direct, already-implemented response to exactly this risk category — nothing new to add structurally, but worth naming that the abstract WEF/IMF warning and today's live tape are now the same story.
- **WEF: no change.** Davos 2027 (Jan 18-22) program detail remains unpublished.
- **Practical takeaway:** two consecutive extraordinary sessions (the reinstatement spike, then today's sector-wide give-back) have now tested both the new NVDA drift-trim trigger and the standing GEHC trigger under real volatility, and both held without a single trade. That is six-plus weeks of policy design doing exactly what it was built for — absorbing volatility through pre-committed bands rather than discretionary reaction.

---

## One-page investment policy statement

**Client:** The "Claude Robinhood Trader" experiment — a ~$100 taxable cash account with ~$46.80 of trading capital (base $50 + accumulated losses, -6.44%) and a ~$50 untouchable reserve. Aggressive risk tolerance, short-to-medium horizon, ambition to compound into a long-running track record. Equities and ETFs only — no options, no leverage, no shorting. Fractional shares available.

**Objective:** Grow the trading pool at an expected ~8-12% blended annualized return, accepting a plausible ≈-36% equity-sleeve bad-year drawdown per BW's standing stress test, funding all new risk exclusively from capital the book has already earned, and tilting new core-sleeve capital toward VXUS until AI/semis look-through exposure eases.

**Target allocation (pool basis):** 26% VTI / 27% VXUS / **7% NVDA (±5pp band, 12% ceiling, 10.5%/+3.5pp trim-back trigger, ~2.34pp away — survived its first live sector-selloff stress test today)** / 12% XLE / **4% GEHC (±5pp band; 7.5%/+3.5pp trigger, ~1.11pp away — the closest live trigger in the book; firing action: trim to the 6% midpoint, proceeds split to a new defensive hedge sleeve and OMCL's DCA gate)** / 10% OMCL (DCA-gated; bear floor $33.0/sh, recalibrated 11/23) / 14% cash.

**Discipline rules the trader must follow (full detail in Strategy & theories, state.md):**
1. No fresh catalyst, no reactive trade — except a pre-committed, falsifiable trigger.
2. Never chase a move already priced in; never size off an unverified figure without live Robinhood confirmation.
3. A DCF hard pass is a hard pass; a new idea needs a full cross-vetting cycle before sizing.
4. A valuation signal that oscillates on price/rate inputs alone, with no fundamentals change, is not itself a sizing trigger in either direction.
5. A repeated cross-desk ask that never converts into a decision isn't transparency, it's noise.
6. A mechanical drift band does not get redrawn around wherever price happens to sit absent a new fundamental or risk fact.
7. A hedge is allowed to cost money when the risk it insures against recedes, and earn money when it shows up — today's session, with XLE/GEHC green and NVDA red, is that design working in real time.

**Standing mechanical triggers:** single-position drift ≥5pp; NVDA's ±5pp band / 10.5% trim trigger (~2.34pp away, first live stress test passed); NVDA+OMCL 25% hard concentration trigger plus the 20% soft early-warning line (both clean, ~18.4% of equity); OMCL DCA gate (pool -6.44%); OMCL's $33.0 recalibrated line; GEHC's 9% ceiling plus 7.5%/+3.5pp trim line (**~1.11pp away, the book's closest live trigger**); rule 6a's rate-shock pause (~30bp from reopening); the AI/semis core-tilt.

**Review cadence:** full re-underwrite monthly (last 11/2, next ~12/1, now coinciding with Huang's own testimony date). Off-cycle on a ≥5pp drift, a fresh structural finding, or within 4 hours of a disqualifier firing or reversing. **Open items for the next run: execute the GEHC trim-to-6%-midpoint the moment the 7.5% line fires; continue watching the NVDA 10.5% line, now validated under one real stress test; watch for MS's next NVDA WACC rebuild given three valuation-signal flips in a week; keep routing incremental core dollars to VXUS; revisit the NVDA 7% target only on the two-part governance bar, never on price or a calendar date.**

---

*No trade recommended off this report — research and policy-governance only, per mandate. This desk does not place trades or touch Robinhood directly.*
