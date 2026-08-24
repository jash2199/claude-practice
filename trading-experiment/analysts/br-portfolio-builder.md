# BR Portfolio Builder — Investment Policy Report
**Date: 2026-08-24 (Monday), evening — built on the trader's own 15:36 ET Robinhood-verified read (state.md), BW's 14:45 ET risk read, GS's 15:42 ET screener update, and JPM's 09:32 ET earnings calendar**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-08-21, evening. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. MS's DCF figures below are 3 days stale (2026-08-21) — flagged where used.*

---

## TOP OF REPORT — single biggest gap vs. policy

**NVDA remains the single largest line-item gap on the book, and it widened again today: −4.66pp of pool (10.34% actual vs. 15% target), from −4.44pp on 8/21.** The move is entirely price-driven — NVDA is down −2.74% today, the book's worst mover, two days ahead of its own 8/26 print — not a policy or allocation decision. **Nothing changes this desk's recommendation: the resolution is already scheduled for the first run after Wednesday's print (2026-08-27), and this desk said last report it would not re-argue the case again before then. Holding to that.** One number is worth restating plainly because it is now genuinely live risk, not a policy abstraction: the **5pp single-position pool-drift trigger has a buffer of only ~0.34pp** (per state.md's 15:36 ET read; BW's 14:45 ET read has it at 0.38pp) — the tightest any trigger has ever sat on this book, and it could plausibly fire from pure pre-print price weakness before Wednesday's close even arrives. Per rule 12, a pre-committed trigger fires on schedule regardless of "why" — if it fires this week, that is a forced *review*, not an automatic sell, and per BW's own standing recommendation, not a cue to add either.

**No trade recommended today.** Rule 1 applies cleanly — nothing in today's tape is a fresh catalyst for this book, and the no-trade streak since the 8/7 VTI trim now extends past three weeks.

**Rule 6a status note:** Friday 8/21's confirmed 30-year close was 5.273% (1-for-2 toward the two-consecutive-close threshold). Today's intraday reads (per BW's 14:45 ET pull) sat back around ~5.24%, which — if it holds into today's 16:00 ET settle — **resets the streak to 0-for-2 rather than advancing it.** This desk does not have a live feed and did not see a confirmed settle as of the freshest data available to it this run; next report should open with Monday's actual confirmed close rather than propagate an intraday number, consistent with the WebSearch-staleness problem GS flagged repeatedly today.

---

## 1. Recommended allocation vs. current book

Trading-book value (state.md, 15:36 ET Robinhood-verified `get_portfolio`): **pool ≈ $50.1627** = equity $44.1627 + deployable cash $6.00. Base capital $50.00 → **accumulated profit ≈ $0.16** — down from 8/21's ~$0.61, essentially round-tripping most of the week's gain on today's broad red session. (Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages. **All percentages are % of pool unless marked "% of equity."**)

| Sleeve | Ticker | Role | Target % (pool) | Current % (pool) | Current $ | Gap |
|---|---|---|---|---|---|---|
| Core | **VTI** (Vanguard Total Stock Market) | Core — broad US equity | 30% | 32.56% | $16.33 | +2.56pp over (inside band) |
| Core | **VXUS** (Vanguard Total International) | Core — ex-US diversifier | 25% | 26.87% | $13.48 | +1.87pp over (inside band) |
| Satellite | **NVDA** | Satellite — single-name AI/semis conviction | 15% *(under formal review — decision 8/27)* | 10.34% | $5.19 | **−4.66pp UNDER — largest gap, tightest ever to the 5pp drift-trigger floor (~0.34pp buffer)** |
| Satellite | **OMCL** | Satellite — healthcare-tech diversifier, half-size | 10% | 7.37% | $3.70 | −2.63pp under |
| Satellite | **XLE** (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.92% | $5.48 | +0.92pp over — on target |
| Cash | — | Dry powder / event-window buffer | 10% (hard floor, ~$5.02) | 11.96% | $6.00 | +1.96pp over |

**Position-level prices (15:36 ET, Robinhood-verified via state.md):** NVDA $208.835 (−2.74%, worst mover of the day), VTI $377.19 (−0.28%), VXUS $87.215 (−0.56%), OMCL $34.73 (−2.39%, second-worst mover, now BW's read puts the unrealized loss at −26.4% since the $46.99 average cost — the deepest drawdown in the book's history), XLE $63.12 (−0.82%). All five holdings red for a second consecutive check-in today, per BW.

**No new tickers recommended this run.** The satellite sleeve stays at three names. **GEHC** remains the only candidate to have ever fully cleared rule 6. Its gap to the ≤$70 entry ceiling narrowed slightly on today's broad tape weakness — GS's live-verified read has it at $74.39 (−0.58%), ~6.3% above the ceiling, down from 8/21's ~6.6% — but still not fired, and still well short of a genuine pullback into the zone. Hard time-box 2026-09-10, ~17 days out, still defaulting to lapse per rule 16.

**AVGO retracted, standing.** MS's 8/21 first-build DCF found AVGO ~30.4% overvalued, a clean hard-pass in the same territory as MU/FRO. This desk deferred its own coverage-priority ask to GS's reordered pick — **PTCT** — last report and has nothing to add; PTCT remains unvetted (no MS/BW coverage started) and is not actionable today regardless.

---

## 2. Core vs. satellite

- **Core — target 55%, actual 59.43% (+4.43pp over).** VTI + VXUS. Essentially flat vs. 8/21's +4.13pp — drifted on relative weight only, no core trade since the 8/7 VTI trim.
- **Satellite — target 35%, actual 28.63% (−6.37pp under).** NVDA + OMCL + XLE. Widened from 8/20's −5.99pp, purely because NVDA and OMCL both fell harder than the core sleeve today. Still wider than the 5pp single-position drift trigger already enforced elsewhere on this book — for the sleeve as a whole, not any one name; this desk is not proposing a sleeve-level trigger, for the same rule-14 reason given in the last two reports.
- **Cash — target 10% floor, actual 11.96% ($6.00).** Held deliberately through the 8/26 NVDA/CRWD print and the Jackson Hole window. **Defend this floor through the event window** — unchanged design.

**Sleeve-level observation, restated once more:** the satellite gap is still ~73% attributable to NVDA alone (4.66pp of the 6.37pp total). Resolving the NVDA target at 8/27 resolves most of the sleeve gap arithmetically by construction — same conclusion as the last two reports, carried forward without re-argument.

---

## 3. Expected annual return range (historical-data basis)

| Sleeve | Historical annualized range | Note |
|---|---|---|
| VTI | ~9–11% | Long-run US total-market average; wide single-year dispersion |
| VXUS | ~6–9% base, skewed higher near-term | Ex-US developed+EM blend; 2026 cyclical tailwind (weaker dollar, wide forward-P/E discount) unchanged |
| NVDA | ~25–45%+ (or a large negative year) | Single-name semis/AI — the book's highest-variance line by far, now 2 days from a binary catalyst |
| OMCL | ~10–15% | Small/mid-cap healthcare-tech; idiosyncratic, historically decorrelated from the AI trade — though the range itself is looking increasingly theoretical against a −26.4% realized drawdown with no identified catalyst |
| XLE | ~8–12% ex-dividend + ~3% yield | Cyclical, oil-driven, mean-reverting; today's session is a live illustration of the hedge's regime-dependence — see WEF/macro section below |

**Blended expected return at current actual weights: ~11–15% annualized.** Unchanged from 8/21 — today's moves are all within normal single-session noise for this range, not a regime shift.

---

## 4. Expected maximum drawdown in a bad year

| Scenario | Est. peak-to-trough on the trading pool | Driver |
|---|---|---|
| Ordinary bad year | **−20% to −28%** (~$10–14 on a $50 pool) | Broad equity bear; VTI/VXUS carry ~59% of the book |
| Severe / AI-unwind | **−32% to −40%** (~$16–20) | NVDA halving alongside a broad de-rate; satellites offer partial, not full, offset |
| Tail — rate shock + growth scare | **−40%+** | Rule 9's known blind spot: a rate-driven multi-factor risk-off hits NVDA, VTI, VXUS and OMCL through one channel; today's all-five-red session (per BW) is a live, if modest, instance of exactly this correlation pattern |

**The structural floor remains the book's best risk control and it is not a market call:** the untouchable ~$50 reserve caps total account drawdown at roughly half of any pool drawdown. A −40% pool year is a −20% account year.

**Live stress point:** rule 6a's 30-year leg sits 1-for-2 (Thursday 8/20 under, Friday 8/21 over); today's confirmed close is the actual decision point and was not available to this desk as of its freshest source this run. Separately, and now the sharper near-term risk: the **NVDA pool-drift trigger's ~0.34pp buffer is close enough to fire on ordinary pre-print volatility alone**, independent of any rate move. Both are monitor-only, not action items, until they actually print.

---

## 5. Rebalancing schedule and trigger rules

**Scheduled review:** monthly full-policy re-underwrite (next: 2026-09-01); daily monitor-only via this report.

**Live triggers — status this run:**
1. **5pp single-position pool drift** → mandatory review. NVDA −4.66pp; **no fire yet — ~0.34pp of headroom, the tightest reading on file, plausibly closing before Wednesday's print on price action alone.**
2. **NVDA 18–20% of equity** → mandatory trim review. Actual 11.74%; no fire, ample buffer.
3. **NVDA+OMCL 25% of equity** combined → mandatory review. Actual ~20.11% (~4.89pp buffer); no fire.
4. **15% of equity per individual satellite** → OMCL 8.37%, XLE 12.40%; no fire.
5. **Rule 6a rate shock** (10yr >4.75% or 30yr >5.25% on two consecutive closes) → pause new high-multiple adds. 1-for-2 on the 30-year leg pending today's confirmed close; likely resets to 0-for-2 per BW's intraday read, but unconfirmed to this desk.
6. **10% cash floor (~$5.02)** → actual 11.96%; defend through the 8/26-29 event window; no discretionary position may breach it.

**Design principle, reaffirmed (rule 16):** every trigger expires to **no-action**, never to a purchase. Applies to GEHC (9/10 → lapse) and to the NVDA-target question itself (8/27 → default revision to 11% absent an explicit decision). If the NVDA drift trigger fires this week, the same principle governs the *response* — a forced review is not a forced trade, per BW's own explicit recommendation not to average down into a binary event with zero hedging capacity.

---

## 6. Tax efficiency strategy (taxable account)

1. **Turnover restraint *is* the tax strategy at this size.** Still nine trades in six-plus weeks; every lot is short-term. Continuing to say no remains the single largest available tax lever.
2. **Long-term-capital-gains clock — nothing is close.** Earliest eligibility: NVDA 2027-07-10, VTI 2027-07-16, OMCL 2027-07-18, XLE 2027-07-29, VXUS 2027-07-31. Any trim before mid-2027 is short-term by construction; when a trim is needed for funding, prefer the highest-cost-basis lot (HIFO).
3. **OMCL is now the only harvestable loss and it still should not be harvested.** The unrealized loss has deepened to ~−26.4% since cost (BW, 14:45 ET) — the tax benefit is still cents at this position size, and the cost is closing the book's widest-margin-of-safety position (MS's 8/21 DCF: ~52.8% upside, the widest discount on the sheet) and triggering a 30-day wash-sale window on exactly the name GS has repeatedly flagged as the highest-EV next-dollar destination. The deepening loss makes this *more* true, not less — a bigger unrealized loss on a name the valuation desk still calls the cheapest thing in the book is a reason to hold, not to lock it in.
4. **VXUS foreign tax credit:** withholding at this size is measured in cents, well under the $300 single-filer de minimis — claimable directly on Schedule 3 without Form 1116. No action needed.
5. **Qualified dividends:** VTI/VXUS both go ex-dividend in late September; avoid discretionary core trims in that window absent a fired trigger, to preserve the >60-day holding-period requirement for qualified treatment.

---

## 7. Dollar-cost-averaging plan for redeploying profits

The book's deployable capital is $50 base **plus accumulated profits only.** Current accumulated profit: **~$0.16** (pool $50.1627 − $50.00 base) — down from ~$0.61 on 8/21, reflecting today's broad red session more than any structural change.

**Standing DCA rule (unchanged, still not yet triggerable):**
- **Tranche size $2.50.** Profits accumulate un-deployed until cumulative profit reaches **≥$2.50**, then one tranche is released. No partial tranches.
- **Destination: the most-underweight *vetted* sleeve line at release time** — still OMCL (−2.63pp, and the only holding trading below its own DCF fair value, by the widest margin on the book, per MS's 8/21 read). NVDA stays excluded as a DCA destination while MS's overvaluation call stands, regardless of its headline gap — and doubly so two days before its own binary print.
- **Cadence: at most one tranche per calendar month**, never during an unresolved binary-event window on the destination name.
- **Status: ~$0.16 accumulated — no tranche available. ~$2.34 of further profit required**, further away than 8/21's ~$1.89 gap. No action.

---

## 8. Areas to consider — recent WEF / macro-policy discussions

No fresh WEF release since the May 2026 Chief Economists' Outlook already on file. One genuinely new data point from today's tape is worth adding to that standing framing rather than repeating the IMF/WEF stagflation case a third time:

1. **Today's Iran-sanctions rollout ("Operation Economic Outcast," per GS/CNBC) is a useful real-world test of rule 9's diversification-is-regime-dependent caveat.** The US Treasury announced its toughest-yet sanctions campaign against Iran today, global in scope, China explicitly not exempt — and **oil fell on the news** (WTI −2.5% to ~$84.89, Brent −2.5% to ~$92.06) rather than spiking, per GS's same-day report. That is the opposite of the supply-shock pattern XLE is designed to hedge (a genuine Hormuz disruption), and consistent with BW's observation that XLE has now failed to offset two consecutive risk-off sessions. **Read for this book: XLE hedges a physical supply shock, not an enforcement/sanctions announcement — those two categories of "Hormuz risk" have started to diverge in market reaction, and this book's design (rule 9, rule 3) already anticipates that distinction rather than being surprised by it.** No trigger or trade implication; a data point that sharpens, not changes, the standing framework.
2. **Hormuz itself remains the named transmission channel, still unresolved on the actual reopening question** — Iran-Oman corridor talks remain unsigned. Rule-3 OXY veto holds unchanged.
3. **On the NVDA-target question:** nothing new to add — the case was made in full across the 8/20 and 8/21 reports (IMF's growth downgrade, WEF's AI-productivity-timing caution), and this desk is holding to its own commitment not to re-argue it before the scheduled 8/27 decision.

---

## 9. Investment Policy Statement — one page, as of 2026-08-24

**Objective.** Compound a $50 trading pool (inside a ~$100 taxable cash account, ~$50 untouchable reserve) at an aggressive risk tolerance over a short-to-medium horizon, building a durable long-run track record. Equities and ETFs only; no options; fractional shares permitted.

**Strategic allocation (% of pool).** Core 55% — VTI 30%, VXUS 25%. Satellite 35% — NVDA 15% *(under formal review, decision 2026-08-27, default revision to 11%)*, OMCL 10%, XLE 10%. Cash 10%, treated as a hard floor (~$5.02), not a residual.

**Permitted actions.** (1) Trigger fires — execute the pre-committed action. (2) DCA tranche release at ≥$2.50 accumulated profit, vetted destinations only, max one per month. (3) A new position that has cleared full rule-6 cross-vetting (MS DCF + BW risk read) and passes rule-2 entry discipline, funded without breaching the cash floor. **Nothing else.**

**Prohibited.** Adding to a position your own valuation desk calls overvalued. Chasing a move already 3%+ priced in. Opening a single-name position during an active geopolitical shock. Breaching the cash floor for a discretionary entry. Buying because a clock ran out (rule 16). Sizing off any price not live-verified via Robinhood (rule 4). Averaging into a satellite position inside a binary-event window on the strength of a drift-trigger fire alone (this week's live case, per BW).

**Review cadence.** Daily monitor via this desk; monthly full re-underwrite (next 2026-09-01); triggers evaluated every scheduled run regardless of news flow (rule 12).

**Expected outcomes.** Return ~11–15% annualized at current weights; bad-year pool drawdown −20% to −28%, severe −32% to −40%, halved at the account level by the reserve.

**Governing principle.** *Every deadline expires to no-action. Every repeated flag converts to a rule or retires. The target you cannot reach under your own rules is not a target — it is an error in the policy, and the policy is what gets corrected.*

---

## Next scheduled BR report
Priorities: (1) Monday's confirmed 30-year close, resolving rule 6a either way; (2) the NVDA pool-drift trigger's ~0.34pp buffer — the closest any trigger has come to firing, worth checking first thing next run regardless of what else is happening; (3) the 8/26 NVDA/CRWD print itself, governed by the existing written contingency plans, not a fresh BR call; (4) the 8/27 NVDA-target decision, arriving on schedule; (5) GEHC's price gate ahead of the 9/10 lapse, now ~17 days out.

**Sources:** trading-experiment/state.md (2026-08-24, 15:36 ET Robinhood-verified `get_portfolio` read, and 15:52 ET incident-recovery note) · analysts/bw-risk-assessment.md (2026-08-24, ~14:45 ET) · analysts/gs-stock-screener.md (2026-08-24, ~15:42 ET) · analysts/jpm-earnings-analyzer.md (2026-08-24, ~09:32 ET) · analysts/ms-dcf-valuation.md (2026-08-21, ~10:1x ET — 3 days stale, flagged) · [Bessent unveils "Operation Economic Outcast" Iran sanctions (CNBC, 8/24, via GS)] · [IMF World Economic Outlook, April 2026](https://www.imf.org/en/publications/weo/issues/2026/04/14/world-economic-outlook-april-2026) · [WEF Chief Economists' Outlook May 2026](https://www.weforum.org/publications/chief-economists-outlook-may-2026/).
