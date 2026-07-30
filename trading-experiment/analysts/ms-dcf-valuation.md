# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-30 (Thursday, ~10:15 ET) — full post-print rebuild on OMCL, mechanical refresh on the other four holdings**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE — all five current holdings per state.md's 7/30 ~09:37 ET check-in. GS's current #1 pick (analysts/gs-stock-screener.md, 7/30) is still **OMCL**, already in-scope as a holding — no new name to add this cycle. All live holding prices below are the trader's own Robinhood-verified quotes from state.md's 7/30 ~09:37 ET check-in (rule 4: never size off WebSearch for these five names); this desk has no direct Robinhood feed. **This is a full rebuild of OMCL, not a mechanical refresh** — GS's 7/30 report and JPM's 7/30 post-print note both explicitly flagged that a fresh post-print DCF is the single highest-value open item in the book, required before contingency-plan rule 3 ("potential add opportunity") can even be evaluated. That gap is closed in Part 2 below. NVDA/VTI/VXUS see no material new information this cycle and get brief refreshes only; XLE gets a brief mechanical update (oil has settled almost exactly where the 7/29 "Scenario B" reset already modeled it, so no rebuild is needed — see Part 5).*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $191.80 (7/30, ~09:37 ET) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~21.5% downside to DCF fair value.** Narrowed from ~23.4% (7/29) purely on the price pulling back; no fundamental change. |
| **OMCL** *(full rebuild)* | $35.95 (7/30, ~09:37 ET — post-earnings gap-down, -13.16% vs. Wednesday's close) | **~$53.89 (WACC 9%, g 3%), rebuilt off the actual Q2 print and raised FY26 guidance** | **UNDERVALUED — ~49.9% upside to DCF fair value.** Fair value itself was marked down modestly (~4.4%, from $56.35 to $53.89) to reflect the soft Q3 revenue guide's deceleration signal — but the stock fell far faster than the model did, so the discount widened sharply. **No structural thesis break found in the model inputs.** See Part 2 for the full rebuild. |
| **VTI** | $363.25 (7/30, ~09:37 ET) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $83.66 (7/30, ~09:37 ET) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** | $58.525 (7/30, ~09:37 ET) | Base case (composite, GS's unrevised $80 Q4'26 Brent anchor) ≈ **−12.7% overvalued**, essentially flat vs. 7/29's −13.2% | **MODESTLY OVERVALUED, unchanged read.** Brent has settled almost exactly where 7/29's "Scenario B — partial persistence" already modeled it (~$90), so no rebuild needed this cycle — see Part 5. |

**Bottom line for the trader:** This cycle's real work is OMCL. The Q2 print itself was a genuine beat-and-raise on trailing numbers and full-year profitability guidance, undercut by a softer next-quarter revenue guide — the same read GS and JPM already reached this morning. This desk's job was to translate that into an updated cash-flow build rather than restate the narrative, and the answer is: **the model's fair value came down modestly (soft Q3 guide = slower near-term growth), but the stock's ~23.5% cumulative decline from cost is far larger than anything in the actual guidance change justifies, so the DCF discount widened from ~30.7% (7/29, pre-print) to ~49.9% today.** That is a real, model-supported finding — not a reason to add today by itself (this desk doesn't make sizing calls), but it clears this desk's half of contingency-plan rule 3's two-part precondition (MS DCF + BW risk read) for the first time since the print. NVDA and XLE are unchanged in substance; VTI/VXUS remain outside this desk's mandate.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/29
Price pulled back to $191.80 (7/30, ~09:37 ET) from $196.65 (7/29, ~09:36 ET), -2.5%, with no confirmed NVDA-specific catalyst found this cycle — consistent with the broad post-FOMC / still-elevated-rate-odds backdrop (Fed-funds futures ~76% September-hike odds per yesterday's hawkish hold) rather than a company-specific development. No change to revenue, margin, or capex guidance found. No change to WACC or terminal growth.

### Verdict: **OVERVALUED, gap narrowing on the price pullback alone**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $191.80 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~21.5% downside** from $191.80 (23.4% on 7/29 → 21.5% today), a mechanical narrowing on the price move, not a model change. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, custom-silicon competition, and the OpenAI-financing/circularity thread remain the downside breaks). **Hold, no add** — concentration ~12.13% equity/~9.87% pool per state.md's 7/30 09:37 ET check, comfortably below BW/BR's 18-20% trigger.

---

## 2. Omnicell (OMCL) — FULL REBUILD, post-Q2-print

### Why this is a full rebuild, not a refresh
The Q2 2026 print (reported before today's open) is a material new data point — an actual quarter plus an updated full-year guide — not just a price move. GS's 7/30 report and JPM's 7/30 post-print note both explicitly asked for this. This section replaces the prior ($56.35 base case, built off Q1-era guidance) with a build incorporating today's actual results and the raised FY26 guide.

### What actually printed (per JPM's 7/30 note, GS's 7/30 note, and this desk's own fresh WebSearch cross-check)
- **Revenue $312.2M** (+7.4% YoY), beat the ~$310.4M consensus and landed at the high end of Omnicell's own $307-313M guided range — a clean, in-line-to-slightly-ahead quarter on the top line, not a blowout.
- **Non-GAAP EPS $0.94**, more than double the top of the company's own $0.40-0.48 guided range. **Data-quality flag, consistent with JPM's**: a beat of this magnitude relative to guidance is unusual enough that this desk suspects a reporting-basis or one-time-item effect (e.g., tax benefit, share-count/buyback effect) rather than a clean operating surprise, and is **not** using the EPS print directly in this build — the model below is revenue- and margin-driven, per standard DCF practice, so this data-quality question does not flow through to the fair-value estimate.
- **Next-quarter (Q3) revenue guidance: $304M**, ~2.9% below analyst estimates and roughly flat-to-down versus Q2's $312.2M — the actual driver of today's sell-off, and the single most important input change for this rebuild.
- **FY26 guidance raised**: adjusted EPS to **$2.22 midpoint** (+17.1% vs. the prior $1.80-2.00 range set at the Q1 print); full-year revenue guidance not confirmed as re-stated in today's release in this desk's search pass — implied full-year math (Q1 ~$310M actual + Q2 $312.2M actual + Q3 $304M guide + a Q4 plug) is consistent with the prior **$1.215-1.255B** full-year range holding, i.e. **no revenue guidance cut**, just a flatter in-year cadence than the Q1 print implied.
- **FY26 product bookings guide (from the Q1 call, not confirmed updated today): $510-560M; ARR $680-700M** — a forward indicator of demand this desk is treating as unconfirmed-but-unretracted pending the call transcript.
- **Tariff drag**: ~$12M of estimated FY26 tariff-related P&L cost disclosed (context from the Q1-era guide, still relevant) — a real, already-anticipated margin headwind, built into the more conservative margin path below rather than treated as a new negative.
- **Gross margin**: 46% as of Q1 2026, described by management as "slightly higher than typical" — this desk is not assuming further gross-margin expansion beyond this level without confirmation.

### Assessment against the contingency plan's structural-break test
No guidance *cut* (full-year profitability guide raised, not cut), no contract loss, no disclosed margin-deterioration trend in the release (46% gross margin holding, EBITDA guide raised). The soft Q3 revenue guide is a real deceleration signal in near-term cadence, not a confirmed change in the multi-year demand story — consistent with GS's, JPM's, and the trader's own 09:37 ET read this morning. **This desk finds no structural thesis break in the print itself**, and has adjusted the model's near-term growth path down modestly to reflect the softer cadence rather than treating it as noise.

### Revised 5-year build
Diluted shares outstanding: ~45.5M (implied from ~$1.883B market cap ÷ $41.40, 7/29 close — a WebSearch-derived estimate, flagged as approximate). Net cash: $290.97M cash − $202.18M debt = **$88.79M net cash** (per GS's 7/30 balance-sheet line, cross-checked against this desk's prior figure — unchanged).

**Revenue projection** (FY26 anchored to the raised guide; FY27+ assumes the soft Q3 cadence persists into a slower near-term growth path than this desk's pre-print build assumed, before a gradual reacceleration as the ARR/SaaS mix shifts and the cabinet-refresh cycle continues):

| | FY2026E | FY2027E | FY2028E | FY2029E | FY2030E |
|---|---|---|---|---|---|
| Revenue ($M) | $1,235 | $1,284 | $1,348 | $1,429 | $1,500 |
| YoY growth | +4.2% (per guide) | +4.0% | +5.0% | +6.0% | +5.0% |

**Operating/FCF margin path** (FY26 anchored to the raised EBITDA guide of $153-168M ÷ $1,235M midpoint ≈ 12.9%; FCF margin held below EBITDA margin to account for Omnicell's working-capital-intensive consignment/leased-equipment model and the disclosed ~$12M tariff drag, expanding gradually as ARR mix improves):

| | FY2026E | FY2027E | FY2028E | FY2029E | FY2030E |
|---|---|---|---|---|---|
| FCF margin | 9.0% | 9.5% | 10.0% | 10.5% | 11.0% |
| FCF ($M) | $111 | $122 | $135 | $150 | $165 |

### Sensitivity table — fair value per share (rebuilt)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $66.84 | $80.67 | $103.73 |
| 8% | $55.72 | $64.59 | $77.93 |
| **9% (base)** | $47.77 | **$53.89** | $62.45 |
| 10% | $41.83 | $46.25 | $52.14 |
| 11% | $37.21 | $40.53 | $44.79 |

(WACC 9% base — unchanged discount rate assumption, consistent with prior cycles for this healthcare-IT mid-cap; terminal growth 3% base.)

### DCF vs. market price
Base case ($53.89) implies **~49.9% upside** from the $35.95 live price. This is the widest margin of safety this desk has recorded on OMCL since opening coverage — wider than the ~30.7% recorded pre-print (7/29) even though the fair-value estimate itself came *down* ~4.4% (from $56.35 to $53.89) on the softer near-term growth path. The entire widening is a function of the stock falling roughly 5x faster than the model's own downward revision — exactly the kind of gap this desk's mandate exists to flag.

### Verdict: **UNDERVALUED — clears this desk's half of contingency-plan rule 3's precondition, does not by itself constitute a buy call**
This desk's job is valuation, not sizing. What this rebuild establishes: (1) the print does not support a structural-break narrative — full-year profitability guidance went up, not down; (2) the model's own fair value estimate came down modestly on the softer Q3 cadence, which this desk considers the correct, disciplined response to genuinely new information, not capitulation to the sell-off; (3) even after that markdown, today's price implies the market is pricing in something considerably more bearish than "one soft quarter inside a raised full-year guide" — either a further deceleration this desk's build doesn't yet capture, thin-liquidity/momentum overshoot, or a straightforward overreaction. This desk cannot distinguish between those from the release alone. **Recommendation to the desk**: this DCF is now current and clears one of contingency-plan rule 3's two required inputs; BW's post-print risk re-check is the other, and per rule 3 sizing should wait for both, plus the trader's own entry-discipline check (rule 2) against whatever price OMCL is trading at when BW's read lands.

### Key assumptions that could break this model
- **Upside break**: the Q3 $304M guide proves conservative (as it has in 3 of the last 4 quarters per JPM's pattern table) and FY27+ growth tracks closer to 7-9% than the 4-6% assumed above, consistent with the FY26 bookings guide ($510-560M) and ARR guide ($680-700M) holding — plausibly pushes fair value back toward the pre-print $56-60+ range or higher.
- **Downside break**: the soft Q3 guide reflects a genuine demand slowdown (hospital capex pullback, competitive pricing pressure in cabinet/robotics) rather than conservatism — in which case this desk's FY27+ growth assumptions (4-6%) would need to come down further, compressing fair value toward or below the current price. The Q4 2025 precedent (a clean miss that drove -15%, with real EBITDA compression) is the pattern to watch for if this proves out over the next 1-2 quarters.
- **Data-quality flag carried forward**: the EPS-vs-guidance reconciliation gap (>2x the guided range) is unresolved and this desk has deliberately not built it into the model; if the call transcript reveals it as a one-time item (tax, divestiture, buyback-driven), no model change is needed — if it reflects a genuine, repeatable operating improvement, this desk would need to revisit the margin path upward on the next cycle.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($363.25, 7/30 ~09:37 ET) up ~0.79% — broad-market participation in a calmer session, doing what it's supposed to do while OMCL absorbs its own idiosyncratic print. No view offered on adding to or trimming — that's BR's lane, not a DCF call.

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($83.66, 7/30 ~09:37 ET) up ~1.54%. No DCF-based case to add or trim.

---

## 5. Energy Select Sector SPDR (XLE) — brief mechanical update, no rebuild needed

### Why this is a refresh, not another full re-read
Yesterday's (7/29) memo built a three-scenario framework explicitly because the Iran/US escalation made a single point estimate irresponsible. Today's fresh data shows Brent has settled almost exactly inside that framework's **Scenario B ("partial persistence," ~$90 avg)** — WebSearch confirms Brent at ~$90.04 today (having spiked intraday to ~$92.65 on a fresh round of US strikes on Iran, then eased back), squarely inside the range this desk already modeled yesterday rather than a fresh escalation requiring a new scenario. No rebuild needed; a mechanical spot-price update to the officially-anchored Scenario A base case (the only cell resting on a dated, confirmed house forecast) is sufficient this cycle.

### Spot refresh
- **XOM**: WebSearch this run returned a data-quality problem worse than the recurring pattern already flagged for three straight cycles — one source cited $171.47 (intraday, +2.39%), directly inconsistent with yesterday's $155.10 read and with a same-day-dated second source describing XOM in the mid-$150s. A ~10% single-session jump of that size, with no confirmed news to justify it and inconsistent with XOM's own established pattern of lagging Brent moves, reads as unreliable data rather than a real move. **This desk is holding XOM's spot price flat at $155.10 (7/29's cross-checked figure)** pending Friday's 7/31 earnings print, which will replace all of this cycle's noisy estimates with an actual reported figure.
- **CVX**: WebSearch this run returned $191.60 (day range $190.48-193.53), reasonably consistent with yesterday's $193.70 estimate and Tuesday's $191.86 close — **used as-is**, a modest ~1.1% pullback from yesterday's estimate.

FCF-per-share paths for both names unchanged from 7/29 (Scenario A, GS's $80 Q4'26 Brent anchor, unrevised):

**XOM** base case $118.63 vs. spot $155.10 (held flat) → **~23.5% downside**, unchanged from 7/29.
**CVX** base case $195.93 vs. spot $191.60 → **~2.3% upside**, up modestly from 7/29's ~1.1% on CVX's own small pullback.

### Blended read-through to XLE
Weighting unchanged (58.1% XOM / 41.9% CVX of the modeled ~35% subset):

| | XOM gap | CVX gap | Blended XLE gap |
|---|---|---|---|
| 7/29 | −23.5% | +1.1% | ≈ **−13.2%** |
| 7/30 (today) | −23.5% (held flat) | +2.3% | ≈ **−12.7%** |

### Verdict: **MODESTLY OVERVALUED, essentially unchanged (−12.7% vs. −13.2% yesterday)**
The move is well inside noise and driven entirely by CVX's own small pullback, not a fundamental reassessment. GS's 7/30 note flags genuinely tightening physical-market signals (largest crude-inventory draw since mid-June, SPR at a 43-year low) as a fundamental tailwind for the hedge thesis — this desk agrees that's incrementally supportive of Scenario B/C over Scenario A, but it does not change today's officially-anchored number, since GS's own house Brent forecast ($80 Q4'26) remains unrevised. **No trim, no add.** XOM and CVX both report tomorrow, Friday 7/31 — the cleanest resolution point for this section's noisiest inputs, and this desk will rebuild fully off actual reported guidance rather than estimates once those prints land.

### Key assumptions that could break this model (unchanged from 7/29)
- **Upside break**: Scenario C materializes — a further escalation or the Houthi/Red Sea front reactivating, pushing Brent structurally toward GS's own conditional $100-120+ band.
- **Downside break**: today's elevated level fades as the 7/23 and prior episodic spikes did — GS's unrevised $80 forecast would then be vindicated.
- **Resolution point**: XOM and CVX both report Q2 2026 results tomorrow, 7/31 — actuals will replace this section's estimates on the next cycle.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-30)
GS's headline this cycle is exactly the gap this memo closes: "MS and BW are both still pre-print... a fresh post-print MS DCF is the explicit precondition contingency-plan rule 3 sets before OMCL can be sized as an add, and it doesn't exist yet." **This memo is that DCF.** GS's own OMCL table (post-print, Robinhood-verified $35.95) is consistent with this desk's build in every particular this desk can cross-check — no guidance cut, no contract loss, no margin/bookings-deterioration trend identified by either desk, FY26 EPS guidance raised. GS's XLE section flags the same tightening-physical-market signals (SPR at a 43-year low, inventory draws) this desk weighed above; no disagreement. GEHC, OXY, MU, CRWD, and the rest of GS's list remain outside this cycle's mandate (current holdings + GS's #1 pick only, and GS's #1 remains OMCL, an existing holding) per state.md's Strategy & theories rule 10 scope boundary — not fresh non-delivery, a standing and acknowledged limit on this desk's coverage.

## Explicit read on trader's current positions (all five: NVDA, OMCL, VTI, VXUS, XLE)
**NVDA**: hold, no add — DCF does not support adding at $191.80 (~21.5% downside to base case); no confirmed fundamental catalyst behind today's pullback.
**OMCL**: hold, no add from this desk's chair (sizing isn't this desk's call) — DCF discount has widened to ~49.9% on a print this desk finds does not contain a structural thesis break, but contingency-plan rule 3 still requires BW's post-print risk read before either desk's input can support a sizing decision. This memo satisfies the MS half of that precondition as of today.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve buys, not DCF calls; both green today, doing their job as the least-affected sleeves of the book on a day when a single holding (OMCL) is absorbing an idiosyncratic shock.
**XLE**: hold, no trim, no add. Base case reads ~12.7% overvalued, essentially unchanged from 7/29 — Brent has settled inside the range this desk already modeled yesterday, not moved to a new regime. XOM/CVX both report tomorrow (7/31), the next real evidence point for this section.
