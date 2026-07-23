# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-23 (Thursday, ~10:11 ET, first update since 7/22 ~14:00 ET)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS — all four current holdings per state.md. GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-23 ~09:45 ET) is still **OMCL**, already a live holding and covered under (2) — no new name to add this cycle. Fresh WebSearch this run found nothing that moves either single-name cash-flow build (NVDA's fresh news is a rebound narrative plus reiterated China-export/custom-silicon competitive risk, already known; OMCL's WebSearch again returned a stale $43.01 print — see data-quality flag below — with no new structural news ahead of 7/30), so this is a numbers refresh off the trader's most recent live Robinhood-quoted prices (state.md, 2026-07-23 ~09:37 ET check-in), not a rebuild. **The headline this cycle: OMCL's DCF discount has widened again to its widest reading yet, and — separately, on the trader's/BW's side, not this desk's — the stock has now printed an intraday low of $40.01, the closest test of the contingency plan's ~$40 mandatory-re-read line to date.***

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $210.79 (7/23, ~09:37 ET trader-recorded live quote) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~28.6% downside to DCF fair value.** Widened from 27.1% (7/22) as the stock gave back part of Wednesday's rally amid the broader Alphabet/Tesla-earnings-driven risk-off open. |
| **OMCL** | $40.32 (7/23, ~09:37 ET trader-recorded live quote) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **UNDERVALUED — ~39.8% upside to DCF fair value**, the widest gap this desk has logged since the 7/17 entry. Widened purely on continued price weakness (intraday low $40.01 today) against an unchanged model — still no buy signal into 7/30. |
| **VTI** | $366.17 (7/23, ~09:37 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |
| **VXUS** | $83.855 (7/23, ~09:37 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |

**Bottom line for the trader:** Both single-name gaps widened again today, and both are mechanical (price-driven), not model-driven — this desk has changed no cash-flow assumption for either name since the 7/10 (NVDA) or 7/17 (OMCL) builds. NVDA's overvaluation gap ticked up to ~28.6% (from 27.1%) as the stock softened alongside the rest of the tape on this morning's Alphabet/Tesla-driven AI-capex-valuation wobble — still a hard no-add, and a one-day pullback inside a broad risk-off open is not a trim catalyst either. **OMCL is the more consequential data point again**: the DCF discount has now widened to ~39.8%, and — per state.md's own 09:37 ET read — the stock traded an intraday low of $40.01 this morning, a hair's breadth from the contingency plan's $40 mandatory-re-read line, before recovering to $40.32. This desk's view is unchanged from the last three cycles of saying it: **a DCF gap widening on drift, even one this wide, is not itself a buy signal**, and per JPM's binary-earnings framing (realistic -20%/+15% one-day range on the 7/30 print, 7 days out) sizing should not change on today's price level alone. The contingency plan's own rule 5 (mandatory full 5-analyst re-read if OMCL trades at/below ~$40) has *not* technically fired — the print touched $40.01, not below $40 — but it is close enough that this desk flags it explicitly rather than let it pass as routine drift.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/22
Price eased from $212.06 (Wednesday's close) to $210.79 (7/23, ~09:37 ET), a ~0.6% pullback, consistent with this morning's broad risk-off tape (Dow/S&P/Nasdaq futures -0.3% pre-open) driven by Alphabet's post-close capex-guidance raise (~$205B for 2026, spooking the AI-capex-valuation narrative) and Tesla's EPS miss/negative-FCF quarter — a sector-wide reaction, not an NVDA-specific catalyst. Fresh WebSearch this cycle found NVDA in "rebound" framing (bounced off a brush with the $200 level, +3%+ off that low toward ~$215 earlier this week) but with unchanged structural concerns already priced into this desk's model: rising supply pressure, China export-control risk, and the longer-run competitive threat from hyperscalers' own custom silicon (Google TPU, AWS Trainium, etc.) reducing external-chip dependence. None of this moves the FY2027E revenue, FCF-margin path, or WACC/terminal-growth assumptions — no new guidance, no new export-policy text, next earnings still ~8/26.

### Verdict: **OVERVALUED, gap widened modestly**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $210.79 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~28.6% downside** from $210.79 (28.9% on 7/15 → 27.7% on 7/16 → 24.9% on 7/17 → 25.8% on 7/20 → 27.2% on 7/21 → 27.1% on 7/22 → 28.6% today) — a modest re-widening after two flatter cycles, tracking the stock's own give-back of its mid-week rally rather than any fundamental deterioration. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, and now the emerging custom-silicon competitive threat flagged in today's search are the downside breaks; full writeup via git history, 7/10 report). **Still a hold-for-other-reasons position, not an add, and not a trim** — a broad-market risk-off pullback is not a name-specific negative catalyst, and the position remains comfortably below BW/BR's 18-20% concentration-trigger band (~14.8%/10.6% equity/pool per state.md's 7/23 09:37 ET check).

---

## 2. Omnicell (OMCL) — brief update, model unchanged, discount widest yet

### What changed since 7/22
Price fell from $42.045 (7/22, ~09:36 ET) to a run of lower prints through the week, opening today at $40.32 (7/23, ~09:37 ET, -1.32% vs. Wednesday's $40.86 close) with an intraday low of **$40.01** — per state.md, "the closest test yet of the contingency plan's ~$40 mandatory-re-read line," though the stock has not technically traded at or below $40. WebSearch found no fresh structural catalyst: earnings remain confirmed for July 30 before the open, Zacks consensus now cleanly sourced at $0.48 EPS / $309.6M revenue (6.6-6.7% y/y growth), sitting at the very top of the company's own $0.40-0.48 EPS guide range — a tighter setup than Q1's blowout beat (Q1 actual $0.55 EPS, a 66.7% surprise), consistent with JPM's framing that this quarter's "beat bar" is higher than usual. **Data-quality flag, restated again**: today's WebSearch again surfaced the same stale $43.01 print this desk and others have flagged for eight-plus consecutive cycles now — directly contradicted by state.md's live Robinhood-verified $40.32-40.86 range. Treated as a stale/hallucinated artifact per rule 4 and ignored; the trader's Robinhood-verified price is the only figure used below.

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~39.8% upside** from the $40.32 live price — up again from 7/22's ~34.0%, purely a function of continued price weakness against an unchanged model. All 15 sensitivity cells now sit above the current price, including the single most conservative corner (11%/2.0% = $38.36) — even that floor case implies the stock is not overvalued at today's level.

### Verdict: **UNDERVALUED, widest gap on record — still no buy signal into 7/30**
The math continues to do exactly what it should: a lower price against an unchanged fair-value estimate produces a wider discount, and today's intraday brush with $40.01 is the clearest instance of that dynamic yet. This is not new information about Omnicell's business — no guidance cut, no contract loss, no margin/bookings deterioration has been found by this desk or by JPM's dedicated earnings coverage this cycle. This desk continues to align with GS's and JPM's framing: the realistic 7/30 one-day move is **-20% to +15%**, a materially wider and more bearish-skewed tail than even today's 39.8% DCF discount implies. **No case to add before 7/30** on a "it's even cheaper now" basis — per the OMCL contingency plan (state.md), the trigger for revisiting sizing is a structural thesis break or the print itself, not the discount mechanically widening on drift, and rule 5's explicit $40 trading-price trigger has not technically fired (today's low was $40.01, not at/below $40). This desk flags the closeness for the record but defers the sizing/re-read call to the trader and BW per the contingency plan's own process, not to this desk's valuation lane.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~6.6%, with margin expansion continuing at the Q1 rate — plausibly pushes fair value into the $65-85 range.
- **Downside break**: JPM's -20%/+15% 7/30 tail is the dominant near-term risk this desk is tracking — this quarter's consensus sitting at the top of guide (vs. Q1's blowout beat) raises the bar for a repeat "+14-15%" pop and correspondingly raises the chance of a "beat but sell off anyway" outcome (the pattern JPM has flagged repeatedly this cycle, e.g. ISRG 7/16). The now nine-plus-session slide with no identified catalyst remains a soft data point worth tracking into the print — consistent with either pre-earnings positioning/thin liquidity (the base case across all five desks) or an as-yet-undetected thesis break (the tail case the contingency plan exists to catch).

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($366.17, 7/23 ~09:37 ET) is down ~0.73% vs. Wednesday's close, consistent with the broad risk-off open driven by Alphabet/Tesla earnings reactions and fresh Hormuz/Red Sea escalation (Brent >$100/bbl this morning per GS's 7/23 report). No view offered on adding to or trimming this position — that's BR's lane, not a DCF call. Substitute lens unchanged from prior reports (git history).

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($83.855, 7/23 ~09:37 ET) is down ~0.72% vs. Wednesday's close, moving roughly in line with VTI/NVDA this morning rather than showing its usual relative resilience — consistent with a broad-based risk-off open rather than a name-specific or semiconductor-supply-chain-specific development. No DCF-based case to add or trim.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-23)
GS's fresh 7/23 report keeps OMCL #1 — hold, do not add through 7/30 — matching this desk's read exactly, and both desks independently flag the same stale OMCL WebSearch artifact (GS's JPM-sourced consensus figures vs. this desk's $43.01 print) resolved the same way, in favor of the live Robinhood quote. GS's new #2 idea this cycle, **XLE** (promoted in direct response to BR's ask, given the Hormuz-blockade/oil-toll thesis and zero energy exposure in the book), is **not sized by this desk this cycle** — it falls outside the coverage mandate (current holdings + GS's #1 pick only) and no mandate change has been made. **Open gaps this desk continues to carry, now further compounding per GS's repeated asks**: a dedicated OXY DCF (GS's prior #2, now sidelined behind XLE but still unbuilt) and a MU DCF (GS's #3 this cycle, sixth repeated request, with GS noting the fundamental HBM-demand story keeps strengthening against this desk's stale ~71%-overvalued verdict). Both remain outside this cycle's mandate — flagging the compounding pressure for the record without unilaterally expanding scope.

## Explicit read on trader's current positions (NVDA, VTI, VXUS, OMCL)
**NVDA**: unchanged directionally — DCF does not support adding at $210.79 (~28.6% downside to base case, the widest reading in three cycles); existing ~$5 notional position isn't worth trading out of on valuation grounds given the "no trade without a fresh catalyst" discipline, and this morning's broad-market pullback isn't a fresh name-specific catalyst either direction. Concentration check: ~14.8%/10.6% equity/pool, still well inside BW/BR's 18-20% review trigger.
**VTI**: hold, no valuation view — diversified core-sleeve buy, not a DCF call.
**VXUS**: hold, no valuation view — same treatment as VTI; today's move roughly in line with the rest of the book rather than showing the usual decoupling.
**OMCL**: hold, no add, despite the DCF discount widening to its largest reading yet (~39.8%) and the stock brushing an intraday low ($40.01) a hair above the contingency plan's $40 re-read line. This remains the clearest live example of why a DCF gap alone is not an entry signal: the widening is entirely attributable to continued price drift with no identified structural catalyst, against a binary earnings event 7 days out with a realistic -20%/+15% one-day range and a tighter-than-usual beat bar this quarter. Per the OMCL contingency plan, the next valuation-relevant checkpoint remains the 7/30 print itself; this desk defers the "did rule 5 technically fire" call to the trader/BW's process, not to its own valuation lane.
