# BR Portfolio Builder — Investment Policy Report
**Date: 2026-08-25 (Tuesday), evening — built on the trader's own 15:36 ET Robinhood-verified read (state.md, seventh and last run of the day), BW's 14:41 ET risk read, GS's evening screener update, and JPM's 10:15 ET earnings calendar**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-08-24, evening. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant. All five holding figures below are same-day (2026-08-25), not stale.*

---

## TOP OF REPORT — single biggest gap vs. policy

**NVDA remains the single largest line-item gap on the book, but it narrowed today rather than widening: −4.50pp of pool (10.50% actual vs. 15% target), from −4.66pp on 8/24.** The move is entirely price-driven — NVDA is +1.82% today, one of the book's best movers, on the eve of tomorrow's after-market print — not a policy or allocation decision. **This desk is holding to its own commitment from the last two reports: no re-argument before the scheduled 2026-08-27 decision run.** Worth restating precisely because it is genuinely live risk into a binary event, not a policy abstraction: the **5pp single-position pool-drift trigger's buffer improved to ~0.50pp** (state.md 15:36 ET; BW's 14:41 ET read agrees at 0.51pp), up from Monday's tightest-ever ~0.34pp and holding roughly flat through today's seven check-ins (0.43–0.52pp range) — the trigger eased on the print-eve rally rather than closing in on it. Per rule 12 it still fires on schedule regardless of direction if crossed; per BW's own standing recommendation, a fire this close to the print would be a forced *review*, not a cue to add.

**No trade recommended today.** Rule 1 applies cleanly — nothing in today's tape is a fresh catalyst for this book, and the no-trade streak since the 8/7 VTI trim now extends to three full weeks plus one day.

**Rule 6a status note:** Monday 8/24's confirmed settled closes reset the streak to **0-for-2** on both legs (10yr and 30yr both back under threshold) — the Friday 8/21 30yr print that had it 1-for-2 did not repeat. BW's 14:41 ET intraday reads confirm both legs remain clear for a second straight session. Next dated checkpoint: Fed Chair Warsh's first Jackson Hole keynote, **Friday 2026-08-28, 10:00 ET** — see macro section below, a genuinely two-sided input, not a settled directional call.

---

## 1. Recommended allocation vs. current book

Trading-book value (state.md, 15:36 ET Robinhood-verified `get_portfolio`): **pool ≈ $50.1809** = equity $44.1809 + deployable cash $6.00. Base capital $50.00 → **accumulated profit ≈ $0.18** — up slightly from 8/24's ~$0.16, essentially flat on the week. (Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages. **All percentages are % of pool unless marked "% of equity."**)

| Sleeve | Ticker | Role | Target % (pool) | Current % (pool) | Current $ | Gap |
|---|---|---|---|---|---|---|
| Core | **VTI** (Vanguard Total Stock Market) | Core — broad US equity | 30% | 32.60% | $16.36 | +2.60pp over (inside band) |
| Core | **VXUS** (Vanguard Total International) | Core — ex-US diversifier | 25% | 27.10% | $13.60 | +2.10pp over (inside band) |
| Satellite | **NVDA** | Satellite — single-name AI/semis conviction | 15% *(under formal review — decision 8/27)* | 10.50% | $5.27 | **−4.50pp UNDER — largest gap; drift-trigger buffer ~0.50pp, holding since Monday's ~0.34pp low** |
| Satellite | **OMCL** | Satellite — healthcare-tech diversifier, half-size | 10% | 7.06% | $3.54 | −2.94pp under |
| Satellite | **XLE** (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.79% | $5.41 | +0.79pp over — on target |
| Cash | — | Dry powder / event-window buffer | 10% (hard floor, ~$5.02) | 11.96% | $6.00 | +1.96pp over |

**Position-level prices (15:36 ET, Robinhood-verified via state.md):** NVDA $212.275 (+1.82%), VTI $377.85 (+0.21%), VXUS $87.985 (+0.90%), OMCL $33.295 (−3.94%, worst mover of the day for a second straight session, unrealized loss now ~−29.1% since the $46.99 average cost — the deepest drawdown in the book's history, again), XLE $62.405 (−1.12%, the day's other laggard). Four of five holdings green; OMCL and XLE the two red positions.

**No new tickers recommended this run.** The satellite sleeve stays at three names. **GEHC** remains the only candidate to have ever fully cleared rule 6. GS's evening read has it at $74.11 (−0.11%), still ~5.9% above the $70 entry ceiling — no meaningful progress toward the zone today. Hard time-box 2026-09-10, ~16 days out, still defaulting to lapse per rule 16. **CRWD** (not held) sits at $185.70 (−2.61%), still weak into its own 8/26 print alongside NVDA — rule 2/rule 6 both still block entry regardless of tomorrow's outcome for either name.

**AVGO retracted, standing; PTCT unvetted, standing.** No change from 8/24 — MS's 8/21 AVGO build (~30.4% downside) remains a hard pass; GS's reordered #1 unvetted priority, PTCT, has no MS/BW coverage started and is not actionable today.

---

## 2. Core vs. satellite

- **Core — target 55%, actual 59.70% (+4.70pp over).** VTI + VXUS. Widened slightly vs. 8/24's +4.43pp, purely on relative weight (both core names outperformed the satellite sleeve today) — no core trade since the 8/7 VTI trim.
- **Satellite — target 35%, actual 28.35% (−6.65pp under).** NVDA + OMCL + XLE. Slightly wider than 8/24's −6.37pp, because OMCL and XLE both fell today while NVDA's gain wasn't enough to offset them at the sleeve level. Still well outside the 5pp single-position drift-trigger band applied elsewhere on this book — this desk is again not proposing a sleeve-level trigger, same rule-14 reasoning as the last three reports.
- **Cash — target 10% floor, actual 11.96% ($6.00).** Held deliberately through the 8/26 NVDA/CRWD print and the Jackson Hole window (now confirmed 8/27-29, keynote 8/28). **Defend this floor through the event window** — unchanged design.

**Sleeve-level observation, restated once more and now essentially fully explained by one name:** the satellite gap is ~68% attributable to NVDA alone (4.50pp of the 6.65pp total) even after today's narrowing. Resolving the NVDA target at 8/27 resolves most of the sleeve gap arithmetically by construction — same conclusion as the last three reports, carried forward without re-argument.

---

## 3. Expected annual return range (historical-data basis)

| Sleeve | Historical annualized range | Note |
|---|---|---|
| VTI | ~9–11% | Long-run US total-market average; wide single-year dispersion |
| VXUS | ~6–9% base, skewed higher near-term | Ex-US developed+EM blend; 2026 cyclical tailwind (weaker dollar, wide forward-P/E discount) unchanged |
| NVDA | ~25–45%+ (or a large negative year) | Single-name semis/AI — the book's highest-variance line by far, now less than 24 hours from a binary catalyst |
| OMCL | ~10–15% | Small/mid-cap healthcare-tech; idiosyncratic, historically decorrelated from the AI trade — the range is looking increasingly theoretical against a ~−29.1% realized drawdown with no identified catalyst, now the deepest yet |
| XLE | ~8–12% ex-dividend + ~3% yield | Cyclical, oil-driven, mean-reverting; two straight red sessions against green core/NVDA moves is a live illustration of the hedge's regime-dependence — see WEF/macro section below |

**Blended expected return at current actual weights: ~11–15% annualized.** Unchanged from 8/21 and 8/24 — today's moves are all within normal single-session noise for this range, not a regime shift.

---

## 4. Expected maximum drawdown in a bad year

| Scenario | Est. peak-to-trough on the trading pool | Driver |
|---|---|---|
| Ordinary bad year | **−20% to −28%** (~$10–14 on a $50 pool) | Broad equity bear; VTI/VXUS carry ~60% of the book |
| Severe / AI-unwind | **−32% to −40%** (~$16–20) | NVDA halving alongside a broad de-rate; satellites offer partial, not full, offset |
| Tail — rate shock + growth scare | **−40%+** | Rule 9's known blind spot: a rate-driven multi-factor risk-off hits NVDA, VTI, VXUS and OMCL through one channel — this week's mixed, not uniformly-red, sessions are a mild counterexample so far, not a refutation |

**The structural floor remains the book's best risk control and it is not a market call:** the untouchable ~$50 reserve caps total account drawdown at roughly half of any pool drawdown. A −40% pool year is a −20% account year.

**Live stress point, updated:** rule 6a is confirmed 0-for-2 as of Monday's settled close — meaningfully de-risked vs. Friday's 1-for-2 reading, with the next real test not arriving until Warsh's 8/28 Jackson Hole keynote (see below), after tomorrow's earnings window closes. The **NVDA pool-drift trigger's buffer improved to ~0.50pp** and has held there through the full trading day — still the tightest trigger on the book by a wide margin, but no longer the closest-to-firing reading on file (that was Monday's ~0.34pp).

---

## 5. Rebalancing schedule and trigger rules

**Scheduled review:** monthly full-policy re-underwrite (next: 2026-09-01); daily monitor-only via this report.

**Live triggers — status this run:**
1. **5pp single-position pool drift** → mandatory review. NVDA −4.50pp; **no fire — ~0.50pp of headroom, essentially unchanged through today's session, easing rather than closing in.**
2. **NVDA 18–20% of equity** → mandatory trim review. Actual 11.93%; no fire, ample buffer.
3. **NVDA+OMCL 25% of equity** combined → mandatory review. Actual ~19.95% (~5.05pp buffer); no fire, widest buffer reading since adoption.
4. **15% of equity per individual satellite** → OMCL 8.02%, XLE 12.26%; no fire.
5. **Rule 6a rate shock** (10yr >4.75% or 30yr >5.25% on two consecutive closes) → pause new high-multiple adds. **Confirmed 0-for-2** as of Monday's settled close; next checkpoint is Warsh's 8/28 keynote, not tomorrow's earnings print.
6. **10% cash floor (~$5.02)** → actual 11.96%; defend through the 8/26–29 event window; no discretionary position may breach it.

**Design principle, reaffirmed (rule 16):** every trigger expires to **no-action**, never to a purchase. Applies to GEHC (9/10 → lapse) and to the NVDA-target question itself (8/27 → default revision to 11% absent an explicit decision). If the NVDA drift trigger fires before then, the same principle governs the response — a forced review is not a forced trade, per BW's own explicit recommendation not to average down into a binary event with zero hedging capacity.

---

## 6. Tax efficiency strategy (taxable account)

1. **Turnover restraint *is* the tax strategy at this size.** Still nine trades in six-plus weeks; every lot is short-term. Continuing to say no remains the single largest available tax lever.
2. **Long-term-capital-gains clock — nothing is close.** Earliest eligibility: NVDA 2027-07-10, VTI 2027-07-16, OMCL 2027-07-18, XLE 2027-07-29, VXUS 2027-07-31. Any trim before mid-2027 is short-term by construction; when a trim is needed for funding, prefer the highest-cost-basis lot (HIFO).
3. **OMCL is now the only harvestable loss and it still should not be harvested.** The unrealized loss has deepened again to ~−29.1% since cost (state.md, 15:36 ET) — the tax benefit is still cents at this position size, and the cost is closing the book's widest-margin-of-safety position (MS's 8/25 DCF: ~55.6% upside, the widest discount on the sheet and still widening) and triggering a 30-day wash-sale window on exactly the name GS/MS have repeatedly flagged as the highest-EV next-dollar destination. The deepening loss makes this *more* true, not less — a bigger unrealized loss on a name the valuation desk still calls the cheapest thing in the book is a reason to hold, not to lock it in.
4. **VXUS foreign tax credit:** withholding at this size is measured in cents, well under the $300 single-filer de minimis — claimable directly on Schedule 3 without Form 1116. No action needed.
5. **Qualified dividends:** VTI/VXUS both go ex-dividend in late September; avoid discretionary core trims in that window absent a fired trigger, to preserve the >60-day holding-period requirement for qualified treatment.

---

## 7. Dollar-cost-averaging plan for redeploying profits

The book's deployable capital is $50 base **plus accumulated profits only.** Current accumulated profit: **~$0.18** (pool $50.1809 − $50.00 base) — up modestly from ~$0.16 on 8/24, essentially flat.

**Standing DCA rule (unchanged, still not yet triggerable):**
- **Tranche size $2.50.** Profits accumulate un-deployed until cumulative profit reaches **≥$2.50**, then one tranche is released. No partial tranches.
- **Destination: the most-underweight *vetted* sleeve line at release time** — still OMCL (−2.94pp, and the only holding trading below its own DCF fair value, by the widest and still-widening margin on the book, per MS's 8/25 read). NVDA stays excluded as a DCA destination while MS's overvaluation call stands, regardless of its headline gap — and doubly so on the eve of its own binary print.
- **Cadence: at most one tranche per calendar month**, never during an unresolved binary-event window on the destination name.
- **Status: ~$0.18 accumulated — no tranche available. ~$2.32 of further profit required**, essentially unchanged from 8/24's ~$2.34 gap. No action.

---

## 8. Areas to consider — recent WEF / macro-policy discussions

Two genuinely new, dated data points this run, replacing the recycled IMF/WEF stagflation framing carried across the last several reports:

1. **Fed Chair Kevin Warsh's first Jackson Hole keynote is now dated and confirmed: Friday 2026-08-28, 10:00 ET**, symposium theme "Financial Innovation: Implications for Payments and Policy," three weeks ahead of the September FOMC. This is a genuinely two-sided input for rule 6a, not a settled directional call: Warsh has pushed "policy regime reform" and criticized the Fed's 2020 flexible-average-inflation-targeting framework (a hawkish-reading instinct), but has separately argued the AI investment boom itself **could prove disinflationary** (a dovish-reading argument) — and per Benzinga/Regards of Wallstreet, Warsh himself reportedly hasn't decided whether the speech leans "macro big picture" or explicit policy-path guidance. Context sharpening the stakes: the July 29 FOMC hold carried a rare three-way hawkish dissent (Hammack, Kashkari, Logan — the first three-way split since 2016), and markets are pricing roughly 1-in-3 odds of a September hike. **Read for this book:** this lands two days after tomorrow's NVDA/CRWD print, inside the same event window this desk has already told the trader to defend the cash floor through — no change to that instruction, but it sharpens *why* the floor should stay defended past 8/26, not just through it.
2. **A concrete, sourced number for the market-concentration risk rule 9 and the NVDA-target debate have both been citing qualitatively:** the WEF-linked analysis reviewed this run puts the five largest S&P 500 companies at **~30% of the index — a higher concentration than at the dotcom peak.** This is directly relevant to the 8/27 NVDA-target decision from the other direction than this desk's own prior framing (IMF growth downgrade, AI-productivity-timing caution): even VTI, the book's largest single holding at 32.60% of pool, already carries meaningful single-name AI concentration look-through (rule 8) — so trimming the *explicit* NVDA satellite target while the *implicit* concentration inside VTI stays untouched doesn't fully solve the concentration question rule 9 flags, it just moves it off the sleeve this book can see and measure. Not a recommendation to change VTI — a framing point for whoever weighs the 8/27 decision, since a target revision aimed purely at NVDA's headline % is solving only the visible half of the exposure.
3. **On the NVDA-target question itself: this desk is holding to its 8/24 commitment not to re-argue the case again before the scheduled 8/27 decision.** The two points above are additive framing, not a new position.
4. Hormuz remains the named transmission channel behind the OXY veto (rule 3), still unresolved on the actual reopening question as of today's five other analyst reports. No change.

---

## 9. Investment Policy Statement — one page, as of 2026-08-25

**Objective.** Compound a $50 trading pool (inside a ~$100 taxable cash account, ~$50 untouchable reserve) at an aggressive risk tolerance over a short-to-medium horizon, building a durable long-run track record. Equities and ETFs only; no options; fractional shares permitted.

**Strategic allocation (% of pool).** Core 55% — VTI 30%, VXUS 25%. Satellite 35% — NVDA 15% *(under formal review, decision 2026-08-27, default revision to 11%)*, OMCL 10%, XLE 10%. Cash 10%, treated as a hard floor (~$5.02), not a residual.

**Permitted actions.** (1) Trigger fires — execute the pre-committed action. (2) DCA tranche release at ≥$2.50 accumulated profit, vetted destinations only, max one per month. (3) A new position that has cleared full rule-6 cross-vetting (MS DCF + BW risk read) and passes rule-2 entry discipline, funded without breaching the cash floor. **Nothing else.**

**Prohibited.** Adding to a position your own valuation desk calls overvalued. Chasing a move already 3%+ priced in. Opening a single-name position during an active geopolitical shock. Breaching the cash floor for a discretionary entry. Buying because a clock ran out (rule 16). Sizing off any price not live-verified via Robinhood (rule 4). Averaging into a satellite position inside a binary-event window on the strength of a drift-trigger fire alone.

**Review cadence.** Daily monitor via this desk; monthly full re-underwrite (next 2026-09-01); triggers evaluated every scheduled run regardless of news flow (rule 12).

**Expected outcomes.** Return ~11–15% annualized at current weights; bad-year pool drawdown −20% to −28%, severe −32% to −40%, halved at the account level by the reserve.

**Governing principle.** *Every deadline expires to no-action. Every repeated flag converts to a rule or retires. The target you cannot reach under your own rules is not a target — it is an error in the policy, and the policy is what gets corrected.*

---

## Next scheduled BR report
Priorities: (1) tomorrow's NVDA/CRWD after-market print itself, governed by the existing written contingency plans, not a fresh BR call; (2) the 8/27 NVDA-target decision, arriving on schedule — this desk holds its view (see 8/24, 8/21) but will not pre-empt it again; (3) Warsh's 8/28 Jackson Hole keynote and its bearing on rule 6a, now dated and confirmed; (4) GEHC's price gate ahead of the 9/10 lapse, now ~16 days out; (5) whether the NVDA pool-drift trigger's ~0.50pp buffer holds or tightens again once the print's price reaction actually lands.

**Sources:** trading-experiment/state.md (2026-08-25, 15:36 ET Robinhood-verified `get_portfolio` read) · analysts/bw-risk-assessment.md (2026-08-25, ~14:41 ET) · analysts/gs-stock-screener.md (2026-08-25, evening) · analysts/jpm-earnings-analyzer.md (2026-08-25, ~10:15 ET) · analysts/ms-dcf-valuation.md (2026-08-25, ~14:2x ET) · [Fed Chair Warsh Heads to Jackson Hole: What Markets Are Bracing For (Benzinga)](https://www.benzinga.com/markets/macro-economic-events/26/08/61373140/kevin-warsh-heads-to-jackson-hole-what-markets-are-bracing-for) · [Jackson Hole 2026: Dates, Schedule, and Warsh's First Speech as Fed Chair (Regards of Wallstreet)](https://www.regardsofwallstreet.com/news/jackson-hole-2026-dates-schedule-warsh-first-speech) · [Anatomy of an AI reckoning — market concentration (World Economic Forum)](https://www.weforum.org/stories/2026/01/how-would-the-bursting-of-an-ai-bubble-actually-play-out/).
