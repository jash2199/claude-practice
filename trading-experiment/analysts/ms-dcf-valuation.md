# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-28 (Tuesday, ~10:13 ET, first update since 7/27 ~10:35 ET)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS — all four current holdings per state.md's 7/28 ~09:37 ET check-in — plus (5) **XLE**, GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-28 ~10:15 ET report — still #1, unchanged rank). Live holding prices below are the trader's own Robinhood-verified quotes from state.md's 7/28 ~09:37 ET check-in (rule 4: never size off WebSearch for these four names). XOM/CVX/XLE-as-non-holding prices are WebSearch-sourced, flagged explicitly. **This is another fresh XLE re-read, not a mechanical refresh** — both state.md's 7/28 run notes and GS's 7/28 report explicitly repeat the standing ask for a same-day oil-adjusted DCF before treating XLE's closest-yet zone approach ($58.42, $0.42 above the $58 top edge) as anything but a price-discipline question.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $194.27 (7/28, ~09:37 ET trader-recorded live quote) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~22.5% downside to DCF fair value.** Narrowed further from 26.8% (7/27) purely on the chip-rout price decline; no model change, no NVDA-specific fundamental catalyst found this cycle. |
| **OMCL** | $42.42 (7/28, ~09:37 ET trader-recorded live quote) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **UNDERVALUED — ~32.8% upside to DCF fair value**, narrowed modestly from 34.4% (7/27) on a small pullback. Still no buy signal — print is 2 days out. |
| **VTI** | $364.75 (7/28, ~09:37 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $82.7735 (7/28, ~09:37 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** *(fresh oil-adjusted re-read, second in two cycles)* | $58.42 (7/28, ~09:37 ET Robinhood live check per state.md — closest-yet read to the $55-58 zone, $0.42 above the top edge) | ~$126-131 implied on the modeled XOM/CVX subset (composite base case, see Part 5) | **STILL MODESTLY OVERVALUED at base case, gap ~12.1%** — essentially flat-to-slightly-narrower vs. 7/27's ~13.8% (within this build's own noise band), **not** the reopening/widening BW and GS both explicitly flagged as the risk to watch for. |

**Bottom line for the trader:** NVDA and OMCL are again simple mechanical updates — no new company-specific catalyst on either name, gaps moved only with price (both narrower, since both stocks fell/rose toward this desk's fair values). **XLE is again the story, and again the finding is counterintuitive relative to the surface narrative.** Brent extended its slide overnight/this morning to ~$86.58-89 (from $90.28 Monday) — on its face, a continuation of the "fast de-escalation" pattern that this desk's own 7/24 downside-break note said should widen the overvaluation gap. But the reference band this desk anchors to **did not move down in lockstep**: GS's own Q4'26 Brent forecast is confirmed **unchanged at $80** (maintained 7/23, re-verified today), and a fresh JPMorgan pull shows Q3'26 $86 / Q4'26 $80 / year-end $78 — both houses sitting close together in the high-$70s/low-$80s, not falling with spot. The one outlier is the EIA, whose July STEO now shows a Q4'26 figure of just **$70** (full-year 2026 average $81.91, cut sharply from June's $95.39) — a genuinely lower number, but one this desk is **not adopting at face value**, for the same reason it hasn't adopted single-source XOM/CVX EPS swings all cycle: the $89 EIA figure this desk cited just one cycle ago (7/27) and today's $70 figure cannot both be describing the same forecast vintage without an intervening revision this desk cannot find evidence of in a fresh search — treated as a data-quality/vintage flag, not a clean signal, pending Friday's XOM/CVX prints. **Net effect: holding the terminal path at 7/27's already-adjusted level (unchanged GS anchor, the one clean apples-to-apples data point) and re-running only the spot inputs, the composite gap is essentially flat (~12.1% vs ~13.8%) — modestly narrower again, continuing, not reversing, the two-cycle trend.** XOM and CVX shares themselves fell today (XOM -1.6% to $154.42, CVX -2.5% to ~$189.92) tracking the oil slide directly, while XLE the basket barely moved ($58.36 → $58.42, +0.1%) — the same tape-vs-single-name divergence flagged last cycle, now persisting into a second session. **Recommendation unchanged: this is a closer call than ever on pure price (XLE now only $0.42 from the zone), but the fresh DCF still does not clear a "fire" signal on valuation grounds alone, and Friday's 7/31 prints remain the right point to stop treating the Y1 inputs as estimates.**

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/27
Price fell hard again: from $205.629 (7/27 pre-open) through Monday's -4.99% close at $196.51 to $194.27 live this morning — a cumulative ~5.5% decline since Friday, now this book's lowest NVDA print since well before this position's entry ramp. Fresh WebSearch this morning confirms the move is **sector-wide, not NVDA-specific**: the Asian chip complex sold off hard overnight (Samsung -7%+, SK Hynix -9%+), and the read-through cited across sources is a broad rotation away from high-beta AI/semiconductor names on rising Treasury yields compressing growth-stock multiples, plus lingering "circular AI financing" sentiment (the OpenAI/Ohio financing-guarantee story, now compounding with Meta's AI-capacity-monetization commentary per GS's 7/28 report) — **no confirmed change to NVDA's own revenue, margin, or capex guidance**. This desk's read is unchanged from 7/27: a sentiment/multiple-compression move, not a fundamentals move, is not a DCF input.

### Verdict: **OVERVALUED, gap narrowing mechanically as price falls toward fair value**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $194.27 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~22.5% downside** from $194.27 (27.5% on 7/24 → 26.8% on 7/27 morning → 22.5% today) — the fastest single-cycle narrowing of this run, driven entirely by the chip-sector rout, not a model change. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, custom-silicon competition, and the OpenAI-financing/circularity thread are the downside breaks — the last one now a live, broadening market narrative rather than a single-name worry, worth tracking for an actual fundamental read-through, not yet found). **Still hold-for-other-reasons, not an add, not a trim** — concentration ~13.81% equity/~9.86% pool per state.md's 7/28 09:37 ET check, comfortably below BW/BR's 18-20% trigger and still shrinking mechanically on price weakness (BW's standing caution: this is drift-driven de-risking on paper, not a substantive concentration decision).

---

## 2. Omnicell (OMCL) — brief update, model unchanged, discount narrowing into the print

### What changed since 7/27
Price extended its bounce to $42.42 (7/28, ~09:37 ET), +2.24% vs. Monday's close and the best level in over a week, on no identifiable company-specific news for a sixth+ straight cycle. Q2 2026 results remain confirmed for **Thursday, July 30, before the open** (call at 8:30am ET) — now **2 days out**. JPM's fresh 7/28 (~09:17 ET) report (per state.md run notes) found nothing new beyond the already-known print date/call time; the EPS-sourcing inconsistency this desk and JPM have flagged for weeks persists (WebSearch pulling $43.01 this morning vs. the Robinhood-verified $42.42 — rule 4 governs, live price used).

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~32.8% upside** from the $42.42 live price — narrower than 7/27's ~34.4% purely on the stock's continued bounce, unchanged model.

### Verdict: **UNDERVALUED, still no buy signal into 7/30**
Same framing as the last six cycles: a discount narrowing on pure price drift is not a valuation signal either way. No guidance cut, no contract loss, no margin/bookings deterioration found by this desk or any other desk this cycle. **Two days to the print** — rule 4 of the OMCL contingency plan (no same-minute decisions on the print itself, use the next scheduled run after it lands) is the operative discipline now, not this desk's valuation lane.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~6.6%, with margin expansion continuing at the Q1 rate.
- **Downside break**: JPM's -20%/+15% 7/30 tail remains the dominant near-term risk — a tighter-than-usual beat bar this quarter raises the odds of a "beat but sell off anyway" outcome (the pattern already seen in ISRG this cycle).

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($364.75, 7/28 ~09:37 ET) down ~0.12% vs. Monday's close, holding up far better than NVDA amid the chip-sector rotation (broad-market exposure diluting the single-sector shock). No view offered on adding to or trimming — that's BR's lane, not a DCF call. (Noting for context, not as a DCF input: BR's 7/31 VTI→VXUS rebalance time-box is now 3 days out.)

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($82.7735, 7/28 ~09:37 ET) down ~1.21% vs. Monday's close, tracking the Asian chip-sector weakness (Samsung/SK Hynix are meaningful VXUS constituents) more than VTI did. No DCF-based case to add or trim.

---

## 5. Energy Select Sector SPDR (XLE) — second consecutive oil-adjusted re-read

### Why a re-read again, and why the composite-DCF method is unchanged
XLE remains a 24-holding, market-cap-weighted basket with no cash flows of its own — the composite look-through method (model the top two holdings, apply directionally to the fund) is unchanged for a third straight cycle. What's new is again the **input**: Brent continued sliding overnight/this morning, and both state.md's 7/28 run notes and GS's 7/28 report explicitly repeat the ask this desk answered last cycle — refresh before treating XLE's now-closest-ever zone approach as anything but a price question.

### The dominant assumption, updated again
Brent spot is in the **$86.58-89** range this morning (down from $90.28 Monday, and further still from ~$100 two weeks ago) — WebSearch results disagree by about $2.50 depending on exact timestamp, itself a minor data-quality note. Checking the three reference houses this desk anchors to:
- **Goldman Sachs Q4 2026 Brent**: **$80**, explicitly reconfirmed/maintained as of 7/23 — **unchanged from the figure this desk used 7/27**. This remains the one clean, dated, apples-to-apples data point.
- **J.P. Morgan**: a fresh pull shows Q3'26 **$86**, Q4'26 **$80**, year-end **$78**; 2027 average **~$64**. This is a materially more granular (and less bearish near-term) figure than the "~$60 full-year 2026 average" this desk cited on 7/24-7/27 — but the two aren't apples-to-apples (a full-year average vs. a Q4/year-end spot figure), so this desk is treating it as a refinement of JPM's near-term view, not a reversal: JPM's Q4/year-end figures now sit close to GS's, both in the high-$70s/low-$80s.
- **EIA**: July STEO shows Q4 2026 at just **$70** (full-year 2026 average $81.91, cut sharply from June's $95.39) — a genuinely lower figure than the ~$89 this desk attributed to the EIA just one cycle ago. That magnitude of swing in a single cycle, with no confirmed intervening EIA publication found in a fresh search, reads as the same kind of source/vintage noise already flagged repeatedly for XOM/CVX EPS and OMCL's price — **this desk is not adopting the EIA figure as a fresh signal**, consistent with house rule 4's spirit (don't size off unverified single-source figures) applied to macro inputs, not just equity prices.
**Net read**: the two houses this desk trusts most for a clean, stable read (GS, and now a more granular JPM) are **not** falling with spot — both cluster $78-80 for Q4'26, essentially unchanged from last cycle. Only the EIA figure moved, and its reliability this cycle is itself in question. **This desk is holding the terminal FCF/share path at 7/27's already-adjusted level** rather than nudging it again — there is no clean, trusted data point justifying a further change either direction this cycle.

### 5a. ExxonMobil (XOM) — spot refresh, model held

**Data-quality flag, still unresolved**: a fresh WebSearch this morning again returned wildly inconsistent 2026 EPS figures — $11.38, $10.11, $9.21, $8.28 across sources, the same spread flagged 7/27. This desk continues **not adopting any of these figures** and is holding the FCF-per-share path at 7/27's level, since the one trusted underlying input (GS's Q4'26 oil forecast) didn't move.

5-year FCF-per-share path (unchanged from 7/27): **$8.50 → $7.00 → $6.10 → $6.20 → $6.35**

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $122.76 | $147.43 | $188.58 |
| 7.0% | $111.87 | $131.43 | $162.21 |
| **7.5% (base)** | $102.79 | **$118.63** | $142.49 |
| 8.0% | $95.09 | $108.15 | $127.03 |
| 8.5% | $88.49 | $99.42 | $114.72 |

Base case ($118.63, unchanged) vs. spot **$154.42** (7/28, WebSearch-sourced, -1.6% on the day tracking the oil slide) implies **~23.2% downside** — narrower than 7/27's ~24.4%, purely because XOM's own share price fell today, not a model change. **XOM reports Q2 2026 results Friday 7/31, three days out** — this desk continues to recommend treating this build as provisional until that print replaces the noisiest input with an actual.

### 5b. Chevron (CVX) — spot refresh, model held

Same data-quality caveat applies with undiminished force: fresh CVX consensus EPS figures ranged **$7.35-$19.47** across sources this morning — if anything a wider spread than either 7/24 or 7/27's reads. FCF-per-share path held unchanged from 7/27: **$14.19 → $13.31 → $11.03 → $11.24 → $11.55**. CVX also reports Q2 2026 **Friday 7/31**, same day as XOM.

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $222.50 | $267.33 | $342.09 |
| 7.0% | $202.65 | $238.35 | $294.21 |
| 7.5% | $186.17 | $215.04 | $258.30 |
| **8.0% (base)** | $172.20 | **$195.93** | $230.27 |
| 8.5% | $160.23 | $180.08 | $207.80 |

Base case ($195.93, unchanged) vs. spot **~$189.92** (7/28, WebSearch-sourced, -2.5% on the day, the sharper of the two names' declines today) implies **~3.2% upside** — a genuine widening from 7/27's ~0.8% upside, entirely on CVX's own sharper pullback today, not a model change.

### 5c. Blended read-through to XLE
Weighting by fund weight (58.1% XOM / 41.9% CVX of the modeled ~35% subset, unchanged): blended base-case gap = 58.1%×(−23.2%) + 41.9%×(+3.2%) ≈ **−12.1%** — modestly narrower than 7/27's −13.8%, continuing (not reversing) the two-cycle trend, but the move is small and sits well inside this build's own noise band. The un-modeled ~65% of the fund (COP and other E&P names share XOM's oil-sensitivity profile; MPC/PSX's refining economics remain a genuine partial offset) makes the fund-level number directionally similar but, as before, less precise than either single-name read.

### The tape-vs-model divergence, now a two-cycle pattern
XLE itself moved from $58.36 (7/27 close) to $58.42 (7/28 live) — **essentially flat, +0.1%** — despite Brent extending its slide and both modeled single names (XOM, CVX) falling 1.6-2.5% today. This is the same divergence flagged 7/27, now persisting into a second session: **the basket is not tracking either crude or its own largest holdings' declines**, plausibly reflecting refining-name (MPC/PSX) resilience or simply thinner immediate pass-through at the fund level than the headline oil move implies. GS's own 7/28 report flags the same tension from the other side: "continued oil weakness could mean XLE drifting into the zone is the bear case... rather than a bargain entry." **This desk's model says the opposite of that specific fear — the valuation gap narrowed, not widened, on the same weekend/week of oil weakness** — but this desk agrees the tape-level signal (a flat XLE against falling oil and falling single-name proxies) is genuinely ambiguous and worth flagging rather than resolving cleanly in either direction.

### Verdict: **MODESTLY OVERVALUED, gap ~12.1% — flat-to-narrower for a second straight cycle, still not a clean buy signal**
This remains inside the range of noise this build's own inputs carry (the CVX EPS data-quality issue alone spans a >$12/share cross-source range). **This desk's view, unchanged in substance from 7/27**: the directional finding (gap not widening despite continued spot weakness, because the trusted reference band — GS, and now a more granular JPM — held steady) is real and worth having on record, but the precision of "~12.1%" should not be over-trusted given the Y1 input noise, and this desk explicitly does **not** read today's flat XLE price as confirmation of BW/GS's "bear case materializing" concern — the model doesn't support that read, though the tape-level ambiguity is real. Recommend the trader/BR/BW treat this as: (1) the standing ask for a same-day refresh before any zone-touch is answered again, with the same conclusion as last cycle (gap not widening); (2) XLE is now only $0.42 above the $55-58 zone top — the closest read of this entire multi-week trigger — so a fire this week is a live possibility on price alone, independent of this desk's valuation lane; (3) the 7/31 XOM/CVX prints, three days out, remain the point at which this model's weakest inputs get replaced with actuals, and this desk continues to recommend weighting that fresh data over further incremental oil-headline noise between now and then.

### Key assumptions that could break this model
- **Upside break**: GS's own OPEC spare-capacity thesis (UAE's reported OPEC exit, 2027 spare capacity cut from 3.8 to 2.5 mb/d) proves structural — if Brent settles into an $85-95 structural range rather than reverting toward the $70-80 band, both names' fair values shift further above spot and the composite verdict flips toward fairly-valued-to-undervalued.
- **Downside break**: the Red Sea/Houthi front (still live, unresolved per state.md's run notes) escalates independently of the US-Iran pause, or the US-Iran pause itself breaks down — either would push spot back toward $100+ without a corresponding move in the consensus band, reopening or widening the overvaluation gap this desk has now read as narrowing for two straight cycles.
- **Data-quality caveat, restated a third time**: this cycle's CVX EPS figures showed a >$12/share cross-source spread and the EIA's own Q4'26 figure moved by ~$19 versus what this desk attributed to it just one cycle ago with no confirmed intervening publication — treat the precise dollar fair-value figures in this section as directional only, with materially less confidence than the NVDA/OMCL builds, until Friday's prints (XOM and CVX both report 7/31) replace estimates with actuals.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-28 ~10:15 ET)
GS kept XLE #1 and explicitly repeated the ask this desk is answering here: a same-day oil-adjusted refresh before any zone-touch is read as a green light, and flagged the risk that continued oil weakness could mean a zone-touch is "the bear case materializing... rather than a bargain." **This desk's fresh re-read does not confirm that specific fear** — the composite gap narrowed again, not widened, because the reference band (GS's own $80 Q4'26 figure, unchanged, plus a more granular JPM read that clusters near it) held steady even as spot kept sliding. Both desks agree XLE is now closer to actionable on price than at any point in this multi-week trigger ($0.42 from the zone), and both agree the 7/31 prints matter more than further oil-headline noise between now and then — but this desk's valuation read is more constructive than GS's tape-based caution this specific cycle, and that divergence is worth having on record rather than smoothed over. GS's OMCL read (still #2, hold through 7/30) matches this desk's own unchanged view. **OXY and MU remain outside this cycle's mandate** (current holdings + GS's #1 pick only) — GS's #4 and #3 picks respectively this cycle, not #1; per state.md's Strategy & theories rule 10, this is a standing, acknowledged scope boundary, not fresh non-delivery.

## Explicit read on trader's current positions (NVDA, VTI, VXUS, OMCL) + non-holding coverage (XLE)
**NVDA**: unchanged directionally — DCF does not support adding at $194.27 (~22.5% downside to base case, narrowing fast on the chip-rout selloff); existing ~$4.82 notional position isn't worth trading out of on valuation grounds. No confirmed fundamental catalyst behind the further decline — sentiment/multiple-compression, not a model input.
**OMCL**: hold, no add, discount narrowed to ~32.8% on the continued bounce but still not a pre-print buy signal — 2 days to the print, rule 4 of the contingency plan governs from here.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve buys, not DCF calls.
**XLE**: **not currently a holding.** Base case now reads ~12.1% overvalued on the modeled subset (narrower than 7/27's ~13.8%, continuing not reversing the trend) — the second straight same-day re-read the trader and GS both asked for, and the finding again is that continued oil weakness has not widened the valuation gap, because this desk's trusted reference band (GS, and a newly-granular JPM read) held steady rather than falling with spot. Still not inside the $55-58 entry zone ($58.42, $0.42 above the top edge — the closest read yet) and still not a clean "fire" signal on valuation grounds given real, worsening data-quality noise in the Y1 inputs (this cycle's CVX EPS spread and the EIA vintage discrepancy) — this desk recommends waiting for Friday's XOM/CVX prints before treating the ~12% gap as dispositive, while flagging plainly that the price-level trigger itself may fire on its own terms before then, independent of this desk's lane.
