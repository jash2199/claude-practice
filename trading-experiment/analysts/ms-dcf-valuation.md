# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-27 (Monday, ~10:35 ET, first update since 7/24 ~10:16 ET — weekend gap)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS — all four current holdings per state.md's 7/27 ~09:36 ET check-in — plus (5) **XLE**, GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-27 ~10:15 ET report — still #1, unchanged rank). Live holding prices below are the trader's own Robinhood-verified quotes from state.md's 7/27 ~09:36 ET check-in (rule 4: never size off WebSearch for these four names). XOM/CVX/XLE-as-non-holding prices are WebSearch-sourced, flagged explicitly. **This is a full re-read of the XLE model, not a brief refresh** — both the trader's own state.md addendum (7/27 ~09:36 ET) and GS's 7/27 report explicitly requested a fresh oil-adjusted DCF before any future zone-touch is treated as an automatic fire, per the discretionary tightening logged 7/27 morning.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $205.629 (7/27, ~09:36 ET trader-recorded live quote) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~26.8% downside to DCF fair value.** Narrowed slightly from 27.5% (7/24) on a modest price pullback; no model change. |
| **OMCL** | $41.93 (7/27, ~09:36 ET trader-recorded live quote) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **UNDERVALUED — ~34.4% upside to DCF fair value**, narrowed from 40.3% (7/24) as the stock extended its bounce. Still no buy signal — print is 3 days out. |
| **VTI** | $368.175 (7/27, ~09:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $84.2597 (7/27, ~09:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** *(fresh oil-adjusted re-read)* | $58.83 (7/27, ~09:36 ET Robinhood live check per state.md — WebSearch shows a noisier $59.18-59.62 range, treated as stale per rule 4) | ~$127-133 implied on the modeled XOM/CVX subset (composite base case, see Part 5) | **STILL MODESTLY OVERVALUED at base case, but the gap has NARROWED to ~13.8% (from ~19.3% on 7/24) — the opposite direction of what the naive reading of this weekend's news would suggest.** Explained below: this is a genuine, counterintuitive finding, not a rounding change. |

**Bottom line for the trader:** NVDA and OMCL are simple mechanical updates — no new company-specific catalyst on either name this cycle, gaps moved only with price. **XLE is the real story this cycle, and the finding cuts against the framing in Saturday/Monday's read of the news.** The weekend's Brent crash (~$100 → ~$90.28, -8.2%) is real, and on its face looks like the "fast de-escalation" downside break this desk flagged on 7/24. But the same forecasters this desk anchors its terminal-oil assumption to have **also revised their own normalization bands upward** over the same window — most notably Goldman Sachs's own Q4 2026 Brent forecast, which this desk's 7/24 report cited at $71 and which a fresh search this morning shows has since been revised to **$80** (full-year 2026 average ~$85). The EIA's own Q4 2026 forecast, ~$89, is now within about 1% of today's actual spot price. **Net effect: the "consensus normalization" reference point this model anchors to moved up by roughly as much as spot moved down, so the overvaluation gap narrows modestly rather than widening** — the opposite of what this desk's own 7/24 downside-break note implied would happen in a de-escalation scenario. This desk is flagging that its own prior framing was too mechanical: a de-escalation compresses spot, but it doesn't automatically widen a DCF gap if the consensus band it's benchmarked against moves too. That said: XOM and CVX both report Q2 earnings this **Friday 7/31** (4 days out), the Y1 EPS/FCF-per-share inputs remain the least reliable part of this build (see data-quality flag below — one source this morning showed XOM 2026 consensus EPS at $11.38, a 46% jump from the $7.81 this desk used 7/24, almost certainly a source/vintage artifact rather than a real re-rating), and XLE itself has barely moved (-0.6% since 7/24) despite an 8% oil crash — a genuine model-vs-tape divergence worth sitting with, not smoothing over. **Recommendation: treat this re-read as directionally real (gap narrower, not wider) but hold off on calling XLE "cleared to fire" until the 7/31 prints replace this desk's noisiest inputs with actuals.**

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/24
Price eased further from $207.685 (7/24) to $205.629 (7/27, ~09:36 ET), a modest ~1.0% pullback over the long weekend, even as the broader tape opened sharply higher Monday morning on the Iran/oil relief rally (Dow +1.11%, S&P +0.95%, Nasdaq +1.51% per state.md) — NVDA is the one holding not participating in that rally. GS's 7/27 report attributes this to a mixed reaction to reports of a ~$250B Nvidia financing guarantee backstopping OpenAI's leased capacity at a 10GW Ohio data-center hub (the largest financial guarantee ever discussed between two private companies). **This desk's read: correctly not a DCF input yet.** A financing guarantee is a contingent liability / vendor-financing commitment, not confirmed incremental revenue or a change to this desk's FY2027E revenue build — it echoes the same "circular AI financing" concern already priced qualitatively into this desk's discount on Street's own $302.83 average target. No model change until (if) it converts into a disclosed revenue or capex commitment with real terms.

### Verdict: **OVERVALUED, gap narrowed modestly on further price pullback**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $205.629 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~26.8% downside** from $205.629 (28.6% on 7/23 → 27.5% on 7/24 → 26.8% today) — continuing to move mechanically narrower as the stock drifts toward, not away from, fair value. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, and the custom-silicon competitive threat are the downside breaks; the $250B OpenAI financing story is a new watch item on the "circularity" downside thread, not yet a quantifiable one). **Still hold-for-other-reasons, not an add, not a trim** — concentration ~14.40% equity/~10.32% pool per state.md's 7/27 09:36 ET check, comfortably below BW/BR's 18-20% trigger.

---

## 2. Omnicell (OMCL) — brief update, model unchanged, discount narrowing into the print

### What changed since 7/24
Price extended its bounce to $41.93 (7/27, ~09:36 ET), +4.4% vs. 7/24's $40.17 and now the best level in over a week, on the same broad Monday relief rally rather than anything company-specific. Fresh WebSearch this cycle confirms nothing structurally new: Q2 2026 results still confirmed for **Thursday, July 30, before the open** (call at 8:30am ET) — now 3 days out. The EPS-estimate sourcing inconsistency this desk and JPM have flagged for weeks persists (one source this morning: $0.44 consensus; Q1 2026 actual was $0.55 vs. a $0.29 estimate, an 89.7% beat) — noted, not actionable, and irrelevant to this desk's DCF (which doesn't depend on the quarterly EPS print directly).

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~34.4% upside** from the $41.93 live price — narrower than 7/24's ~40.3% purely on the stock's bounce, unchanged model.

### Verdict: **UNDERVALUED, still no buy signal into 7/30**
Same framing as the last five cycles: a discount narrowing (or widening) on pure price drift is not a valuation signal either way. No guidance cut, no contract loss, no margin/bookings deterioration found by this desk or any other desk this cycle. **Three days to the print** — rule 4 of the OMCL contingency plan (no same-minute decisions on the print itself, use the next scheduled run after it lands) is the operative discipline now, not this desk's valuation lane.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~6.6%, with margin expansion continuing at the Q1 rate.
- **Downside break**: JPM's -20%/+15% 7/30 tail remains the dominant near-term risk — a tighter-than-usual beat bar this quarter raises the odds of a "beat but sell off anyway" outcome (the pattern already seen in ISRG this cycle).

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($368.175, 7/27 ~09:36 ET) up ~0.92% vs. Thursday's close, participating fully in the broad relief rally. No view offered on adding to or trimming — that's BR's lane, not a DCF call. (Noting for context, not as a DCF input: BR's 7/31 VTI→VXUS rebalance time-box is now 4 days out.)

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($84.2597, 7/27 ~09:36 ET) up ~1.03% vs. Thursday's close, also participating in the rally. No DCF-based case to add or trim.

---

## 5. Energy Select Sector SPDR (XLE) — fresh oil-adjusted re-read

### Why a re-read now, and why the composite-DCF method is unchanged
XLE remains a 24-holding, market-cap-weighted basket with no cash flows of its own — the composite look-through method (model the top two holdings, apply directionally to the fund) from 7/24 is unchanged. What's new this cycle is the **input**, not the method: Brent crashed ~8% over the weekend on a confirmed US-Iran strike pause, and both the trader's own state.md addendum and GS's 7/27 report explicitly asked this desk to re-run the model against the new oil level before treating any future $55-58 zone-touch as automatic — this section is that re-read.

### The dominant assumption, updated
Brent spot is **$90.28** as of this morning (down from ~$100 on 7/24, -8.2% over the weekend) — still a real, if partial, de-escalation (US-Iran pause confirmed; **Red Sea/Houthi front has NOT de-escalated** — Houthis hit Saudi Aramco facilities at Jizan/Yanbu the same weekend, per fresh WebSearch, and a fresh check this morning confirms no ceasefire is in place there, only ongoing mediation). Against that lower spot, the consensus normalization band this desk anchors to has **also moved**, and moved up:
- **Goldman Sachs Q4 2026 Brent**: **$80** (this desk's 7/24 report cited $71 from the same source line — a genuine $9 upward revision inside three days) — full-year 2026 average now ~$85, 2027 still ~$75.
- **J.P. Morgan**: ~$60 for full-year 2026, $60-65 for 2027 — unchanged, still the most bearish major house.
- **EIA**: Q4 2026 now **~$89** (essentially in line with today's actual spot), 2027 average ~$64 — a wide difference between EIA's near-term and out-year views that this desk did not fully capture in the 7/24 build.
**Net read**: the "normalization" story is real for 2027 across all three houses (a $60-75 band), but the near-term (2026 remainder) band is now much wider and, on two of three sources, considerably higher than what this desk modeled 7/24. This desk is revising its terminal-path assumption up modestly to reflect that, while keeping the multi-year taper toward the 2027 consensus band intact.

### 5a. ExxonMobil (XOM) — updated proxy build

**Data-quality flag, front and center**: a fresh WebSearch this morning returned a 2026 full-year consensus EPS figure of **$11.38** — a 46% jump from the $7.81 this desk used on 7/24, three trading days ago. That magnitude of swing in three days is not credible as a genuine estimate revision; it is almost certainly a source/vintage mismatch (the same kind of cross-source inconsistency already flagged for CVX below and for OMCL for weeks). **This desk is not adopting the $11.38 figure.** Instead, this desk is nudging the terminal FCF/share path up modestly (~9%) to reflect the GS Q4'26 upward revision specifically (the one clean, dated, apples-to-apples data point available), leaving the Y1 anchor close to its prior level. **XOM reports Q2 2026 results Friday 7/31 — this desk recommends treating this build as provisional until that print replaces the noisiest input with an actual.**

Updated 5-year FCF-per-share path: **$8.50 → $7.00 → $6.10 → $6.20 → $6.35** (vs. 7/24's $7.81 → $6.50 → $5.60 → $5.70 → $5.85 — a ~9% upward shift concentrated in the terminal years, consistent with GS's own $71→$80 Q4'26 revision)

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $122.76 | $147.43 | $188.58 |
| 7.0% | $111.87 | $131.43 | $162.21 |
| **7.5% (base)** | $102.79 | **$118.63** | $142.49 |
| 8.0% | $95.09 | $108.15 | $127.03 |
| 8.5% | $88.49 | $99.42 | $114.72 |

Base case ($118.63) vs. spot **$156.94** (7/26 close, WebSearch-sourced) implies **~24.4% downside** — narrower than 7/24's ~30.4%, entirely because the terminal-year reference band moved up, not because XOM's business changed. Street's own average analyst target remains $167-173 (unchanged sourcing since 7/24) — still above both this desk's base case and spot, the same divergence flagged last cycle, unresolved.

### 5b. Chevron (CVX) — updated proxy build

Same data-quality caveat as 7/24 applies with equal force (CVX consensus EPS figures ranged $8.33-$19.47 across sources in a fresh check this morning — if anything wider than 7/24's $8.30-$16.74 range). Applying a smaller upward nudge than XOM (~5%, consistent with 7/24's framing that CVX's Permian-basin volume growth partially offsets pure oil-price normalization effects): **$14.19 → $13.31 → $11.03 → $11.24 → $11.55** (vs. 7/24's $13.51 → $12.68 → $10.50 → $10.70 → $11.00). CVX also reports Q2 2026 **Friday 7/31**, same day as XOM.

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $222.50 | $267.33 | $342.09 |
| 7.0% | $202.65 | $238.35 | $294.21 |
| 7.5% | $186.17 | $215.04 | $258.30 |
| **8.0% (base)** | $172.20 | **$195.93** | $230.27 |
| 8.5% | $160.23 | $180.08 | $207.80 |

Base case ($195.93) vs. spot **$194.46** (7/27, WebSearch-sourced) implies **~0.8% upside — essentially exactly fair value**, a genuine shift from 7/24's ~4.0% overvaluation read into fair-value territory, again on the reference-band shift rather than anything CVX-specific.

### 5c. Blended read-through to XLE
Weighting by fund weight (58.1% XOM / 41.9% CVX of the modeled ~35% subset, unchanged): blended base-case gap = 58.1%×(−24.4%) + 41.9%×(+0.8%) ≈ **−13.8%** — narrower than 7/24's −19.3%. The un-modeled ~65% of the fund (COP and other E&P names share XOM's oil-sensitivity profile; MPC/PSX's refining economics remain a genuine partial offset) makes the fund-level number directionally similar but, as before, less precise than either single-name read.

### The tape-vs-model divergence, stated plainly
XLE itself moved from ~$59.20 (7/24) to $58.83 (7/27) — **down only ~0.6%**, despite Brent falling ~8% over the same window and this desk's own model narrowing the overvaluation gap by ~5.5 points in the *other* direction (less bearish). Two live positions require different reads: **oil fell but XLE barely moved** (consistent with BW's 7/24 flag that XLE's basket composition, including refining exposure, dampens pure crude pass-through — or simply that XLE hadn't priced in as much of the acute Hormuz/Red Sea premium as the WebSearch oil headlines implied in the first place), **while this desk's model says the "fair value" gap actually narrowed.** Both readings point the same direction — toward XLE being closer to fair value than the 7/24 read suggested — but for different reasons, and this desk wants that distinction on the record rather than presenting one clean narrative that overstates confidence.

### Verdict: **MODESTLY OVERVALUED, gap narrowed to ~13.8% — closer to fair value than any prior read, still not a clean buy signal**
This is now a meaningfully closer call than 7/24's already-close read. Unlike MU (~71% overvalued, unrebutted for ten-plus cycles — a clean hard pass), XLE's remaining ~14% gap sits well inside the range of noise this build's own inputs carry (the XOM EPS data-quality issue alone spans a >20-point fair-value range depending on which source is trusted). **This desk's view: the directional finding — gap narrower, not wider, following the weekend's de-escalation — is real and worth acting on as information, but the absolute precision of "~13.8%" should not be over-trusted given the Y1 input noise.** Recommend the trader/BR/BW treat this as: (1) the specific caution logged in the 7/27 addendum ("don't treat a future zone-touch as automatic without a fresh DCF") is now answered — the fresh DCF says the gap narrowed, not widened; (2) XLE is still $0.83 above the top of the $55-58 zone, so the entry trigger has still not fired regardless; (3) the 7/31 XOM/CVX prints, four days out, will materially firm up this model's weakest inputs and are worth waiting for before treating this read as final.

### Key assumptions that could break this model
- **Upside break**: GS's own OPEC spare-capacity thesis (UAE's reported OPEC exit, 2027 spare capacity cut from 3.8 to 2.5 mb/d) proves structural — if Brent settles into an $85-95 structural range rather than reverting to the $60-75 band, both names' fair values shift further above spot and the composite verdict flips to fairly-valued-to-undervalued.
- **Downside break**: the Red Sea/Houthi front (still live, unresolved) escalates independently of the US-Iran pause, or the US-Iran pause itself breaks down — either would push spot back toward $100+ without a corresponding move in the consensus band, reopening or widening the overvaluation gap this desk narrowed today.
- **Data-quality caveat, restated more forcefully than 7/24**: this cycle's XOM EPS figures showed a 46% cross-source swing in three trading days — treat the precise dollar fair-value figures in this section as directional only, with materially less confidence than the NVDA/OMCL builds, until Friday's prints (XOM and CVX both report 7/31) replace estimates with actuals.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-27 ~10:15 ET)
GS kept XLE #1 and stated its own house view plainly: that Brent at $84-90 remains well above GS's own prior $60-70 anchor and that a partial, US-Iran-specific pause shouldn't be read as the bear case confirming. **This desk's fresh re-read partially validates GS's instinct, though for a different reason than GS argued.** GS's argument was that spot is still elevated versus an unchanged reference band; this desk's finding is that the reference band itself moved up (GS's own Q4'26 forecast, $71→$80) at the same time spot moved down — different mechanism, same directional conclusion: the overvaluation gap did not widen on this weekend's news, it narrowed. Both desks now read XLE as closer to actionable than 7/24, from different angles — worth having both reasons on record since they'd diverge in a scenario where oil fell further without a further GS reference-band revision. GS's OMCL read (still #2, hold through 7/30) matches this desk's own unchanged view. **OXY and MU remain outside this cycle's mandate** (current holdings + GS's #1 pick only) — GS's #4 and #3 picks respectively this cycle, not #1; noting again per state.md's Strategy & theories rule 10 that this is a standing, acknowledged scope boundary, not fresh non-delivery.

## Explicit read on trader's current positions (NVDA, VTI, VXUS, OMCL) + non-holding coverage (XLE)
**NVDA**: unchanged directionally — DCF does not support adding at $205.629 (~26.8% downside to base case); existing ~$5 notional position isn't worth trading out of on valuation grounds.
**OMCL**: hold, no add, discount narrowed to ~34.4% on the bounce but still not a pre-print buy signal — 3 days to the print, rule 4 of the contingency plan governs from here.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve buys, not DCF calls.
**XLE**: **not currently a holding.** Base case now reads ~13.8% overvalued on the modeled subset (narrowed from ~19.3% on 7/24) — the fresh re-read the trader and GS both asked for this morning, and the finding is that the weekend's oil de-escalation narrowed rather than widened the gap, because the consensus normalization band this desk anchors to moved up alongside it. Still not inside the $55-58 entry zone ($58.83, $0.83 above the top edge) and still not a clean "fire" signal given real data-quality noise in the Y1 inputs — this desk recommends waiting for Friday's XOM/CVX prints before treating the ~14% gap as dispositive, but wants it on record now that the specific "de-escalation = wider overvaluation" caution from the 7/27 morning addendum did not hold up under a fresh build.
