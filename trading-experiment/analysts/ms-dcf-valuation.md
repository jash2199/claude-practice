# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-13 (update run)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA — the trader's sole current holding (brief update, no material change since 7/10), and (2) Micron (MU) — the new #1 pick from analysts/gs-stock-screener.md's 2026-07-13 report (full new build; replaces SNX, which GS itself downgraded to #4 this cycle after my prior report pushed back on their bull case).*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | ~$208 (7/13) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~28% downside to DCF fair value.** No material change from 7/10 read; price is essentially flat ($210→$208) and nothing in the last 3 days moves the fundamental model. |
| **MU** | ~$979 (verified 7/13 quote — see price discrepancy flag below) | ~$287 (WACC 14%, g 3%) | **SHARPLY OVERVALUED — ~71% downside to DCF fair value.** Even the most aggressive corner of my sensitivity grid (12% WACC / 4% terminal growth) only reaches ~$363 — still ~63% below spot. The current price is underwritten by a permanence assumption (peak-cycle 80%+ gross margins, HBM scarcity pricing persisting indefinitely) that a disciplined DCF cannot support for a historically cyclical commodity-memory business. |

**Bottom line for the trader:** neither name in this cycle's coverage clears my bar for a valuation-driven buy. NVDA remains a hold-for-other-reasons position, not an add. MU — GS's new #1 conviction idea this cycle — is where I want to be loudest: this is a name whose *business* is genuinely having a historic quarter (record results, HBM sold out through 2026), but the *stock* is pricing that historic quarter as the new steady state rather than the peak of a memory supercycle. That's exactly the gap between "great company" and "great price" this persona exists to flag.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/10
Not much, fundamentally. Price is flat (~$210 → ~$208, -1%). No earnings print (next catalyst remains 8/26, per JPM's tracking). Two incremental data points worth logging but not yet model-moving:
- Reuters reporting DeepSeek is building its own AI chip to reduce Nvidia dependence — a modest negative for the "moat/pricing power" side of the thesis, still speculative/early.
- NVDA's China data-center revenue has reportedly gone from ~$4.6B/year run-rate to effectively $0 under current export restrictions — this is the "downside break" scenario I flagged on 7/10 (China export policy risk) now partially realized. It doesn't change my base case because my FY2027E-FY2031E revenue path already excluded meaningful China contribution per management guidance at the time, but it's confirmation the risk I flagged is live, not hypothetical.
- Broader chip-sector selloff (Philly Semi -10.8% over 10 sessions, SK Hynix -15% in a day) is sentiment/multiple compression across the group, not NVDA-specific fundamentals — consistent with my 7/10 view that NVDA's ~$210 print was pricing flawless execution; a sector-wide de-rating is the market starting to agree.

### Verdict: **OVERVALUED, unchanged**
Re-running the same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's ~$208 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~28% downside** from $208 — essentially identical to the 7/10 read (was ~28% downside from $210). No change to the verdict or the key assumptions that could break the model (see 7/10 report / git history for the full writeup — margin durability is the upside break, China/Blackwell-Rubin execution/HBM supply bottleneck are the downside breaks, all still live).

---

## 2. Micron (MU) — full new build

### Snapshot
- Current price: **$979.30** (verified quote, 7/13/26) — market cap ~$1.11T on ~1.13B shares outstanding
- **Price discrepancy flag**: GS's 7/13 screener lists MU at "~$730 (down ~25% from record high)." My independently verified quote today is $979.30, down ~20% from the 52-week high of $1,255. I cannot reconcile the $730 figure against any quote source I pulled — it may reference an intraday low, a stale snapshot, or a data error on GS's side. **I'm using $979.30 as the working current price** (it's consistent across market-cap cross-check: $979.30 × 1.13B ≈ $1.11T, which matches independently reported market cap). Flagging this loudly per the same discipline as the 7/12 SNX price-conflict note — verify live Robinhood quote before sizing anything.
- FY2026 quarterly revenue trajectory: Q1 $13.64B → Q2 $23.86B → Q3 $41.46B (record, +346% YoY) → Q4 guide $50.0B ±$1.0B. Implied FY2026 revenue ≈ **$129.0B**, up from FY2025's much smaller base — a genuine step-change, not incremental growth.
- FY2026 consensus non-GAAP EPS ≈ $57.71 (vs. $7.68 FY2025, +651%); FY2027 consensus ≈ $97.77 (+69% further).
- Entire 2026 HBM supply sold out under fixed-price contracts; HBM4 volume production started for Nvidia's Vera Rubin platform. Multi-year customer commitments extend beyond 2027.
- Balance sheet: cash & investments ~$30.1B, total debt ~$5.7B → **net cash ~$24.4B**, and actively de-levering (>$5B debt repaid over the last three quarters).
- FY2026 capex >$25B (fab expansion: Idaho, New York, Singapore, Hiroshima). 9-month FY2026 operating cash flow $45.7B vs. capex $19.6B → 9-month FCF ~$26.1B, FCF margin ~33% on 9-month revenue of $78.96B.
- Beta: 2.1-2.5 depending on source (Google 2.14, CNBC 2.17, GuruFocus 2.50) — I use **2.1** as a reasonably conservative read, still reflecting genuinely high volatility (stock has moved from a 52-week low of $103 to a high of $1,255 — a >12x range).

### 5-year revenue projection
Base year FY2026E revenue ≈ $129.0B (actuals through Q3 + Q4 guide midpoint).

| FY | Revenue ($B) | YoY growth | Basis |
|---|---|---|---|
| FY2027E | $165 | +28% | Continued HBM ramp off a sold-out 2026 book and new capacity coming online from the $25B+ FY26 capex program, but decelerating hard off FY26's triple-digit step-change — physical fab capacity, not demand, becomes the binding constraint |
| FY2028E | $190 | +15% | New capacity (Idaho/NY/Singapore/Hiroshima) reaches volume; competitors (Samsung, SK Hynix) also add HBM capacity, capping further acceleration |
| FY2029E | $205 | +8% | Supply catches up to demand industry-wide; classic memory-cycle dynamic reasserts — this is the year I'd expect the first real pricing pushback |
| FY2030E | $215 | +5% | Growth normalizes toward AI-infra-capex-linked, GDP-plus trend |
| FY2031E | $223 | +4% | Approaching terminal growth |

### Operating margin / FCF margin — where the model earns its keep
This is the crux of the valuation. FY2026's ~33% FCF margin (9-month actual) is a **peak-cycle print**: 80-86% gross margins on memory are a historical anomaly driven by a severe, temporary HBM supply shortage, not Micron's normal-state economics. Memory is a commodity, cyclical business — Micron has posted GAAP losses and single-digit-or-negative FCF margins in prior down-cycles (2019, 2022-23). I model mean reversion, not a permanent re-rate to systems-company margins:

| FY | FCF margin | FCF ($B) | Rationale |
|---|---|---|---|
| FY2027E | 33% | $54.5 | Sold-out 2026 HBM book still supports pricing through most of FY27 |
| FY2028E | 26% | $49.4 | New industry-wide HBM capacity starts pressuring ASPs |
| FY2029E | 20% | $41.0 | Full mean-reversion begins as supply/demand balances |
| FY2030E | 16% | $34.4 | Approaching a "good cycle, not a supercycle" steady state |
| FY2031E | 14% | $31.2 | Still structurally above Micron's pre-AI historical average (HBM mix-shift is a real, durable positive), but nowhere near FY26's peak |

Note the FCF *dollar* figure actually declines over the projection window despite revenue growth — margin normalization dominates volume growth. That's the mechanical heart of the overvaluation call, and it's the single assumption most worth stress-testing (see "upside break" below).

### WACC
- Risk-free rate (10Y UST, 7/13): 4.54%
- Beta: 2.1 (mid-range of 2.14-2.50 sourced; already high, reflecting genuine cyclical volatility)
- Equity risk premium: ~4.6%
- Cost of equity = 4.54% + 2.1 × 4.6% ≈ **14.2%**
- Debt is immaterial to blended WACC: $5.7B debt vs. ~$1.11T market cap (D/V ~0.5%) — company is net-cash and de-levering
- **WACC range used: 12%-16%, base case 14%**

### Sensitivity table — fair value per share

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 12% | $318.8 | $338.3 | $362.7 |
| 13% | $295.0 | $310.3 | $329.2 |
| **14% (base)** | $275.0 | **$287.3** | $302.2 |
| 15% | $258.0 | $268.1 | $280.1 |
| 16% | $243.3 | $251.7 | $261.5 |

Net cash of ~$24.4B added to enterprise value; 1.13B shares outstanding. Every cell in this 15-cell grid falls between $243 and $363 — **not one combination of WACC/terminal-growth I consider defensible gets within 60% of the $979 spot price.**

### Gut-check against a more bullish margin path
To stress my own conservatism: even if FY26's ~33% FCF margin were held **flat** (no compression at all) across the full 5-year window on the same revenue path — an aggressive, not-my-base-case assumption that the AI-memory supercycle simply never ends — base-case fair value (WACC 14%, g 3%) rises to only ~$535, still ~45% below spot. To actually justify $979 you need some combination of: FCF margins staying near peak *and* materially faster revenue growth than my path *and* a terminal growth rate well above the 2-4% range I consider defensible for a commodity-cyclical business. That's a lot of "and"s stacked in the market's favor.

### DCF vs. market price
Base case ($287.3) implies **~71% downside** from the current $979.30 price. This is the most extreme overvaluation call in this persona's coverage history to date (NVDA's ~28% and 7/10 SNX's "modestly undervalued" both look mild by comparison).

### Verdict: **SHARPLY OVERVALUED**
The market is capitalizing a single blowout supercycle year (and a bit of FY27 spillover) as if it's the new permanent baseline for a business that has, historically, been one of the most cyclical in all of large-cap tech. GS's own screener leans on "UBS says forward semi valuations aren't bubble territory (~26x vs. dotcom's ~150x)" as the bull argument — but a *sector* forward P/E comparison to the dotcom bubble says nothing about whether *this specific name's* current-year earnings are a representative base for a multi-year DCF. They aren't, by Micron's own history.

### Key assumptions that could break this model
- **Upside break (the real one to watch)**: if the HBM/AI-memory supply shortage proves structural rather than cyclical — i.e., multi-year customer commitments "beyond 2027" turn into a genuinely new, durable higher-margin equilibrium for the whole industry (not just Micron), rather than the classic pattern of capacity catching up and pricing collapsing — my mean-reversion assumption is wrong and fair value moves substantially higher. This is GS's implicit bet. Watch: (a) whether Samsung/SK Hynix capacity additions actually come online on the timelines currently expected, (b) whether HBM pricing shows the first signs of softening in FY27 contracts, (c) whether the "sold out through 2026" commentary extends into FY28 sold-out language in coming quarters (would be a strong bullish tell).
- **Downside break**: memory has never NOT eventually cycled down; a demand-side shock (AI capex digestion/pause across hyperscalers) would hit an industry already running near-100% utilization far harder than my base case, given how much fixed-cost operating leverage is currently working in Micron's favor on the way up (and would work against it on the way down).
- **Data-quality flag carried forward**: the $730 vs. $979 price conflict with GS's report (see above) is itself worth resolving before anyone sizes an entry off either report's numbers.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-13)
GS ranks MU #1 this cycle citing a ~25% pullback from highs as a "materially better entry" and cites UBS's sector-level "not bubble territory" call. My DCF doesn't dispute that MU is cheaper today than three weeks ago — it disputes that "cheaper than an all-time-high peak print" is the same claim as "cheap." GS's own bull case of $1,150 (12mo) implies the market needs to re-rate MU *higher* from an already-DCF-unsupportable price; my model finds no scenario in a 15-cell grid that gets within 60% of even today's spot, let alone GS's bull target. I'd frame this the same way I framed the 7/10 SNX disagreement (which GS itself has since folded into a downgrade): the business momentum is real, the price already assumes the momentum is permanent, and those are different claims. GS's own risk score (6/10, down from 7) reflects reduced *entry-price* risk, not reduced *cyclical* risk — I'd argue the cyclical risk here is actually the dominant one for a 2026 memory name and it's structurally under-weighted in GS's framework.

No fresh BW risk-assessment or BR portfolio-builder reports to cross-check against this cycle (both last posted 7/10 per prior read — will re-check next run).

## Explicit read on trader's NVDA hold
Unchanged from 7/10: the DCF does not support adding to NVDA at ~$208, and the position (currently ~$5 notional, cost basis $201.40) isn't worth trading out of on valuation grounds alone given the "no trade without a fresh catalyst" discipline. Nothing this run changes that read.

## Explicit read on MU as a potential new position
If the trader is weighing GS's #1 pick as the vehicle for deploying idle capital, my model is a clear, loud **no** on valuation grounds — independent of GS's own entry-timing caveat (macro shock in progress) or the sector-wide selloff context. This isn't a "wait for a better entry" call like OMCL was in the 7/12 cross-analyst synthesis; it's a "the entry price would need to be dramatically lower, not just modestly lower, for the DCF to clear" call. Of GS's current top-3 (MU, AVGO, OMCL), I have not yet built AVGO or re-underwritten OMCL this cycle — flagging that gap for a future run rather than implying a comparative verdict I haven't done the work for yet.
