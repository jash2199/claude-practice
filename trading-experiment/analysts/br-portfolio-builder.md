# BR Portfolio Builder — Investment Policy Report

**Date: 2026-11-13 (Friday), ~15:15 ET** (verified via `TZ=America/New_York date`). Prior report: 2026-11-12 ~15:14 ET. Figures below use BW's 13:42 ET live-Robinhood-verified `get_portfolio`/`get_equity_positions`/`get_equity_quotes` snapshot (freshest full figure set on file), cross-checked against GS's 14:42 ET screener and JPM's 09:25 ET / MS's 09:56 ET reports. *Per house rule 4, this desk does not have direct Robinhood access — figures below are relayed, not independently pulled.*

---

## TOP OF REPORT — single biggest gap vs. policy

**GEHC remains the single biggest gap between this desk's recommended allocation and the trader's actual book: +2.17pp over the 4%-of-pool target (6.17% actual vs. 4% target), ~1.33pp from the 7.5%/+3.5pp disciplined partial-trim trigger.** This is now flagged across fourteen-plus consecutive cross-desk reports. Per yesterday's decision (rule 14 — a repeated flag needs a decision, not another flag), this desk reaffirms, again, that the trigger stands unchanged and un-tightened: the drift is a winner running within a deliberately wide band (+19.5%+ unrealized gain, no new capital added, no structural break found by MS or BW), not a policy violation. Restating the same conclusion for a third straight day is itself the discipline — GEHC's band was set wide on purpose precisely so this desk would not react to ordinary price-driven drift.

**Second item, materially updated today: MS completed a full ground-up NVDA rebuild (revenue, margin, and WACC all rebuilt, not just a WACC bump) — base case now $119/sh, i.e., NVDA OVERVALUED by ~27.3% at the last verified price ($163.58), a reversal from Wednesday's near-fair-value WACC-only stress read.** This desk's own reaction: **hold the 7% target unchanged — this is confirmatory, not a new incremental fact.** MS's own words are the key: the full rebuild "lands almost exactly inside yesterday's WACC-only bound ($119 vs. the $112-125 range) — a useful cross-check that the WACC adjustment alone was already capturing most of the reasonable stress, not an argument the market has now fully priced the event." The underlying structural fact (Huang's resignation, Kress as untested interim CEO) hasn't changed since yesterday's target cut — only the rigor of the model measuring it has. Cutting further today, on a more careful measurement of the same already-acted-on fact, would be redrawing a target around a model refinement rather than a new fact — exactly what rule 20 warns against. **NVDA stays at the revised 7% target; the 11/17 print (now T-4) remains the explicit next decision point, not today's valuation memo.**

**Third, a genuine partial resolution on the desks' long-running rate-input disagreement: a dedicated fresh search this run found the 10-year Treasury at ~4.86% as of November 6, 2026 (YCharts and Advisor Perspectives, independently corroborating), with no reliably-dated print since.** This supports BW's and GS's figure (~4.84-4.90%) over MS's carried 5.10% reference — the likely source of MS's higher number appears to be an October *new-issue auction* high yield (~5.02%), a different data series from the secondary-market 10-year yield MS's WACC input should be using. This desk recommends the team adopt ~4.86% as the working figure going forward and flags MS's rate input for correction at its next rebuild — this is a four-report-old open item worth actually closing, not re-flagging a fifth time.

---

## Asset allocation table (target vs. live actual, pool basis)

Pool value: **≈$48.81** (base $50, ≈-$1.19 accumulated loss, -2.38% — per BW's 2026-11-13 ~13:42 ET live-Robinhood-verified snapshot). Total account ≈$98.81 (pool + untouchable ~$50 reserve). Deployable cash $6.10.

| Category | Ticker | Role | Target % (pool) | Actual % (pool) | Gap (pp) | Actual $ (approx.) |
|---|---|---|---|---|---|---|
| Core | VTI | US broad-market beta | 26% | 27.84% | +1.84 | ~$13.59 |
| Core | VXUS | Ex-US diversification | 27% | 26.10% | −0.90 | ~$12.74 |
| Satellite | NVDA | AI/semis conviction (target 7%, unchanged today — see above) | 7% | 8.25% | +1.25 (in-band; 11/17 print is the next decision point) | ~$4.03 |
| Satellite | XLE | Energy / Hormuz supply-shock hedge | 12% | 11.49% | −0.51 | ~$5.61 |
| Satellite | GEHC | Healthcare-tech value (±5pp band; 7.5%/+3.5pp trigger reaffirmed unchanged, third straight day) | 4% | 6.17% | **+2.17 (the actionable gap — ~1.33pp from trigger)** | ~$3.01 |
| Satellite | OMCL | Deepest-discount healthcare tech | 10% | 7.65% | −2.35 (DCA-gated by design, rule 18) | ~$3.73 |
| Reserve | Cash | GEHC trim buffer, OMCL DCA gate, NVDA post-print reserve | 14% | 12.50% | −1.50 | ~$6.10 |

No position breaches a hard mechanical trigger today. GEHC's +2.17pp remains the closest live gate in the book. OMCL's bear-case line ($35.24) has now seen its first-ever sustained-close breach (11/12 official close $34.95, still trading below intraday today at $35.08-35.22) — per the standing contingency plan and five-plus consecutive re-reads this week, a price-only breach without a structural cause is not a trim signal; this desk endorses that reading on policy grounds (see below). **Standing instruction unchanged: the next incremental core dollar still routes to VXUS, not pro-rata, per the 10/19 AI/semis core-tilt policy.**

---

## Core holdings

- **VTI** — Core, target 26%. At 27.84% (+1.84pp), modestly overweight, inside the 5pp band. No change. Rule 6a's pause stays live on new core adds pending a confirmed sub-4.75% 10yr close.
- **VXUS** — Core, target 27%. At 26.10% (−0.90pp), modestly underweight, inside band. Remains the designated recipient of the next incremental core dollar.

## Satellite holdings

- **NVDA** — Satellite, target 7% (unchanged today). Actual 8.25% of pool / 9.43% of equity, live ~$162.25, down -19.43% vs. $201.40 avg cost. Buffer to the $180 contingency-plan-v2 line ≈-9.86%. MS's full rebuild (base $119/sh, -27.3% gap) confirms rather than extends yesterday's target cut rationale — see above. Print now T-4 (Tue 11/17, 5pm ET), Kress's first call as CEO; JPM narrows Street consensus to rev ~$108.8B/EPS ~$2.47 (top of the company's own guided band), a tighter and somewhat more constructive read than MS's own $104B working assumption — this spread between the two desks' consensus inputs is itself worth the team's attention before the print, though it does not change this desk's target decision today. NVDA+OMCL combined concentration ~18.17% of equity (25% trigger, ~6.83pp buffer) — clean. Rule 20's "no new cash to NVDA regardless of volatility" stands.
- **XLE** — Satellite, target 12%. Actual 11.49% (−0.51pp, in-band). Up again today, unrealized +12.22% vs. $57.62 avg cost — continuing to do exactly the job it was sized for. MS's rebuild remains 7 days stale on Brent; flagged again as the single most overdue valuation refresh on the sheet, a desk-process item, not an allocation action. No add, no trim.
- **GEHC** — Satellite, target 4%, ±5pp band (9% ceiling). Actual 6.17% (+2.17pp). **Trigger reaffirmed unchanged for a third consecutive day** (see top of report). No structural break on file from MS or BW. ~1.33pp from the 7.5% partial-trim line.
- **OMCL** — Satellite, target 10%, this book's deepest paper discount. Actual 7.65% (−2.35pp, DCA-gate-designed underweight). **This desk's policy read on today's development:** the bear-case line ($35.24) has now seen its first sustained-close breach (11/12's official close, $34.95) and continues trading below it intraday today — a materially harder fact than any prior touch/graze this week. The contingency plan's own design, written explicitly to prevent exactly this kind of pressure from converting into a reactive trim, requires a *structural* break (a guidance cut, a lost contract, a margin/bookings deterioration trend), not a price level, however decisively crossed. Five separate re-reads today (09:37, 11:09, 11:46, 12:43, 13:42 ET) have each independently searched for and found no such structural cause. **This desk's judgment: the policy framework is working as designed, not failing to catch a real break — hold the line, no trim recommended.** If a genuine structural fact does surface (the only thing that should move this), that is the next run's trigger, exactly as written. The DCA gate (rule 18) continues to correctly block any new capital regardless (pool is net-negative, ~$3.4-3.5 from the +$2.50 threshold).

---

## Expected annual return range

At current target weights (54% core / 33% satellite / 14% cash by target basis, unchanged today), blended expected return **~8-12% annualized**, unchanged from yesterday's revised range. NVDA's full-rebuild valuation reversal does not move this estimate further — it was already captured in yesterday's target cut. VTI/VXUS keep standard ~8-10%/~6-8% long-run assumptions; satellite dispersion (OMCL/GEHC/XLE/NVDA) keeps its existing wide range around the blend, now with NVDA's own range (bull +28% to bear -65% per MS) the single widest input in the book heading into the 11/17 print.

## Expected maximum drawdown, bad year

- **Pool-level: BW's 13:42 ET stress test — ≈-33.9% of equity, ≈-32.1% of the pool / original $50 base in a genuine tail scenario**, essentially unchanged from yesterday.
- This models a broad recession, not an idiosyncratic single-name event. NVDA's binary 11/17 print and OMCL's sustained bear-line breach are both live, already-crystallizing risks layered on top of this baseline.
- **NVDA event risk is now the single highest-weighted scenario on BW's own tail-risk sheet: ~35-40% probability of a disappointing print/call under an untested first-time CEO, -5% to -20% further downside (~-0.4 to -1.6pp of pool).** JPM's own base rate (4 of last 5 prints followed by the stock falling or giving back gains) compounds with the fired governance disqualifier.
- **OMCL: BW estimates ~55-65% probability of a second consecutive sub-$35.24 close today** given the bid was already $0.22 below the line with ~2.5 hours left in Thursday's session — logged as a watch item per this desk's policy read above, not a trim trigger on its own.
- **Rate risk: now substantially reconciled.** A dedicated fresh search found the 10-year Treasury at **~4.86% as of 2026-11-06** (YCharts/Advisor Perspectives, corroborated) — supporting BW/GS's figure over MS's carried 5.10% reference, which appears to conflate a new-issue auction high yield (~5.02%, October) with the secondary-market yield. Rule 6a's 4.75% pause-reopening threshold sits **~11bp away** on this reconciled figure — unchanged in substance, now resting on a cleaner number.
- **Fed policy path: still a genuine information gap, not a resolved input.** A dedicated search for December 2026 FOMC cut-probability pricing returned conflicting, mostly undated figures (ranging ~24% to ~65% depending on source and vintage) with no single reliably-dated-to-November reading this desk is comfortable citing. Continuing to flag the gap rather than guess at a number — the team should pull CME FedWatch directly when a live read is needed for a sizing decision, not rely on secondary aggregation.
- **WEF / macro-policy: no genuinely new item this report.** No confirmed WEF Davos 2027 (Jan 18-22) agenda or theme has been published yet beyond the dates already on file; third-party theme previews conflict and are unconfirmed. The most substantive AI-concentration-risk commentary found (WEF president's "triple bubble" warning, IMF's Magnificent-7 concentration flag) dates to late 2025 — a year stale, not a fresh macro input, though directionally still the operative framing for this book's own AI/mega-cap look-through exposure (~20-22% of equity per BW).

## Rebalancing schedule and trigger rules

- **Calendar:** full re-underwrite monthly — last fulfilled 11/2; next due ~12/1. Off-cycle confirmation on any ≥5pp single-position drift, a fresh cross-desk structural finding, or within 4 hours of any confirmed disqualifier firing on a held position (standing commitment, adopted 11/12).
- **Mechanical triggers currently live, none fired this report:**
  - Single-position drift ≥5pp vs. target — clean (largest live gap is GEHC's +2.17pp).
  - NVDA (7% target) — actual 8.25%, +1.25pp, in-band. 11/17 print + Kress's first call remains the explicit next decision point.
  - GEHC standard band (4%/±5pp, 9% ceiling) — ~2.83pp buffer to the hard ceiling, clean. 7.5%/+3.5pp trim trigger ~1.33pp away, reaffirmed unchanged for a third day.
  - OMCL DCA gate (rule 18) — pool at an accumulated loss; ~$3.4-3.5 from the +$2.50 threshold.
  - OMCL price revisit line ($35.24) — first sustained-close breach now on record (11/12); per this desk's policy read above, still resolves to HOLD absent a structural cause.
  - NVDA+OMCL combined 25%-of-equity concentration trigger — ~6.83pp buffer, clean.
  - Rule 6a rate-shock pause — in effect since 9/2, blocking new core/NVDA adds. Gap to the 4.75% reopening threshold now ~11bp on the reconciled 10yr figure (~4.86%, 11/6) — not lifted.
  - AI/semis core-tilt (10/19) — next incremental core-sleeve dollar routes to VXUS, not pro-rata.
- Every trigger above fires to a mandatory review or a pre-specified mechanical action, not an open-ended discretionary call.

## Tax efficiency strategy (taxable account)

- Every lot remains short-term. **Harvest candidates: NVDA (-19.43% unrealized) and OMCL (-25.33% unrealized).** No harvest trade recommended on either today — OMCL's DCA gate is its designed mechanism, not a harvest/replace trade, and NVDA's target sits where yesterday's structural-fact-driven cut (now confirmed, not extended, by MS's full rebuild) put it.
- A future GEHC partial trim (pre-committed at the 7.5% cross) would realize this book's largest unrealized gain (+20.38%) — accepted as the cost of the discipline.
- A future NVDA trim, should the 11/17 print trigger one, would realize a loss — tax-efficient by construction, the one silver lining of the position's drawdown.
- At sub-$100 scale, wash-sale/lot mechanics matter less than the underlying discipline of not manufacturing a taxable event without a trigger.

## Dollar-cost-averaging plan for redeploying profits

- OMCL remains the designated DCA target once rule 18's gate fires ($2.50 accumulated profit; currently a loss, ~$3.4-3.5 away).
- Standing instruction for any future general deployable-cash core top-up: route to VXUS, not a VTI/VXUS split, until AI/semis look-through exposure eases.
- The 14% cash target's priority order (unchanged from yesterday): (1) GEHC trim buffer, (2) OMCL DCA gate, (3) NVDA post-print reserve. Actual cash (12.50%) sits -1.50pp under target, essentially unchanged all week — worth noting as the one reserve-side gap that matters most heading into a T-4 binary event, though this desk is not recommending raising cash by selling anything today (that would itself be a reactive pre-print trim).

## Areas to consider according to recent WEF / macro-policy discussions

- **Rate input reconciled this report: 10-year Treasury ~4.86% as of 2026-11-06 (YCharts/Advisor Perspectives), resolving the multi-report desk disagreement in favor of BW/GS's lower figure.** MS's carried 5.10% reference likely conflates an October new-issue auction's high yield with the secondary-market yield — flagged for correction at MS's next rebuild rather than left to recur.
- **Fed policy path: still an open gap.** No reliably-dated December 2026 FOMC cut-probability reading found this report; cited figures ranged ~24-65% depending on source/vintage, none both fresh and well-sourced. Continuing to flag rather than guess — a live CME FedWatch pull is the right source when this actually matters for a sizing decision (e.g., rule 6a's reopening threshold, now ~11bp away).
- **WEF: no new confirmed Davos 2027 (Jan 18-22) agenda content this report** beyond the dates already on file. The operative AI-concentration-risk framing (WEF's "triple bubble" warning, IMF's Magnificent-7 concentration flag) remains a late-2025 reference point, not updated this week — but it stays directionally relevant: this book's own AI/mega-cap look-through exposure (~20-22% of equity per BW, once VTI's internal tilt is counted) is a live, small-scale instance of exactly that macro theme, and NVDA's governance event this week is the sharpest version of it the book has actually lived through.
- **Practical takeaway:** nothing in this macro sweep changes any target this report. The rate reconciliation modestly firms up confidence in the team's existing 4.75%/~11bp-away reopening read; the FOMC and WEF gaps remain gaps, correctly left unresolved rather than filled with an unsourced guess.

---

## One-page investment policy statement

**Client:** The "Claude Robinhood Trader" experiment — a ~$100 taxable cash account with ~$50 of trading capital (base $50 + accumulated profits, currently a loss) and a ~$50 untouchable reserve. Aggressive risk tolerance, short-to-medium horizon, ambition to compound into a long-running track record. Equities and ETFs only — no options, no leverage, no shorting. Fractional shares available.

**Objective:** Grow the trading pool at an expected ~8-12% blended annualized return, accepting a plausible ≈-34% equity-level (≈-32% pool-level) bad-year drawdown per BW's standing stress test, funding all new risk exclusively from capital the book has already earned, and tilting new core-sleeve capital toward VXUS until AI/semis look-through exposure eases.

**Target allocation (pool basis):** 26% VTI / 27% VXUS / **7% NVDA (unchanged today — MS's full rebuild confirms, not extends, yesterday's 10%→7% cut; 11/17 print under Kress is the next decision point)** / 12% XLE / **4% GEHC (±5pp band, 7.5%/+3.5pp trigger reaffirmed unchanged for a third consecutive day, ~1.33pp away)** / 10% OMCL (DCA-gated; bear-line now sustained-breached but resolves to HOLD absent a structural cause, per policy) / 14% cash.

**Discipline rules the trader must follow (full detail in Strategy & theories, state.md):**
1. No fresh catalyst, no reactive trade — except a pre-committed, falsifiable trigger. **Applied today: OMCL's sustained bear-line breach is price action, not a structural fact, and resolves to hold per the contingency plan's own design.**
2. Never chase a move already priced in; never size off an unverified figure without live Robinhood confirmation.
3. A DCF hard pass is a hard pass; a new idea needs a full cross-vetting cycle before sizing.
4. A more rigorous re-measurement of an already-acted-on fact is not itself a new fact. **Applied today: MS's full NVDA rebuild confirms yesterday's target cut; it does not trigger a further one.**
5. A repeated cross-desk ask that never converts into a decision isn't transparency, it's noise — reaffirmed on GEHC for a third straight day for exactly this reason: restating the same correct decision is the discipline, not a failure to decide.
6. A mechanical drift band does not get redrawn around wherever price happens to sit absent a new fundamental or risk fact.
7. A hedge is allowed to cost money when the risk it insures against recedes, and earn money when it shows up — XLE continues to do its job.

**Standing mechanical triggers:** single-position drift ≥5pp; NVDA+OMCL 25% combined concentration (~6.83pp buffer); OMCL DCA gate (~$3.4-3.5 away); OMCL's $35.24 line (sustained-breached, resolves to hold absent a structural cause); NVDA's 11/17 print as the explicit next decision point; GEHC's 9% ceiling plus 7.5%/+3.5pp trim line (~1.33pp away); rule 6a's rate-shock pause; the AI/semis core-tilt.

**Review cadence:** full re-underwrite monthly (last 11/2, next ~12/1); off-cycle on a ≥5pp drift, a fresh structural finding, or within 4 hours of a disqualifier firing. Open items for the next run: watch for an actual second consecutive OMCL close below $35.24 and treat any *new* structural fact (not the close itself) as the trigger; treat 11/17 and Kress's first call as the live NVDA decision point; flag MS's 10yr input (5.10%) for correction toward the reconciled ~4.86% figure at its next rebuild.

---

*No trade recommended off this report — research and policy-governance only, per mandate. This desk does not place trades or touch Robinhood directly.*
