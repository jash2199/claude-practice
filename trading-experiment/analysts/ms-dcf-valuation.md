# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-29 (Wednesday, ~14:30 ET, first update since 7/28 ~10:13 ET)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE — all five current holdings per state.md's 7/29 ~09:36 ET check-in (XLE is now itself a live holding, so it doubles as GS's current #1 pick — analysts/gs-stock-screener.md, 2026-07-29 14:00 ET report, still ranks OMCL #1 / XLE #2, both already in-scope as holdings). Live holding prices for NVDA/OMCL/VTI/VXUS/XLE below are the trader's own Robinhood-verified quotes from state.md's 7/29 ~09:36 ET check-in (rule 4: never size off WebSearch for these five names) — this desk has no direct Robinhood feed and flags that these prints are now several hours stale relative to the 14:00 ET GS report and this desk's own afternoon research, since both today's FOMC decision (2pm ET) and the overnight Iran escalation continued to develop after 09:36. XOM/CVX/oil prices are WebSearch-sourced, explicitly flagged, with real cross-source noise this cycle (detailed below). **This is a full re-read of XLE, not a mechanical refresh** — GS's 14:00 ET report explicitly asked this desk to revisit the composite model because its core assumption (a holding de-escalation) reversed overnight in the more severe direction; this memo answers that directly with a scenario framework rather than a single point estimate.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $196.65 (7/29, ~09:36 ET trader-recorded live quote) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~23.4% downside to DCF fair value.** Widened marginally from 22.5% (7/28) on a small price bounce; no NVDA-specific fundamental catalyst found this cycle. |
| **OMCL** | $43.12 (7/29, ~09:36 ET trader-recorded live quote) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **UNDERVALUED — ~30.7% upside to DCF fair value**, narrowed from 32.8% (7/28) on a further pullback-recovery. Still no buy signal — print is 1 day out (tomorrow, 7/30, before the open). |
| **VTI** | $365.561 (7/29, ~09:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $82.98 (7/29, ~09:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** *(full re-read, assumption reset)* | $59.16 (7/29, ~09:36 ET Robinhood live check — likely stale given the escalation continued after this print; live price is almost certainly higher this afternoon) | **Base case ~$127 (composite, GS's unrevised $80 Q4'26 Brent anchor) → ~13.2% overvalued. But the range now spans −13.2% to +8.5% depending on one binary question: does today's escalation prove transient or structural?** See scenario table below. | **MODESTLY OVERVALUED at the officially-unrevised base case, gap widening slightly (~13.2% vs. ~12.1% on 7/28) — but this desk is flagging explicitly that the base case itself is now the least likely single outcome, not the most likely one, for the first time since this model was built.** Hold, no trim, no add — see Part 5 for the full reasoning. |

**Bottom line for the trader:** NVDA and OMCL are again simple mechanical updates — no new company-specific catalyst on either name; today's genuinely eventful macro session (a direct Iran attack on US forces, a hawkish FOMC hold, Fed-funds futures now pricing ~76% odds of a September hike) is a sentiment/rate backdrop, not a DCF input, for both. **XLE is the real work this cycle, and it is not a repeat of the last two cycles' "narrowing gap" finding.** A confirmed Iranian missile strike on US forces overnight (intercepted; no casualties reported) pushed Brent to ~$89.52 (+6.5% intraday, per CNBC), the sharpest single-day move since the original Hormuz shock weeks ago — a materially more severe development than the incremental tension headlines this desk has been re-running through the same model for a week. **Critically, this desk verified directly that Goldman Sachs' own official Q4'26 Brent forecast is still $80, reconfirmed unrevised as of this week** — meaning the anchor this model has trusted throughout the "narrowing" trend has not moved, and holding the FCF path fixed to it (as this desk has done for three straight cycles) produces a base case that is modestly wider, not narrower, at ~13.2% overvalued (XOM's share price barely moved despite the oil spike, while CVX's price gain compressed its upside to near-zero). **But this desk is not comfortable presenting that single number as "the" answer this cycle**, because GS's own published forecast note (independently verified via WebSearch, not from GS's screener report) explicitly conditions a much higher path — Brent above $120 in Q4'26 — on exactly the scenario now partially in play: a Strait of Hormuz disruption that persists through year-end. A direct state-on-state missile exchange is a materially different starting point for that conditional than the shipping-lane friction GS was pricing when it last set $80. **This memo therefore presents three scenarios rather than one point estimate** — see Part 5. XOM and CVX both report Friday 7/31, two days out, which remains the cleanest resolution point for the noisiest inputs in this build.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/28
Price ticked up modestly to $196.65 (7/29, ~09:36 ET) from $194.27 (7/28 same-time check), +1.2%, continuing the "NVDA decoupled from the Asia memory/storage crash" pattern this book has now tracked for a full week (SK Hynix, Samsung, Micron, SanDisk all down double digits from their June peaks; NVDA essentially flat-to-up over the same window). No confirmed change to NVDA's own revenue, margin, or capex guidance found this cycle. **New context, not a model input**: today's hawkish FOMC hold (rates held at 3.50-3.75% for a fifth straight meeting, but Chair Warsh gave no forward guidance and internal dissent ran hawkish on Iran-driven energy inflation, pushing September-hike odds to ~76%) is a incremental headwind for long-duration growth-stock multiples generally — this desk notes it as a sentiment/discount-rate backdrop worth watching, not a DCF input; NVDA's WACC has not been revised on the strength of a single day's rate-odds repricing.

### Verdict: **OVERVALUED, gap widening marginally on a small price bounce**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $196.65 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~23.4% downside** from $196.65 (27.5% on 7/24 → 26.8% on 7/27 → 22.5% on 7/28 → 23.4% today) — a small reversal of the multi-day narrowing trend, driven entirely by the price bounce, not a model change. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, custom-silicon competition, and the OpenAI-financing/circularity thread remain the downside breaks). **Still hold-for-other-reasons, not an add, not a trim** — concentration ~12.13% equity/~9.91% pool per state.md's 7/29 09:36 ET check, comfortably below BW/BR's 18-20% trigger.

---

## 2. Omnicell (OMCL) — brief update, model unchanged, one day to the print

### What changed since 7/28
Price extended its recovery to $43.12 (7/29, ~09:36 ET), +0.16% vs. Tuesday's close, on no identifiable company-specific news for a seventh+ straight cycle. **Q2 2026 results now confirmed for tomorrow, Thursday July 30, before the open (call 8:30am ET) — 1 day out.** No fresh catalyst found this run beyond the already-known print logistics; the OMCL contingency plan (state.md, written 7/21) governs unchanged: rule 4 explicitly bars any same-tick decision on the print itself, deferring to the next scheduled run after it lands.

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~30.7% upside** from the $43.12 live price — narrower than 7/28's ~32.8% purely on the stock's continued recovery, unchanged model.

### Verdict: **UNDERVALUED, still no buy signal — print is tomorrow**
Same framing as the last seven cycles: a discount narrowing on pure price drift is not a valuation signal either way. No guidance cut, no contract loss, no margin/bookings deterioration found by this desk or any other desk this cycle. Consensus into tomorrow's print: EPS $0.48 (+6.7% YoY), revenue $309.6M (+6.6% YoY); OMCL has beaten on 3 of the last 4 quarters (avg surprise +34.65%) but the bar is real. **One day to the print** — this is now purely JPM's/the contingency plan's lane, not this desk's.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~6.6%, with margin expansion continuing at the Q1 rate.
- **Downside break**: JPM's -20%/+15% 7/30 tail remains the dominant near-term risk — a tighter-than-usual beat bar this quarter raises the odds of a "beat but sell off anyway" outcome (already seen once this week in a different name — GEHC broke that pattern in the other direction this morning, a reminder the pattern can and does flip either way).

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($365.561, 7/29 ~09:36 ET) down ~0.12% vs. Tuesday's close, essentially flat into today's dual live catalysts (FOMC, overnight Iran escalation) — broad-market diversification doing what it's supposed to do on a day when a single-sector/single-region shock could otherwise dominate. No view offered on adding to or trimming — that's BR's lane, not a DCF call.

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($82.98, 7/29 ~09:36 ET) down ~0.32% vs. Tuesday's close. No DCF-based case to add or trim.

---

## 5. Energy Select Sector SPDR (XLE) — full re-read, base assumption reset by a genuine escalation

### Why this is a full re-read, not another mechanical refresh
GS's 14:00 ET report (read in full before drafting this section) directly asked this desk to revisit the composite model because its central input — a holding US-Iran de-escalation — reversed overnight, in the more severe direction: Iran launched ballistic missiles at US forces (intercepted; no reported casualties), Trump vowed to "hit Iran hard," and Brent spiked ~6.5% intraday to ~$89.52 (CNBC), a sharper single-session move than any of the incremental tension headlines this desk has re-run the same held-flat model against for the past week. This desk agrees the ask is correct: mechanically repeating "gap narrowed again" for a third straight cycle, against a qualitatively more severe input, would be exactly the kind of complacent restatement rule 10 (state.md) was written to prevent.

**Data-quality catch worth logging**: an initial WebSearch this run also returned a "Brent crosses $100" headline; on closer inspection that figure traces to the *July 23* Houthi-tanker-attack spike (a distinct, earlier episode, since partly unwound by the 7/25-27 de-escalation this desk tracked), not today's print. This is the same class of stale/wrong-vintage web data this desk has flagged repeatedly for OMCL's price and the EIA's STEO figure — logged and discarded, not adopted. Today's correct, CNBC-dated figure is ~$89.52, consistent with GS's own 14:00 ET characterization ("high-$80s to $90 range").

### The dominant assumption, and why a single point estimate is the wrong tool this cycle
This desk independently verified (WebSearch, not sourced from GS's report) that **Goldman Sachs' own official Q4'26 Brent forecast is $80, reconfirmed unrevised this week** — the same anchor this model has held flat for three straight cycles while spot moved around it. Mechanically, that means the base case is unchanged in method: hold the FCF-per-share path to the $80 anchor, let only spot equity prices move the gap. But GS's own published note (not its screener commentary — its actual house forecast writeup) explicitly conditions a much higher path on a specific trigger: **if the Strait of Hormuz remains significantly disrupted through 2027, GS's own Q4'26 Brent view rises above $120, with a further ~$25 on top if disruption spreads to the Bab-al-Mandab/Suez corridor as well.** A direct missile exchange between Iran and US forces is a materially different starting point for that conditional than the shipping-lane friction and diplomatic-pause headlines GS was pricing when it last reconfirmed $80. This desk cannot responsibly present "$80 holds, nothing changed" as the single answer when the forecast-issuer's own framework says the trigger for a much higher path may now be live. **Three scenarios, not one:**

| Scenario | Brent path assumption | Basis |
|---|---|---|
| **A — Base (GS's official, unrevised)** | Reverts to ~$80 by Q4'26 | GS's own house forecast, reconfirmed this week despite today's spike — today's move read as another episodic spike, not a regime change |
| **B — Partial persistence** | Averages ~$90 through Q4'26 | Illustrative midpoint: today's escalation doesn't fully resolve but doesn't become the full Hormuz-closure scenario either |
| **C — Structural disruption (GS's own conditional case)** | Averages ~$100+ through Q4'26 | GS's own published trigger for a $120+ Q4'26 print — a sustained Hormuz disruption; using the conservative low end of that band rather than GS's full $120 tail figure |

### 5a. ExxonMobil (XOM) — spot refresh, base model held, stress-scenario overlay added

**Data-quality flag, still unresolved**: fresh WebSearch again returned inconsistent context (a same-day figure describing XOM as *down* on "falling oil," directly contradicted by a second, more specific source citing XOM +2%+ intraday on the same day's oil spike — the two cannot both be describing today accurately). This desk is using the more specific, directly-dated intraday-range source: **XOM $155.10** (day range $151.88-$156.18), treated as the best-available live read, with the same "hold the noisiest inputs flat, resolve on Friday's print" discipline applied to the conflicting narrative as to the EPS spread itself.

5-year FCF-per-share path (unchanged from 7/28, Scenario A): **$8.50 → $7.00 → $6.10 → $6.20 → $6.35**

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $122.76 | $147.43 | $188.58 |
| 7.0% | $111.87 | $131.43 | $162.21 |
| **7.5% (base)** | $102.79 | **$118.63** | $142.49 |
| 8.0% | $95.09 | $108.15 | $127.03 |
| 8.5% | $88.49 | $99.42 | $114.72 |

Scenario A base case ($118.63, unchanged) vs. spot **$155.10** implies **~23.5% downside** — essentially flat vs. 7/28's ~23.2% (XOM's share price barely moved despite the oil spike — the same tape-vs-crude divergence flagged for two straight cycles, now a third). **XOM reports Q2 2026 results Friday 7/31, two days out.**

### 5b. Chevron (CVX) — spot refresh, base model held, stress-scenario overlay added

Same data-quality caveat applies with undiminished force this cycle: sourcing on today's specific CVX move ranged from "+1.7%" to "+2%+" across outlets, none dated precisely enough to pin down a clean intraday print, and one recycled a stale "-3% Monday" figure. This desk estimates **CVX ~$193.70** (7/28's $189.92 WebSearched close +~2%, the most consistent single figure across sources), flagged explicitly as directional, not precise. FCF-per-share path held unchanged from 7/28, Scenario A: **$14.19 → $13.31 → $11.03 → $11.24 → $11.55**. CVX also reports Q2 2026 **Friday 7/31**.

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $222.50 | $267.33 | $342.09 |
| 7.0% | $202.65 | $238.35 | $294.21 |
| 7.5% | $186.17 | $215.04 | $258.30 |
| **8.0% (base)** | $172.20 | **$195.93** | $230.27 |
| 8.5% | $160.23 | $180.08 | $207.80 |

Scenario A base case ($195.93, unchanged) vs. spot **~$193.70** implies **~1.1% upside** — a sharp compression from 7/28's ~3.2% upside, purely because CVX's own price gained faster than XOM's today while the fair value held fixed.

### 5c. Blended read-through to XLE — three scenarios

Weighting by fund weight (58.1% XOM / 41.9% CVX of the modeled ~35% subset, unchanged):

| Scenario | XOM gap | CVX gap | Blended XLE gap | Read |
|---|---|---|---|---|
| **A — Base (GS's official $80 anchor)** | −23.5% | +1.1% | **≈ −13.2%** | Modestly overvalued — the base case, and still this desk's officially-held number, since it's the only one anchored to a verified, dated house forecast rather than an illustrative assumption |
| **B — Partial persistence (~$90 avg)** | −13.9%* | +13.8%* | **≈ −2.3%*** | Roughly fairly valued |
| **C — Structural disruption (~$100+ avg, GS's own conditional trigger)** | −4.4%* | +26.4%* | **≈ +8.5%*** | Undervalued |

*Scenarios B and C are **illustrative, proportionally-scaled approximations** (FCF-per-share path scaled by the ratio of the scenario's Brent assumption to the $80 base anchor — a simplification appropriate for upstream-heavy integrated majors where incremental oil revenue drops largely through to FCF, but not a rebuilt line-by-line model). Treat the direction and rough magnitude as informative; do not treat the individual dollar figures with the same confidence as Scenario A's grid.

### The tape-vs-model divergence, now a three-cycle pattern
For a third straight cycle, XLE and its two modeled constituents are not moving in lockstep with crude: Brent spiked ~6.5% today, yet this desk's two best available reads on XOM/CVX show one essentially flat (XOM) and one up but only modestly (CVX, ~+2%) — nothing close to a 6%+ single-day re-rating. This is consistent with, not contradictory to, this desk's Scenario A framing (the market may itself be pricing something closer to Scenario A — an episodic spike, not a regime shift — which is exactly why GS hasn't moved its own $80 forecast either). The tape and the base-case model are, for once, roughly telling the same story; it's the *tail* that has widened, not the center.

### Verdict: **MODESTLY OVERVALUED at the base case (~13.2%, wider than 7/28's ~12.1%) — but this desk is explicitly flagging the base case as no longer the most decision-relevant number on its own**
Three straight cycles of "gap narrowing" ended today, mechanically, on a price move (CVX's own gain) rather than a fundamental reassessment. That's a real but modest finding — not the "bear case materializing" scenario GS/BW have flagged, which would require the gap to widen sharply, not by ~1 point. **The more important finding this cycle is the widening of the plausible range itself**: this desk's own downside-break note (7/28) explicitly named "the Red Sea/Houthi front escalates independently of the US-Iran pause, or the US-Iran pause itself breaks down" as the trigger that would reopen the overvaluation question — and today, the second of those two conditions occurred directly (a state-on-state missile exchange, not a proxy skirmish). **Recommendation**: (1) continue holding the officially-verified $80-anchor base case (~13.2% overvalued) as this desk's standing number — it is still the only one resting on a dated, confirmed house forecast rather than an assumption; (2) do not treat this as a trim signal — a ~13% overvaluation on an existing half-size position that cleared cross-vetting at a similar gap 24 hours ago is not a fresh sell case, and rule 5's "hard pass" threshold (the MU standard, ~70%+ overvalued) is nowhere close; (3) do not treat any further price move as automatically confirming either direction — the correct next data point is whether Friday's XOM/CVX prints (two days out) hold guidance or flag Hormuz-related operational impact, which would be the first hard evidence this desk has seen either way; (4) BW should weigh Scenario C explicitly in any fresh risk grade this cycle — an ~8.5%-undervalued tail case sitting alongside a ~13%-overvalued base case is a wider bracket than this book's energy hedge has carried since entry, worth having on record regardless of which way it resolves.

### Key assumptions that could break this model
- **Upside break (i.e., XLE re-rates higher)**: Scenario C materializes — the Iran/US exchange escalates further, or the Houthi/Red Sea front reactivates independently (still unresolved per state.md's standing caution), pushing Brent structurally toward GS's own conditional $100-120+ band.
- **Downside break (i.e., XLE re-rates lower / base case proves generous)**: today's spike fades within days, as the 7/23 Houthi-tanker episode did — GS's unrevised $80 forecast would then be vindicated, and Scenario A remains the operative read.
- **Data-quality caveat, restated a fourth time, now compounding**: this cycle's XOM/CVX intraday-move sourcing was directly contradictory across outlets (one claiming XOM down on "falling oil" the same day Brent spiked 6.5%), on top of the already-flagged EPS cross-source spreads. Treat every dollar figure in this section as directional only until Friday's prints (XOM and CVX both report 7/31) replace estimates with actuals — this is now the least reliable build on this desk's coverage list, by a wide margin.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-29 ~14:00 ET)
GS's headline this cycle is the same escalation this desk is responding to, and GS explicitly asked for this re-read rather than assuming the 7/28 "gap narrowing" finding still held. **This desk's answer**: the officially-anchored base case did move, but only modestly (−12.1% → −13.2%), not the sharp widening GS's own risk framing worried about — the real story is that the *range* of plausible outcomes has widened much more than the point estimate has moved, which this desk believes is the more useful thing for GS and BW to have on record than a single restated percentage. GS's OMCL read (still #1, hold through tomorrow's print) matches this desk's own unchanged view exactly. GS also flagged GEHC (not a holding) as newly cross-vettable after today's clean beat-and-raise — outside this cycle's mandate (current holdings + GS's #1 pick only, and GS's #1 remains OMCL, an existing holding), but worth this desk's attention next cycle if GS keeps it high-ranked. **OXY and MU remain outside this cycle's mandate** (current holdings + GS's #1 pick only) — per state.md's Strategy & theories rule 10, a standing, acknowledged scope boundary, not fresh non-delivery.

## Explicit read on trader's current positions (all five: NVDA, OMCL, VTI, VXUS, XLE)
**NVDA**: hold, no add — DCF does not support adding at $196.65 (~23.4% downside to base case); no confirmed fundamental catalyst behind today's modest move, sentiment/rate backdrop only.
**OMCL**: hold, no add, discount narrowed to ~30.7% but still not a pre-print buy signal — **1 day to the print**, the contingency plan's rule 4 (no same-tick decisions) governs from here.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve buys, not DCF calls; both essentially flat today, doing their job as the least-affected sleeves of the book on a genuinely eventful macro day.
**XLE**: hold, no trim, no add. Base case (the only officially-anchored number) reads ~13.2% overvalued, modestly wider than 7/28's ~12.1% — a real but small move, not the sharp "bear case materializing" scenario this desk and GS have watched for. The more important finding is that today's escalation (a direct Iran-US military exchange) is qualitatively the kind of event this desk's own 7/28 downside-break note said would reopen the question, and a fair, honest re-read now shows a plausible range from ~13% overvalued (if today proves episodic, GS's own still-unrevised view) to ~8.5% undervalued (if it proves structural, GS's own conditional trigger). This desk recommends the trader/BW treat Friday's 7/31 XOM/CVX prints — two days out — as the next real evidence point, and treat any further price-only move on XLE between now and then as noise until then, consistent with rule 2 (don't chase, don't panic on price alone).
