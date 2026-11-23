# BR Portfolio Builder — Investment Policy Report

**Date: 2026-11-23 (Monday), ~15:13 ET** (verified via `TZ=America/New_York date`). Prior report: 2026-11-20 ~15:3x ET — the longest gap between BR cycles this book has recorded (~47.5 hours), repeatedly flagged by the team as the "chronic open item" across eight intraday runs this morning and afternoon. Figures below use the trader's own 2026-11-23 ~14:37 ET `get_portfolio` snapshot (freshest full ground-truth figure set on file), cross-checked against BW's ~13:41 ET live-Robinhood-verified table, GS's ~14:45 ET report, MS's 09:13 ET update and JPM's 08:13 ET report. *Per house rule 4, this desk does not have direct Robinhood access — figures below are relayed, not independently pulled.*

---

## TOP OF REPORT — single biggest gap vs. policy

**GEHC remains the single biggest *live* gap between this desk's recommended allocation and the trader's actual book: +2.26pp over the 4%-of-pool target (6.26% actual vs. 4% target), ~1.24pp from the 7.5%/+3.5pp disciplined partial-trim trigger.** That distance widened slightly from Friday's record-narrow ~1.0pp reading — not because GEHC itself slipped, but because the rest of the pool rallied harder on NVDA's reinstatement bounce, diluting GEHC's own weight. **Instruction stands, unchanged for the fifth consecutive report: the next run where GEHC's pool weight crosses 7.5% executes the pre-committed trim back to the 6% band-midpoint, proceeds split toward (1) a new defensive hedge sleeve and (2) OMCL's DCA gate — not to NVDA or further GEHC — without waiting for a further report from this desk.**

**But the headline event since Friday's report is NVDA, and it is the first time this book has had to decide how to treat a *reversal* of a fired governance disqualifier rather than a deepening of one.** Over the weekend, NVIDIA's board reinstated Jensen Huang as CEO effective immediately — confirmed via the company's own SEC 8-K and press release, independently corroborated across CBS, NBC, AP, Yahoo Finance and a same-day cluster of sell-side upgrades (Melius, Bernstein, StoneX, Oppenheimer) pushing Street targets to $200-270. NVDA is +31% vs. Friday's close as of this afternoon, and its weight has drifted from 7.38% of pool on 11/20 to **8.71% today — the largest single-session weight move this book has ever recorded on any position, entirely price-driven.** BW has now flagged this drift three consecutive cycles, each time more pointedly, asking this desk whether a discretionary trim belongs on the table. **This report answers that ask directly, in both directions, rather than leaving it open a sixth time:**

1. **No target increase today.** The 11/12 cut of NVDA's pool target from 10% to 7% was made because a named individual — the CEO — was removed amid a foreign-intelligence-targeting investigation, a structural governance fact. That fact is only *half* reversed: Huang is back, but **the board's independent investigation into the underlying allegations has not concluded, and Bessent's China-sales/export-compliance question remains open.** A +31% one-day price move and a cluster of same-day sell-side upgrades are market sentiment, not a resolution of either open item — reacting to them today would be exactly the kind of price-chasing rule 2 exists to prevent, just with a happier headline attached. **The 7% target stays exactly where it was set on 11/12.** This desk will revisit upward only when *both* conditions are met: (a) the board's investigation formally closes with no adverse finding, and (b) the China-sales question is resolved on the record — not before, and not on price or analyst-upgrade momentum alone.
2. **A new mechanical drift-trim trigger for NVDA, mirroring GEHC's design, closing BW's repeated ask with a rule instead of a one-off discretionary call.** NVDA's 7% pool target now carries an explicit ±5pp band (12% ceiling) with a **10.5%/+3.5pp trim-back trigger** — the identical formula already governing GEHC (target + 3.5pp). **Firing action: trim back toward the 9% band-midpoint, proceeds routed first to close the standing cash shortfall (currently -1.01pp vs. the 14% target), remainder to the defensive hedge sleeve — not to GEHC or OMCL.** At today's 8.71%, NVDA sits ~1.79pp from that line — comfortably clear, but for the first time, a real, pre-committed number rather than "watch the drift." This resolves BW's ask on this desk's own terms (a mechanical line set before pressure, not a reactive sale under it) per rule 6.
3. **GS's and BW's underlying diagnosis is accepted, the proposed remedy is not.** A chorus of sell-side upgrades one afternoon after a +31% pop is itself a classic chase-risk signal (GS's own framing, which this desk endorses) — informative for recalibrating the *stale* $180 contingency-plan-v2 line at the next scheduled MS/BR rebuild, not a reason to touch sizing today.

**Third — this book has now recorded 42+ consecutive no-trade runs through both the sharpest drawdown and the sharpest single-day reversal in its history, and the discipline held through both.** Pool moved from last Friday's all-time low (-9.579% intraday) to today's ~-6.05%, almost entirely on NVDA's bounce, without a single trade either direction. **That is the frameworks working exactly as designed** — the NVDA contingency plan v2 never contemplated a reversal scenario, so the team correctly treated it as a new structural fact requiring fresh reads rather than reopening the old disqualifier, and no desk sized into either the crash or the rebound off price alone.

**Fourth — rate input has a genuine, if modest, update; Fed-path and WEF inputs remain open gaps, re-confirmed rather than filled with a guess this run.** MS located a dated 10-year print (5.051%, 11/19 close, Dow Jones/Morningstar) — a ~7bp decline from the 5.12% this desk had on file, narrowing rule 6a's reopening gap to **≈30bp** (5.051%→4.75%, not reached). A fresh search this run for a more current print hit the same chronic dateline wall (only an 11/10-dated 4.982% figure surfaced, staler than MS's own 11/19 read — not adopted). A fresh search for December 2026 FOMC odds surfaced a single-source, unconfirmed-timestamp Kalshi read implying the market now leans toward a hold-to-hike bias rather than a cut for the 12/9 meeting — **flagged, not adopted**: one undated prediction-market snapshot that cuts against this book's working assumption of further easing is not decision-grade on its own, and the search itself could not cross-check it against CME FedWatch. Davos 2027 (Jan 18-22) program detail remains unpublished two months out — nothing new this run.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$46.98** (base $50, ≈-$3.03 accumulated loss, -6.05% — per the trader's 2026-11-23 ~14:37 ET live `get_portfolio` snapshot). Total account ≈$96.98 (pool + untouchable ~$50 reserve). Deployable cash $6.10.

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap (pp) | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core | VTI | US broad-market beta | 26% | 27.77% | +1.77 | ~$13.04 |
| Core | VXUS | Ex-US diversification | 27% | 25.77% | −1.23 | ~$12.11 |
| Satellite | NVDA | AI/semis conviction (7% target, new 12% ceiling / 10.5% trim trigger) | 7% | 8.71% | **+1.71 (in-band, new trigger ~1.79pp away)** | ~$4.09 |
| Satellite | XLE | Energy / geopolitical supply-shock hedge | 12% | 11.10% | −0.90 | ~$5.21 |
| Satellite | GEHC | Healthcare-tech value (±5pp band; 7.5%/+3.5pp trim trigger, **~1.24pp away**) | 4% | 6.26% | **+2.26 (the actionable gap)** | ~$2.94 |
| Satellite | OMCL | Deepest-discount healthcare tech | 10% | 7.43% | −2.57 (DCA-gated by design, rule 18) | ~$3.49 |
| Reserve | Cash | GEHC trim buffer, OMCL DCA gate, NVDA reserve | 14% | 12.99% | −1.01 | ~$6.10 |

No position breaches a hard mechanical trigger today. GEHC's +2.26pp is the closest live gate by distance-to-trigger; NVDA's +1.71pp is the largest *mechanical* drift this book has seen on a single name in one session, now governed by the new 10.5% line above. NVDA+OMCL combined ≈16.14% of pool / ~18.55% of equity — clean against both the 25% hard trigger and the 20% soft early-warning line. **Standing instruction unchanged: the next incremental core dollar still routes to VXUS, not pro-rata, per the 10/19 AI/semis core-tilt policy.**

---

## Core holdings

- **VTI** — Core, target 26%. At 27.77% (+1.77pp), modestly overweight, inside the 5pp band. No change to target. Rule 6a's rate-shock pause stays live on new core adds; reopening gap ≈30bp (5.051%→4.75%), not reached. BW's correlation flag (VTI's cap-weighted Big Tech tilt duplicates a slice of NVDA's own factor risk) is accepted but not actioned — today's shared rally is the same correlation showing up on the upside, not a new risk.
- **VXUS** — Core, target 27%. At 25.77% (−1.23pp), modestly underweight, inside band. Remains the designated recipient of the next incremental core dollar — the house's main structural lever against VTI's cap-weighted tech/AI look-through concentration, a lever that still matters on both sides of a correlated AI/tech move, not just the downside.

## Satellite holdings

- **NVDA** — Satellite, target 7%, **new ±5pp band (12% ceiling) and 10.5%/+3.5pp mechanical trim-back trigger** (see TOP OF REPORT item 2). Actual 8.71% of pool / ~10.0% of equity, live ~$164.84, -18.2% vs. $201.40 avg cost — unrealized loss narrowed sharply (from -32.6% on 11/20) on the reinstatement bounce. Buffer to the $180 contingency-plan-v2 line ≈-8.42%, now the narrowest reading since the disqualifier fired — a genuine signal that the crisis-era line is stale (see TOP OF REPORT item 3) and a candidate for MS's next rebuild, not a reason to touch it today. **No sizing action either way**: rule 20's no-new-cash-to-NVDA instruction and rule 6a's pause both independently block an add regardless of the rally; the governance thesis is only half-resolved per item 1 above.
- **XLE** — Satellite, target 12%. Actual 11.10% (−0.90pp, in-band). Still the book's best-behaved hedge — did not participate meaningfully in today's NVDA-driven pop, which is exactly its job. BW's repeated ask to nudge this up 2-3pp from "idle cash" is **declined again this cycle**: cash sits *below* its own 14% target (-1.01pp) today, so there is no genuinely idle cash to redeploy — the standing instruction stands, that the first new dollar into a defensive/hedge sleeve comes from the next GEHC trim or the new NVDA drift-trim trigger, not from drawing down an already-short cash buffer.
- **GEHC** — Satellite, target 4%, ±5pp band (9% ceiling). Actual 6.26% (+2.26pp), still this book's best winner (+17.63% unrealized). **Pre-committed trim action stands: if/when the 7.5%/+3.5pp line fires (currently ~1.24pp away), trim back to the 6% band-midpoint**, proceeds split toward (1) a new defensive/low-beta hedge sleeve and (2) OMCL's DCA gate, not NVDA/OMCL directly. Unchanged from the last two reports.
- **OMCL** — Satellite, target 10%, this book's deepest paper discount. Actual 7.43% (−2.57pp, DCA-gate-designed underweight), still the book's single worst performer (-30.2% unrealized, a new deepest-ever mark). **This desk's standing recalibration-review ask of MS, formally tripped after Friday's fourth consecutive sub-floor close ($32.51), has now been fulfilled**: MS's 09:13 ET report rebuilt the bear-case floor from $35.24 to **$33.0/sh**, on dated sell-side price-target cuts (Piper Sandler, Freedom Capital Markets) rather than on the price breach itself — the right process discipline, and this desk closes the open item accordingly. OMCL is currently trading ~0.64% below the new line; tonight's official close against $33.0 is the next live data point, not a decision this report needs to pre-empt. The DCA gate (rule 18) continues to correctly block any new capital: pool net-negative -6.05%, well short of the +$2.50 accumulated-profit threshold.

---

## Expected annual return range

At current target weights (53% core / 33% satellite / 14% cash by target basis, unchanged), blended expected return **~8-12% annualized**, unchanged from every report this quarter. Neither the worst drawdown week on record nor the sharpest one-day reversal on record moves a strategic, multi-year return assumption absent a fundamental change on any held name — and on NVDA specifically, only half of the relevant fundamental fact (the governance question) has actually changed.

## Expected maximum drawdown, bad year

- **Equity-sleeve level: BW's freshly re-run stress test — equity value falls ~-36.9% (to ~$25.78 from $40.85), a pool-basis loss of ~-36.2% from the $50 base.** Materially unchanged in magnitude from prior reports; still roughly 6x worse than today's actual -6.05% mark, underscoring that today's reversal doesn't change the tail-risk math.
- **NVDA event risk: half-resolved, not fully closed.** The CEO-vacancy question is answered; the board's investigation and the China-sales question are not. This desk continues to hold the position through the 20%-combined early-warning line (currently clean at ~18.55% of equity) rather than treat the reinstatement as a full clean bill of health.
- **OMCL: floor formally recalibrated this run (see Satellite holdings above)** — the deepest and most-tested mechanical line in the book, now re-based on dated sell-side evidence rather than on four sub-floor closes alone.
- **Rate risk: modestly eased.** The dated 5.051% 10-year print narrows rule 6a's reopening gap to ≈30bp; a fresh search found nothing more current.
- **Fed policy path / WEF macro: see TOP OF REPORT item 4** — a single, unconfirmed prediction-market read on December FOMC odds is flagged, not adopted; WEF/Davos program detail remains an open, acknowledged gap rather than a guess.
- **The uncredited AI/mega-cap-tech correlation factor BW has named for weeks (NVDA + VTI's look-through, ~18-21% of pool, zero hedge) is unresolved** — this desk's answer remains: fund a genuine defensive-sleeve hedge from the next GEHC trim or the new NVDA drift-trim trigger, whichever fires first, rather than drawing down the already-short cash buffer today.

## Rebalancing schedule and trigger rules

- **Calendar:** full re-underwrite monthly — last fulfilled 11/2; next due ~12/1 (coincides with the congressional calendar's opening date and MRVL's earnings print). Off-cycle confirmation on any ≥5pp single-position drift, a fresh cross-desk structural finding, or within 4 hours of any confirmed disqualifier firing or reversing on a held position.
- **Mechanical triggers currently live, none fired this report:**
  - Single-position drift ≥5pp vs. target — clean (largest live gap is GEHC's +2.26pp).
  - **NVDA (7% target, new ±5pp band, 12% ceiling, 10.5%/+3.5pp trim trigger)** — actual 8.71%, ~1.79pp from the new trigger. **New this report** — see TOP OF REPORT item 2.
  - GEHC standard band (4%/±5pp, 9% ceiling) — clean on the ceiling. **7.5%/+3.5pp trim trigger ~1.24pp away — the book's single likeliest near-term fire; firing action: trim to the 6% band-midpoint, proceeds split toward a defensive hedge sleeve and the OMCL DCA gate, not NVDA/OMCL.**
  - OMCL DCA gate (rule 18) — pool at a -6.05% accumulated loss; well short of the +$2.50 threshold.
  - OMCL price revisit line — **recalibrated this cycle from $35.24 to $33.0/sh by MS on dated sell-side evidence; the prior GS/BW recalibration-review ask is CLOSED.** Tonight's official close against the new line is the next live data point.
  - NVDA+OMCL combined 25%-of-equity hard trigger and 20%-of-equity soft early-warning line — both clean (~18.55% of equity).
  - Rule 6a rate-shock pause — in effect since 9/2, blocking new core/NVDA adds. Gap to the 4.75% reopening threshold ≈30bp off the dated 5.051% input.
  - AI/semis core-tilt (10/19) — next incremental core-sleeve dollar routes to VXUS, not pro-rata.
- Every trigger above fires to a mandatory review, an informational check, or a pre-specified mechanical action, not an open-ended discretionary call — now true of NVDA's drift as well as GEHC's.

## Tax efficiency strategy (taxable account)

- Every lot remains short-term. **Harvest candidate: OMCL (-30.2% unrealized)**, this book's deepest paper loss and now the only position with a materially negative unrealized return (NVDA's loss narrowed to -18.2% on the reinstatement bounce, no longer near its deepest-ever reading). No harvest trade recommended — OMCL's DCA gate is its own designed mechanism; manufacturing a tax event outside it would be the reactive trade this desk's discipline exists to prevent.
- A future GEHC partial trim (the closest live trigger, ~1.24pp away) would realize a meaningful slice of this book's largest unrealized gain (+17.63%) — accepted as the cost of the discipline; GEHC's design has always meant "the trigger firing" and "a taxable gain" coincide.
- A future NVDA drift-trim (new trigger, ~1.79pp away) would also realize a gain at current prices (-18.2% has narrowed but the position is still underwater vs. $201.40 avg cost — so today a trim would in fact realize a **loss**, not a gain, a tax-efficient outcome by construction if that trigger were ever to fire from here).
- At sub-$100 scale, wash-sale/lot mechanics matter less than the underlying discipline of not manufacturing a taxable event without a trigger.

## Dollar-cost-averaging plan for redeploying profits

- OMCL remains the designated DCA target once rule 18's gate fires ($2.50 accumulated profit; currently a loss, pool -6.05%).
- Standing instruction for any future general deployable-cash core top-up: route to VXUS, not a VTI/VXUS split, until AI/semis look-through exposure eases.
- **Unchanged from 11/20:** the first dollar out of the eventual GEHC trim is earmarked for a small defensive/low-beta hedge position (e.g., a broad utilities or staples ETF), ahead of further redeployment to OMCL's DCA target or XLE.
- **New this report:** proceeds from the new NVDA drift-trim trigger (10.5% line), whenever it fires, route first to close the standing cash shortfall (-1.01pp vs. the 14% target today), then to the same defensive hedge sleeve — giving this desk two independent, pre-committed funding paths to the long-flagged hedge ask instead of one.
- The 14% cash target's priority order (unchanged): (1) GEHC trim buffer/proceeds, split toward (1a) a defensive hedge sleeve and (1b) the OMCL DCA gate, (2) NVDA drift-trim proceeds (new), (3) NVDA reserve. Actual cash (12.99%) sits -1.01pp under target — a reason to prioritize cash replenishment from the *next* trigger that fires, not a reason to raise cash by selling anything today.

## Areas to consider according to recent WEF / macro-policy discussions

- **Rate input: a genuine, modest update.** MS located a dated 10-year print (5.051%, 11/19 close) — a ~7bp decline from the prior 5.12% figure. A fresh search this run for anything more current hit the chronic dateline wall (only a staler 11/10-dated 4.982% figure surfaced, not adopted). Rule 6a's reopening gap narrows to ≈30bp (5.051%→4.75%).
- **Fed policy path: a flagged, unconfirmed data point, not an update.** A fresh search surfaced a single-source, undated-confidence prediction-market (Kalshi) read implying the market now leans toward a December 2026 hold-to-hike rather than a cut — directionally surprising and inconsistent with this book's working easing-cycle assumption. **Not adopted** pending a CME FedWatch cross-check; flagged for the next desk that can verify it.
- **WEF: no change.** Davos 2027 (Jan 18-22, "Deliberate Conversations on the Future") program detail remains unpublished roughly two months out. The January 2026 Chief Economists' Outlook and the IMF's October 2025 Global Financial Stability Report both named elevated AI-era asset valuations and Magnificent-7-style concentration as a standing systemic risk, distinguishing today's AI capex boom from dot-com-era speculation on real profitability grounds.
- **Practical takeaway:** this book's NVDA governance episode has now run a full cycle — crisis, disqualifier fired, reversal, +31% bounce — without a single trade, which is itself the clearest evidence yet that the frameworks correctly separate structural fact from price/sentiment. The same WEF/IMF-named concentration risk that justified routing new core capital to VXUS over VTI/NVDA is, if anything, reinforced by how violently NVDA just moved in both directions inside two weeks.

---

## One-page investment policy statement

**Client:** The "Claude Robinhood Trader" experiment — a ~$100 taxable cash account with ~$46.98 of trading capital (base $50 + accumulated losses, -6.05%) and a ~$50 untouchable reserve. Aggressive risk tolerance, short-to-medium horizon, ambition to compound into a long-running track record. Equities and ETFs only — no options, no leverage, no shorting. Fractional shares available.

**Objective:** Grow the trading pool at an expected ~8-12% blended annualized return, accepting a plausible ≈-36% equity-sleeve bad-year drawdown per BW's standing stress test, funding all new risk exclusively from capital the book has already earned, and tilting new core-sleeve capital toward VXUS until AI/semis look-through exposure eases.

**Target allocation (pool basis):** 26% VTI / 27% VXUS / **7% NVDA (±5pp band, 12% ceiling, new 10.5%/+3.5pp trim-back trigger — target unchanged despite the reinstatement; a partial unwind requires both the board's investigation closing clean AND the China-sales question resolving, not price action)** / 12% XLE / **4% GEHC (±5pp band; 7.5%/+3.5pp trigger, ~1.24pp away — the closest live trigger in the book; firing action: trim to the 6% midpoint, proceeds split to a new defensive hedge sleeve and OMCL's DCA gate)** / 10% OMCL (DCA-gated; bear floor recalibrated $35.24→$33.0 this cycle on sell-side evidence, GS's recalibration ask now closed) / 14% cash.

**Discipline rules the trader must follow (full detail in Strategy & theories, state.md):**
1. No fresh catalyst, no reactive trade — except a pre-committed, falsifiable trigger.
2. Never chase a move already priced in; never size off an unverified figure without live Robinhood confirmation.
3. A DCF hard pass is a hard pass; a new idea needs a full cross-vetting cycle before sizing.
4. A more rigorous re-measurement of an already-acted-on fact is not itself a new fact.
5. A repeated cross-desk ask that never converts into a decision isn't transparency, it's noise.
6. A mechanical drift band does not get redrawn around wherever price happens to sit absent a new fundamental or risk fact — **applies equally to the upside (NVDA's reinstatement bounce) as to the downside.**
7. A hedge is allowed to cost money when the risk it insures against recedes, and earn money when it shows up — XLE's design, now with two pre-committed funding paths (GEHC's trim, NVDA's new drift trigger).

**Standing mechanical triggers:** single-position drift ≥5pp; **NVDA's new ±5pp band / 10.5% trim trigger (~1.79pp away)**; NVDA+OMCL 25% hard concentration trigger plus the 20% soft early-warning line (both clean, ~18.55% of equity); OMCL DCA gate (pool -6.05%); OMCL's $33.0 recalibrated line (tonight's close is the next live test); GEHC's 9% ceiling plus 7.5%/+3.5pp trim line (**~1.24pp away, the book's closest live trigger**); rule 6a's rate-shock pause (~30bp from reopening); the AI/semis core-tilt.

**Review cadence:** full re-underwrite monthly (last 11/2, next ~12/1). Off-cycle on a ≥5pp drift, a fresh structural finding, or within 4 hours of a disqualifier firing or reversing. **Open items for the next run: execute the GEHC trim-to-6%-midpoint the moment the 7.5% line fires; watch the new 10.5% NVDA line for the first time; watch tonight's OMCL close against the recalibrated $33.0 floor; keep routing incremental core dollars to VXUS; revisit the NVDA 7% target only on the two-part governance bar above, never on price.**

---

*No trade recommended off this report — research and policy-governance only, per mandate. This desk does not place trades or touch Robinhood directly.*
