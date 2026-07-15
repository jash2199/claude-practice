# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-15 (Wednesday, midday update)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA and (2) OMCL — both current holdings/near-holdings already fully built in the 7/13 and 7/14 reports (numbers refreshed, not rebuilt, per standing practice since nothing material changed); (3) VTI — the trader's second holding, new to this coverage, with a note on why a traditional DCF doesn't apply to a diversified index fund; (4) GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-15) is still **OMCL**, unchanged for an eleventh-plus consecutive cycle — already covered under (2), no new build required.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | ~$211.81-212.53 (7/15) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~29% downside to DCF fair value.** Price ground higher again (+~4% since 7/13's $208 read); the gap widened, not narrowed. No fundamental change to the model. |
| **OMCL** | $46.51 (7/15, verified live via trader's Robinhood check) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **MODESTLY UNDERVALUED — ~21% upside to DCF fair value.** Price ran up from $45.08 (7/14) toward the top of GS's entry zone; upside compressed slightly but the call is unchanged. Still the only name in this book where the DCF agrees with GS's conviction rather than rebutting it. |
| **VTI** | ~$372.71-372.74 (7/15) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** A ~3,600-holding total-market index fund has no discrete cash-flow stream to discount; see Section 3 for the substitute valuation lens used instead. |

**Bottom line for the trader:** Nothing this run changes prior conclusions. NVDA keeps getting more expensive relative to a fundamentally unchanged fair-value estimate — the case for not adding is, if anything, stronger than on 7/13. OMCL's price is drifting up toward the analyst-target cluster and GS's own $42-46 entry zone's ceiling; it's still cheap on my model, but the margin of safety is thinner than it was two days ago — worth noting given how close the account is to a potential trigger-driven entry. VTI isn't a valuation call at all; it's a structural allocation decision that BR's lane, not mine, already covers.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/13-14
Price continued climbing: $207.57 (7/14 AM) → ~$211.81-212.53 today, a fresh high-water mark for the position, driven by broad AI-demand optimism and a Commerce Department official confirming H200 chip shipments to China are "trivial" in volume — explicitly a non-event per GS's own read, not a fundamental catalyst. No earnings print until 8/26; no change to the FY2027E-FY2031E revenue/margin build, the "Kyber" 2028 slip, or the tightened Asian-buyer "white list" already logged on 7/14 (a narrower addressable reseller base at the margin, immaterial to the core hyperscaler revenue path the model is built on).

### Verdict: **OVERVALUED, gap widened**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's ~$211.81 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~28.9% downside** from $211.81 — modestly wider than the 7/13-14 read (~27-28%), consistent with a stock that's run further without any change to the underlying model. No change to the verdict or the key breakable assumptions (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck remain the downside breaks — full writeup in the 7/10 report via git history). **Still a hold-for-other-reasons position, not an add.**

---

## 2. Omnicell (OMCL) — brief update, model unchanged

### What changed since 7/14
Price moved from $45.08 to $46.51 (live-verified via the trader's own Robinhood check this morning) — a ~3.2% move that pushes the stock to the very top of GS's $42-46 entry zone (GS itself now frames $46.51 as "just above the top of the zone — acceptable, not extended, but don't chase materially higher"). No company-specific news since the 7/14 build: next earnings still 7/30 (15 days out per JPM), guidance unchanged, no fresh 8-K or leadership news. The healthcare-rotation tailwind (Bloomberg 7/13) is now on its third day as a sourced narrative rather than a single-article flash — still short of a multi-week track record but no longer brand-new either.

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~21.2% upside** from today's $46.51 — down from ~25% on 7/14 purely on the price move, not a model change. Still 11 of 15 sensitivity cells sit at or above spot.

### Verdict: **MODESTLY UNDERVALUED, margin of safety thinner than 7/14**
The call hasn't flipped, but the cushion has compressed meaningfully in two trading days (from $45.08 to $46.51, roughly a third of the way from the entry zone's floor to its ceiling). Flagging explicitly for the trader: if OMCL keeps running at this pace before any of the three falsifiable geopolitical de-escalation triggers in state.md fires, the valuation case — while still intact — will have less room for error than it did when this build was first run. This is a data point for sizing discipline, not a reason to change the underlying verdict.

### Key assumptions that could break this model (unchanged from 7/14)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~4.2%, combined with margin expansion continuing at the Q1 rate — plausibly pushes fair value into the $65-85 range.
- **Downside break**: a renewed rate-hike cycle or health-system capex pullback hits bookings before it shows in trailing revenue; the sector-rotation tailwind is still a young (now ~3-day-old) narrative that needs to prove durable.

---

## 3. Vanguard Total Stock Market ETF (VTI) — why no DCF applies, and what to watch instead

VTI holds ~3,600 US equities weighted by market cap; there is no single, coherent 5-year cash-flow projection to discount the way there is for a single operating company — the "cash flows" are an aggregate of the entire investable US equity market, and any DCF built on it would just be reverse-engineering the market's own implied discount rate, which is circular rather than informative. This valuation discipline exists to check individual-name mispricing, not to second-guess a diversified basket bought for structural allocation reasons (BR's core-sleeve gap, per state.md's 7/14-15 notes) rather than a stock-picking thesis.

**Substitute lens** (directional, not a fair-value point estimate): the US total market currently trades around 22-24x forward earnings, above its ~17-18x long-run historical average — consistent with a market that's priced for continued AI-capex-driven earnings growth and is vulnerable to multiple compression if that growth disappoints or if the 10Y (currently ~4.62%) moves materially higher. This is a market-level valuation-stretch observation, not a sell signal for a core-sleeve holding meant to be held indefinitely, and it doesn't change the "not applicable" verdict above.

**Read on the trader's position**: $10 VTI buy at ~$372.72 (7/15) was a structural allocation decision, correctly reasoned by BR as distinct from single-name idiosyncratic risk. Nothing in this section argues for or against adding — that's an allocation-cadence question for BR's report, not a valuation call for this one.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-15)
GS still ranks OMCL #1 for an eleventh-plus consecutive cycle, now explicitly noting today's $46.51 print sits "just above the top" of its own $42-46 entry zone. My model agrees directionally (still undervalued) while flagging the compressing margin of safety noted above — a nuance worth surfacing since GS's framing ("acceptable, not extended") and my framing ("still cheap, but less cheap than two days ago") are consistent but not identical in emphasis. On NVDA, GS's report doesn't re-screen it as a new idea either — full agreement that today's H200 "trivial volumes" story is a non-event. GS's new ideas this cycle (OXY, PTCT, EXEL) remain outside this report's coverage per the standing one-cycle-old vetting gate — will build a DCF on whichever (if any) survives cross-analyst scrutiny into a second cycle.

## Explicit read on trader's current positions (NVDA, OMCL, VTI)
**NVDA**: unchanged — the DCF does not support adding at ~$211.81-212.53; existing ~$5 notional position isn't worth trading out of on valuation grounds alone given the "no trade without a fresh catalyst" discipline in state.md.
**OMCL**: not yet a position, still GS's actionable #1 idea pending the macro-shock veto clearing. Valuation case intact but margin of safety has compressed from ~25% to ~21% upside in two trading days — a reason for the trader to lean toward sizing at or near the previously-discussed range rather than assuming unlimited room to wait, if/when a trigger fires.
**VTI**: hold, no valuation view to offer — this report doesn't second-guess a diversified core-sleeve buy on DCF grounds, and no DCF-based case exists to add or trim it here.
